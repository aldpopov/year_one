#include "repository.h"

int main() {
    FILE *f;
    f = fopen("BD.bin", "wb");
    char surnames[][MAXCHAR] = {"Kovalev", "Filova", "Shalov", "Kazunov", "Tihonov", "Zaharov", "Paromonova", "Ivanov", "Klimov", "Tereshkova", "Petrov"};
    char initials[][MAXCHAR] = {"AD", "RP", "VP", "RR", "MA", "MO", "TA", "AV", "BU", "MM", "TO"};
    char sex[][MAXCHAR] = {"M", "F"};
    char group[][MAXCHAR] = {"M106", "M107", "M108"};
    char exam[][MAXCHAR] = {"MATH", "RUS", "HISTORY", "PHYSICS", "PE", "COMPUTER SCIENCE"};
    
    for(int i = 0; i < 11; i++) {
        Student *s = malloc(sizeof(Student));
        strcpy(s->surname, surnames[rand()%11]);
        strcpy(s->initials, initials[rand()%11]);
        strcpy(s->sex, sex[rand()%2]);
        strcpy(s->group, group[rand()%3]);
        int count = rand()%4+1;
        for(int i = 0; i<count; i++) {
            test *t = malloc(sizeof(test));
            strcpy(t->name, exam[rand()%6]);
            t->score = rand() % 5;
            add_test_to_student(t, s);
        }
        s->count = count;
        add_student(s, f);
    }
    
    fclose(f);
    
    f = fopen("BD.bin", "rb");
    fprintf(stdout, "+---------------+--------+---+----------+-----\n");
    fprintf(stdout, "|    Surname    |initials|sex|  group   |exams\n");
    Student s;
    while (get_student(&s, f) == 0) {
        fprintf(stdout, "+---------------+--------+---+----------+");
        if(s.tests != NULL) {
        for(int i = 0; i < s.count; i++) {
            for(int j = 0; j < strlen(s.tests[i]->name); j++) fprintf(stdout, "-");
            fprintf(stdout, "--+");
        }
        }
        fprintf(stdout, "\n");
        fprintf(stdout, "|%-15s|   %c.%c  | %s |%-10s|", s.surname, s.initials[0], s.initials[1], s.sex, s.group);
        if(s.tests != NULL) {
        for(int i = 0; i < s.count; i++) fprintf(stdout, "%c %d|", s.tests[i]->name, s.tests[i]->score);
        }
        fprintf(stdout, "\n");
        fprintf(stdout, "+---------------+--------+---+----------+");
        if(s.tests != NULL) {
        for(int i = 0; i < s.count; i++) {
            for(int j = 0; j < strlen(s.tests[i]->name); j++) fprintf(stdout, "-");
            fprintf(stdout, "--+");
        }
            fprintf(stdout, "\n");
        }
        }
    return 0;
}
