#include <stdio.h>
#include <ctype.h>

unsigned int char_to_set(char c) {
    c = tolower(c);
    if(c < 'a' || c > 'z') {
        return 0;
    } else {
        return 1u<<(c - 'a');
    }
}

int is_sep(int h){
    return (h == ' ') || (h == ',') || (h == '\t') || (h == '\n') || (h == EOF);
}

int main()
{
    unsigned int consonant_letters = 66043630;
    char alpha;
    int c;
    unsigned int letters_set = 0;
    unsigned int used_cons = consonant_letters;
    
    while((c = getchar())) {
        letters_set = letters_set | char_to_set(c);
        if(is_sep(c) == 1 && letters_set != 0) {
            used_cons = used_cons & letters_set;
            letters_set = 0;
        }
        if(c == EOF) {
            break;
        }
    }
    printf("\n");
    for(alpha = 'a'; alpha <= 'z'; alpha++) {
        if((used_cons & char_to_set(alpha)) != 0) {
            printf("%c", alpha);
        }
    }
}
