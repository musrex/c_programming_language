#include <stdio.h>

/* Write a function that reverses the character string s. Use it to write a program
 * that reverses its input line by line */

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

char reverse(char s[]);

int main(){
    int c, state;

    state = OUT; 
    while((c = getchar()) != '\n') {
        }
    return 0;
}

char reverse(char s[]){
    return s[1];  

}
