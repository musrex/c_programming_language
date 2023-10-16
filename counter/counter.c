#include <stdio.h>

/* count lines in input */
main(){
    long nc;
    
    printf("EOF is <CTRL> + D");
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
