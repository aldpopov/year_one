# Отчёт по КП №6
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Попов Александр Дмитриевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Обработка последовательной файловой структуры на языке Си
2. **Цель работы**: Создать свою таблицу с информацией о студентах и их успеваемости
3. **Задание:** Выяснить количество студентов, у которых больше двух троек за экзамены
4. **Идея, метод, алгоритм решения задачи**: Создать bin файл с таблицей и информацией об их ФИО, поле, экзаменах и оценках.
5. **Сценарий выполнения работы**: После написания основного функционала и решения вопроса с памятью создать функцию для поиска людей с определённым количеством оценок.


6. **Протокол**:
```
#include "repository.h"

int main() {
    FILE *f;
    f = fopen("BD.bin", "wb");
    char surnames[][MAXCHAR] = {"Kovalev", "Filova", "Shalov", "Kazunov", "Tihonov", "Zaharov", "Paromonova", "Ivanov", "Klimov", "Tereshkova", "Petrov"};
    char initials[][MAXCHAR] = {"AD", "RP", "VP", "RR", "MA", "MO", "TA", "AV", "BU", "MM", "TO"};
    char sex[][MAXCHAR] = {"M", "F"};
    char group[][MAXCHAR] = {"M106", "M107", "M108"};
    char exam[][MAXCHAR] = {"MATH", "RUS", "HISTORY", "PHYSICS", "PE", "COMPUTER SCIENCE"};
    Student *students[11];
    for(int i = 0; i < 11; i++) {
        Student *s = malloc(sizeof(Student));
        strcpy(s->surname, surnames[rand() % 11]);
        strcpy(s->initials, initials[rand() % 11]);
        strcpy(s->sex, sex[rand() % 2]);
        strcpy(s->group, group[rand() % 3]);
        int count = rand() % 8 + 1;
        for(int j = 0; j < count; j++) {
            test *t = malloc(sizeof(test));
            strcpy(t->name, exam[rand() % 6]);
            t->score = rand() % 3 + 2;
            add_test_to_student(t, s);
            //printf("%s\n", t);
            //free(t);
        }
        //printf("%s\n", "------");
        s->count = count;
        add_student(s, f);
        students[i] = s;
    }
    for(int k = 0; k < 11; k++) {
    	free_student(students[k]);
    }
    
    fclose(f);
    
    return 0;
}

```
7. **Замечания автора** Отсутствуют
8. **Выводы**: Работа очень важна, так как помогает освоить создание простых баз данных и научиться считывать из них данные.
