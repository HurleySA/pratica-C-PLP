#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char pa1[50],pa2[50],pa3[50],pa4[50],pa5[50];
    gets(pa1);
    gets(pa2);
    gets(pa3);
    gets(pa4);
    gets(pa5);


    char resul[50] = strcat(verificaUltimaVogal(pa1),verificaUltimaVogal(pa2));

    printf("/n%s", result);

    return 0;



}

char verificaUltimaVogal(char var[]){
    int index = strlen(var);
    switch (var[index]){
        case 'a':
            return 'a';
        case 'e':
            return 'e';
        case 'i':
            return 'i';
        case 'o':
            return 'o';
        case 'u':
            return 'u';
        default
    }

}

