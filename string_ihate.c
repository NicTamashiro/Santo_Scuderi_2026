#include <stdio.h>
#include <string.h>

int ehVogal(char c){
    return c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||
           c=='i'||c=='O'||c=='o'||c=='U'||c=='u';
}

int main(){

    char string[11];

    scanf(" %10[^\n]", string);

    if(strlen(string) != 5){
        printf("0\n");
        return 1;
    }

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(string[i] == string[j]){
                printf("0\n");
                return 1;
            }
        }
    }

    for(int i = 0; i < 5; i+=2){
        if(!ehVogal(string[i])){
            printf("0\n");
            return 1;
        }
    }

    for(int i = 1; i < 5; i+=2){
        if(ehVogal(string[i])){
            printf("0\n");
            return 1;
        }
    }

    printf("1\n");

    return 0;
}