#include <stdio.h>
#include <stdlib.h>

void ordenar(int * portos, int qtd){
    for(int i = 1; i < qtd; i++){
        int temp = portos[i];
        int j = i - 1;

        while(j >= 0 && portos[j] > temp){
            portos[j+1] = portos[j];
            j--;
        }
            portos[j+1] = temp;
    }
}

int main(){

    int qtd;
    scanf("%d", &qtd);
    int portos[qtd];

    for(int i = 0; i < qtd; i++){
        scanf("%d", &portos[i]);
    }

    ordenar(portos, qtd);

    printf("%d\n", abs(portos[qtd-1] - portos[0]));

    return 0;
}