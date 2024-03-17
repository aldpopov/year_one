# Отчёт по лабораторной работе №23
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Попов Александр Дмитриевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Двоичные деревья на Си.
2. **Цель работы**: Научиться работать с двоичными деревьями.
3. **Задание:** Проверить, является ли двоичное дерево симметричным.
4. **Идея, метод, алгоритм решения задачи**: Написать основу кода, которая позволит задать любое упорядоченное двоичное дерево; при попомщи рекурсии проверить, является ли дерево симметричным;
5. **Сценарий выполнения работы**: Написать структура узла с учётом левого и правого дочерних узлов (родители в этой задаче не понадобятся); создать функцию, которая внедрит новый узел в дерево при помощи рекурсии и сравнения введённых данных со значеним в узле; Написать функцию для рекурсивного прохода по дереву в поисках узлов со значением NULL, чтобы узнать, является ли оно симметричным; добавить вспомогательную функцию для перехода от первого основного узла к его дочерним;

| Входные данные | Выходные данные                        |
|----------------|----------------------------------------|
| 7 4 5 8        | Not symmetric                          |
| 7 4 5 8 9      | Not symmetric                          |
| 7 4 5 9 8      | Is symmetric                           |
| 17 4 8 51 40   | Is symmetric                           |

6. **Протокол**:
```
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

struct Node* freeTree(struct Node* root) {
    if (root == NULL) {
        return root;
    }
    
    freeTree(root->left);
    freeTree(root->right);
    
    free(root);
    return 0;
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

```
7. **Замечания автора** Программа более или менее устойчива к отвратному вводу. Но лучше не проверять.
8. **Выводы**: Эта работа очень важна, потому что она познакомила меня с понятием двоичных деревьев и помогла решить простейшую задачу на определение симметричности дерева. Кроме того, работа со структурами, использованными в этой лабораторной, в дальнейшем будет ключевой частью решения задач.
