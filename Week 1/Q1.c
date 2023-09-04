#include <stdio.h>

int main(){
    FILE *fa;
    int ca, chars=0, lines=1;
    fa = fopen("text.txt", "r");

    if (fa == NULL){
        printf("Cannot open file  \n");
    }
    while(ca != EOF){
        chars++;

        if(ca == '\n')
            lines++;

        ca = getc(fa);
    }

    printf("=== File information === \nNumber of Lines : %d\nNumber of charaters : %d\n", lines, chars);

    fclose(fa);
    return 0;
}