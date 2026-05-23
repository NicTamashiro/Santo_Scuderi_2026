#include <stdio.h>
#include <string.h>

int main(){
    char pernas[10];
    do {
        scanf(" %9[^\n]", pernas);

        if(!strcmp(pernas, "esquerda")){
            printf("ingles\n");
        } else if(!strcmp(pernas, "direita")){
            printf("frances\n");
        } else if(!strcmp(pernas, "nenhuma")){
            printf("portugues\n");
        } else {
            printf("caiu\n");
        }

    } while(strcmp(pernas, "as duas"));

    return 0;
}