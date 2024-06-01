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

