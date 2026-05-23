#include <stdio.h>

int main(){

    int n;
    int quantidade = 1;
    int resultado = 1;

    scanf("%d", &n);
    int num[n];

    scanf("%d", &num[0]);
    for(int i = 1; i < n; i++){
        scanf("%d", &num[i]);
        if(num[i] == num[i - 1]){
            quantidade++;   
        } else {
            if(quantidade >= resultado){
            resultado = quantidade;
            } 
            quantidade = 1;
        }
    }
    if(quantidade > resultado) resultado = quantidade;
    
    printf("%d\n", resultado);

    return 0;
}