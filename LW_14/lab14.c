#include <stdio.h>


int main() {
    int m[100][100];

    int grade;
    scanf("%d", &grade);
    for (int i = 0; i != grade; ++i) {
        for (int j = 0; j != grade; ++j) {
            scanf("%d", &m[i][j]);
        }
    }
    int count = 1;
    int start_row = 0;
    int start_column = 0;
    int end_row = grade - 1;
    int end_column = grade - 1;
    while(count <= grade * grade){
        for(int i = start_row; i < end_row + 1; i++) {
            printf("%d ", m[i][start_column]);
            count += 1;
        }
        start_column += 1;
        
        for(int i = start_column; i < end_column + 1; i++) {
            printf("%d ", m[end_row][i]);
            count += 1;
        }
        end_row -= 1;
        
        for(int i = end_row; i > start_row - 1; i--) {
            printf("%d ", m[i][end_column]);
            count += 1;
        }
        end_column -= 1;

        for(int i = end_column; i > start_column - 1; i--) {
            printf("%d ", m[start_row][i]);
            count += 1;
        }
        start_row += 1;
    }
}