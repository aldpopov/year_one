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