# Отчёт по лабораторной работе №26
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Попов Александр Дмитриевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Модульное программирование на языке Си.
2. **Цель работы**: Работа с абстрактными типами данных и модульное программирование.
3. **Задание:** Отсортировать два стека, упорядоченных по возрастанию, при помощи слияния.
4. **Идея, метод, алгоритм решения задачи**: Написать заголовочный файл с функциями, реализующими стек, а также сортировку стеков слиянием и "переворот" стека;
5. **Сценарий выполнения работы**: Реализовать стек при помощи структур; получив два стека на вход функции merge_sort, сравнивать верхние элементы и закладывать больший из них в новый стек, пока оба входных стека не опустеют; развернуть стек, полученный в merge_sort, убирая по одному элементу сверху и добавляя в новый стек;

| Входные данные                              | Выходные данные                        |
|---------------------------------------------|----------------------------------------|
| -123 -12 -12 0 0; -1234 -12 0 123 12        | -1234 -123 -12 -12 -12 0 0 0 123 12    |
| 0 1; -1 0                                   | -1 0 0 1                               |

6. **Протокол**:
```
#include <stdio.h>
#include <string.h>
#include "stack_list.h"


int get_int(void) {
    int num;
    
    while (1) {
        printf("Enter value: ");
        if (scanf("%d", &num) == 1) {
            break;
        } else {
            printf("Invalid input. Please enter an integer.\n");
            while(getchar() != '\n');
        }
    }
    
    return num;
}

int main()
{
    int value;
    Stack *s = stack_create();
    Stack *s_2 = stack_create();
    
    char ans[100];
    printf("Type y between values to update your first stack. Type e to start working with second stack.\n");
    while (1) {
        scanf("%s", ans);
        if (strcmp(ans, "y") == 0) {
            value = get_int();
            stack_push(s, value);

        }
        if (strcmp(ans, "p") == 0) {
            stack_print(s);
        }
        if (strcmp(ans, "e") == 0) {
            break;
        }
    }
    printf("Type y between values to update your second stack. Type e to see sorted third stack.\n");
    while (1) {
        scanf("%s", ans);
        if (strcmp(ans, "y") == 0) {
            value = get_int();
            stack_push(s_2, value);

        }
        if (strcmp(ans, "p") == 0) {
            stack_print(s_2);
        }
        if (strcmp(ans, "e") == 0) {
            printf("Sorted new stack:\n");
            break;
        }
    }
    
    Stack *merge = stack_create();
    merge_sort(s, s_2, merge);
    Stack *reverse = stack_create();
    stack_reverse(merge, reverse);
    stack_print(reverse);
    stack_destroy(merge);
    stack_destroy(reverse);
    stack_destroy(s);
    stack_destroy(s_2);
}

```
7. **Замечания автора** Отсутствуют.
8. **Выводы**:  Эта работа поможет вспомнить базовые методы сортировки и абстрактные типы данных и освоиться в модульном программировании с использованием заголовочных файлов.
