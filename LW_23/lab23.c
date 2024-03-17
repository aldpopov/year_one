#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
 
struct Node  
{ 
    int data; 
    struct Node *left, *right; 
}; 
 
struct Node *newNode (int data) {  
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data; 
    node->left = node->right = NULL; 
    return node; 
} 

struct Node *insert(struct Node* root, int value) {
    if (root == NULL) {
        return newNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

int isSymmetric (struct Node *X, struct Node *Y) { 
    if (X == NULL && Y == NULL) { 
        return 1; 
    } else if (X == NULL || Y == NULL) { 
        return 0; 
    } else { 
        return isSymmetric(X->left, Y->right) && isSymmetric (X->right, Y->left); 
    } 
} 
 
int isSymmetricHelper (struct Node *root) {  
    if (root == NULL) { 
        return 1;  
    } 
    return isSymmetric (root->left, root->right);  
} 

struct Node* deleteNode(struct Node* root, double value) {
    if (root == NULL) {
      return root;
    } else {
      if(value == root->data) {
        if (root->left == NULL && root->right == NULL) 
        {
          free(root);
          return NULL;
        } else if(root->left == NULL) {
          struct Node* t = root->right;
          free(root);
          return t;
        } else if (root->right == NULL) {
          struct Node* t = root->left;
          free(root);
          return t;
        } else {
          struct Node * m_r ; 
          struct Node * act = root->right;
          while (act->left != NULL) {
            act = act->left;
          }
          m_r = act;
          root->data = m_r->data;
          root->right = deleteNode(root->right, m_r->data);
        }
      } else {
        if (value < root->data) {
          root->left = deleteNode(root->left, value);
        } else if (value > root->data) {
          root->right = deleteNode(root->right, value);
        }
      }
      return root ;
    }
}

struct Node* freeTree(struct Node* root) {
    if (root == NULL) {
        return root;
    }
    
    freeTree(root->left);
    freeTree(root->right);
    
    free(root);
    return 0;
}

void printTree(struct Node *root, int indent) { 
    if (root == NULL) { 
        return; 
    } 
 
    indent += 5; 
 
    printTree(root->right, indent); 
 
    printf("\n"); 
    for (int i = 5; i < indent; i++) { 
        printf(" "); 
    } 
 
    printf("%d\n", root->data); 
 
    printTree(root->left, indent); 
}



int get_int(void) {
    int num;
    
    while (1) {
        printf("Enter node value: ");
        if (scanf("%d", &num) == 1) {
            break;
        } else {
            printf("Invalid input. Please enter an integer.\n");
            while(getchar() != '\n');
        }
    }
    
    return num;
}

int main () {  
    struct Node *root = NULL;
    int value;
    int started = 0;
    char ans[100];
    printf("Type y between node values to update your tree. Type n to check if it's symmetric.\n");
    while (1) {
        scanf("%s", ans);
        if (strcmp(ans, "y") == 0) {
            if(root == NULL) {
                value = get_int();
                started = 1;
                root = newNode(value);
            } else {
                value = get_int();
                started = 1;
                insert(root, value);
            }
            continue;
        }
        if (strcmp(ans, "print") == 0) {
            printTree(root, 5);
            continue;
        }
        if (strcmp(ans, "delete") == 0) {
            value = get_int();
            root = deleteNode(root, value);
            continue;
        }
        if ((strcmp(ans, "n") == 0) && (started == 1)) {
            if (isSymmetricHelper (root)) { 
                printf ("The binary tree is symmetric\n");  
            } else { 
                printf ("The binary tree is not symmetric\n"); 
            } 
            break;
        }
    }
    root = freeTree(root);
    return 0;  
}
