#include <stdio.h>
#include <string.h>

#define MAX 4

char mochila[MAX][20];
int tamanho = 0;

void adicionar(char * marca){
    if(tamanho == MAX){
        for(int i = 0; i < MAX - 1; i++){
            strcpy(mochila[i], mochila[i + 1]);
        }
        tamanho--;
    }
    strcpy(mochila[tamanho], marca);
    tamanho++;
}

int consumir(char * marca1){
    for(int i = tamanho - 1; i >= 0; i--){
        if(strcmp(mochila[i], marca1) == 0 || strcmp(mochila[i], "Light") == 0){
            for(int j = i; j < tamanho - 1; j++){
                strcpy(mochila[j], mochila[j + 1]);
            }
            tamanho--;
            return 1;
        }
    }
    return 0;
}

int main(){

    int qtd_entrada;

    scanf("%d", &qtd_entrada);
    
    for(int i = 0; i < qtd_entrada; i++){
        char habilidade[20];
        scanf("%s", habilidade);

        int aprimorou = 0;

        if(strcmp(habilidade, "IceLance") == 0){
            aprimorou = consumir("Fire");
            adicionar("Ice");
        } else if(strcmp(habilidade, "FireRage") == 0){
            aprimorou = consumir("Ice");
            adicionar("Fire");
        } else if(strcmp(habilidade, "Electrify") == 0){
            aprimorou = consumir("Earth");
            adicionar("Lightning");
        } else if(strcmp(habilidade, "RockSlide") == 0){
            aprimorou = consumir("Lightning");
            adicionar("Earth");
        } else if(strcmp(habilidade, "RadiantLight") == 0){
            aprimorou = 0;
            adicionar("Light");
        }

        printf("%c\n", aprimorou ? 'A' : 'N');
    }

    return 0;
}