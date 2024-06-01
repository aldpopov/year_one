#include "table.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortTable(table **Table)
{
    //int i, j;
    int left = 0;
    int right = (*Table)->countK - 1;
    int swap = 1;
    char temp[255];
    while ((left < right) && swap > 0)
    {
        swap = 0;
        for (int i = left; i < right; i ++)
        {
            if (strcmp((*Table)->key[i], (*Table)->key[i + 1]) > 0)
            {
                strcpy(temp, (*Table)->key[i]);
                strcpy((*Table)->key[i], (*Table)->key[i + 1]);
                strcpy((*Table)->key[i + 1], temp);
                strcpy(temp, (*Table)->content[i]);
                strcpy((*Table)->content[i], (*Table)->content[i + 1]);
                strcpy((*Table)->content[i + 1], temp);
                swap = 1;
            }
        }
        right--;
        for (int j = right; j > left; j--)
        {
            if (strcmp((*Table)->key[j - 1], (*Table)->key[j]) > 0)
            {
                strcpy(temp, (*Table)->key[j]);
                strcpy((*Table)->key[j], (*Table)->key[j - 1]);
                strcpy((*Table)->key[j - 1], temp);
                strcpy(temp, (*Table)->content[j]);
                strcpy((*Table)->content[j], (*Table)->content[j - 1]);
                strcpy((*Table)->content[j - 1], temp);
                swap = 1;
            }
        }
        left++;
        if(swap == 0)
        {
            break;
        }
    }
    /*for (i = 0; i < (*Table)->countK - 1; i++)
    {
        for (j = 0; j < (*Table)->countK - i - 1; j++)
        {
            if (strcmp((*Table)->key[j], (*Table)->key[j + 1]) > 0)
            {
                strcpy(temp, (*Table)->key[j]);
                strcpy((*Table)->key[j], (*Table)->key[j + 1]);
                strcpy((*Table)->key[j + 1], temp);

                strcpy(temp, (*Table)->content[j]);
                strcpy((*Table)->content[j], (*Table)->content[j + 1]);
                strcpy((*Table)->content[j + 1], temp);
            }
        }
    }*/
}

void insertData(table **Table)
{
    (*Table) = (table *)malloc(sizeof(table));
    (*Table)->countK = 0;
    FILE *file = fopen("keys3.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    char key[16];

    while (fgets(key, sizeof(key), file) != NULL)
    {
        for (int i = 0; i < 16; i++)
        {
            if (key[i] == '\n')
            {
                key[i] = '\0';
            }
        }
        strcpy((*Table)->key[(*Table)->countK++], key);
    }

    fclose(file);
    (*Table)->countC = 0;
    FILE *file2 = fopen("content3.txt", "r");
    if (file2 == NULL)
    {
        printf("File error occured\n");
        exit(1);
    }

    char content[255];

    while (fgets(content, sizeof(content), file2) != NULL)
    {
        strcpy((*Table)->content[(*Table)->countC++], content);
    }

    fclose(file2);
}

void binarySearch(table *Table, char *key)
{
    int left = 0;
    int right = Table->countK - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (strcmp(Table->key[mid], key) == 0)
        {
            printf("Key: %s, Value: %s\n", Table->key[mid], Table->content[mid]);
            return;
        }
        else if (strcmp(Table->key[mid], key) < 0)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("Key not found\n");
}

void printTable(table *Table)
{
    if (Table == NULL)
    {
        printf("Table error occured\n");
        exit(1);
    }
    for (int i = 0; i < Table->countK; i++)
    {
        printf("Key: %s\nValue: %s\n", Table->key[i], Table->content[i]);
    }
}

int main()
{
    table *Table = NULL;

    char command[100];
    char key[16];

    while (1)
    {
        scanf("%s", command);

        if (strcmp(command, "insert") == 0)
        {
            insertData(&Table);
            continue;
        }
        if (strcmp(command, "sort") == 0)
        {
            printTable(Table);
            sortTable(&Table);
            printf("______________________________________________\n");
            printTable(Table);
            continue;
        }
        if (strcmp(command, "binarySearch") == 0)
        {
            scanf("%s", key);
            binarySearch(Table, key);
            continue;
        }
        if (strcmp(command, "print") == 0)
        {
            printTable(Table);
            continue;
        }
        if (strcmp(command, "exit") == 0)
        {
            free(Table);
            return 0;
        }
    }
}