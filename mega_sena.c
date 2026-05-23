#include <stdio.h>

void ordenar(int *nums, int tam){
    for(int i = 1; i < tam; i++){
        int temp = nums[i];
        int j = i - 1;

        while(j >= 0 && nums[j] > temp){
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = temp;
    }
}

int main(){
    int nums[36];
    int tam = 0;
    int num;

    while(scanf("%d", &num) == 1){
        int repetido = 0;

        for(int i = 0; i < tam; i++){
            if(nums[i] == num){
                repetido = 1;
                break;
            }
        }
        if(!repetido) nums[tam++] = num;
    }

    ordenar(nums, tam);

    for(int i = 0; i < tam; i++){
        printf("%d\n", nums[i]);
    }

    printf("Total de jogos completos: %d\n", tam / 6);

    return 0;
}