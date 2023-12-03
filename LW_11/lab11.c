#include <stdio.h>
#include <ctype.h>

typedef enum {
    START_STATE,
    SEARCH_STATE,
    CHECK_FIRST,
    WORD_CHECK
}state;

int is_sep(int h){
    return (h == ' ') || (h == ',') || (h == '\t') || (h == '\n') || (h == EOF);
}

int main() {
    int ch = 0;
    int result = 0;
    int len_count = 0;
    state s = START_STATE;
    while(ch = getchar()) {
        switch(s) {
            case START_STATE: {
                if(is_sep(ch)) {
                    s = CHECK_FIRST;
                }
                else if(isxdigit(ch) && ch >= '8'){
                    len_count++;
                    s = WORD_CHECK;
                }
                else {
                    s = SEARCH_STATE;
                }
            }
            break;
            
            case SEARCH_STATE: {
                if(is_sep(ch)) {
                    s = CHECK_FIRST;
                    if(ch == EOF) {
                        goto end;
                    }
                }
            }
            break;
            
            case CHECK_FIRST: {
                if(isxdigit(ch) && ch >= '8') {
                    len_count++;
                    s = WORD_CHECK;
                }
                else if(is_sep(ch) == 0) {
                    s = SEARCH_STATE;
                }
                if(ch == EOF) {
                    goto end;
                }
            }
            break;
            
            case WORD_CHECK: {
                if(isxdigit(ch)) {
                    len_count++;
                }
                else if(is_sep(ch)) {
                    if(len_count == 16) {
                        result++;
                    }
                    len_count = 0;
                    s = CHECK_FIRST;
                    if(ch == EOF) {
                        goto end;
                    }
                }
                else {
                    len_count = 0;
                    s = SEARCH_STATE;
                }
            }
            break;
        }
    }
    end: {
        printf("\nКоличество отрицательных шестнадцатеричных чисел: %d", result);
        return 1;
    }
}