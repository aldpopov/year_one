# Отчёт по лабораторной работе №15
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Попов Александр Дмитриевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Решение задач на программирование с помощью языка C. Обработка квадратных матриц.
2. **Цель работы**: Вывести заданную матрицу особым образом.
3. **Задание:** Удалить все строки матрицы, где есть наименьший её элемент.
4. **Идея, метод, алгоритм решения задачи**: во время заполнения массива тем же образом, что и в ЛР №14, подсчитать минимальный элемент матрицы; создать новый массив, в который можно поместить удовлетворяющие условию задачи строки; вывести матрицу;
5. **Сценарий выполнения работы**: создать массив и заполнить его, одновременно установив минимальный элемент; пройти по матрице в двух циклах, помещая в submass её строки; если в строке отсутствует минимальный элемент, что проверяется при помощи булевой переменной error, сделать submass новым элементом двумерного массива result; вывести result;

| Входные данные | Выходные данные                        |
|----------------|----------------------------------------|
| 1 2 3 4        | 5 6 7 8                                |
| 5 6 7 8        | 9 10 11 12                             |
| 9 10 11 12     | 13 14 15 16                            |
| 13 14 15 16    |                                        |
| Тест №2        |                                        |
| 11 12 13 14    | 11 12 13 14                            |
| -15 -1 0 10    | 1 2 3 4                                |
| 1 2 3 4        |                                        |
| 5 6 -15 7      |                                        |
| Тест №3        |                                        |
| 0 0 0          | Вывод отсутствует                      |
| 0 0 0          |                                        |
| 0 0 0          |                                        |

6. **Протокол**:
```
#include <stdio.h>
#include <stdbool.h>

int main() {
    int grade;
    int min_ = 10000000;
    scanf("%d", &grade);
    int m[grade][grade];
    int submass[grade];
    int result[grade][grade];
    int count_row = 0;
    int new_grade = grade;
    for (int i = 0; i != grade; ++i) {
        for (int j = 0; j != grade; ++j) {
            scanf("%d", &m[i][j]);
            if(m[i][j] <= min_) {
                min_ = m[i][j];
            }
        }
    }
    printf("min: %d\n", min_);
    printf("your_array:\n");
    for(int i = 0; i < grade;i++) {
        for(int j = 0;j < grade;j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < grade; i++) {
        bool error = false;
        int counter = 0;
        for(int j = 0; j < grade; j++) {
            if(m[i][j] == min_) {
                error = true;
                new_grade--;
            }
            submass[counter] = m[i][j];
            counter++;
        }
        if(error == false) {
            for(int k = 0; k < grade; k++) {
                result[count_row][k] = submass[k];
            }
            count_row++;
        }
    }
    printf("new_array:\n");
    for(int i = 0; i < new_grade; i++) {
        for(int j = 0; j < grade; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
```
7. **Замечания автора** по существу работы: Отсутствуют.
8. **Выводы**: Лабораторная ещё дальше продвинула работу с двумерными массивами и помогла разобраться с их выводом и "поиндексным разбором".
