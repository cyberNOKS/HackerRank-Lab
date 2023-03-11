#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char chr;
    scanf("%c",&chr);
    if(isalpha(chr)==0){
        printf("Not an alphabet.");
    }
    else if (chr=='a'||chr=='e'||chr=='i'||chr=='u'||chr=='o'||chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U'){
        printf("Vowel.");
    }
    else{
        printf("Consonant.");
    }
    return 0;
}
