#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[60];

    fflush(stdin);
    printf(" Insira o seu nome (completo ou nao): ");
    scanf("%[^\n]", nome);

    for (int i = 0; i < strlen(nome); i++){
        printf(" %c\n", nome[i]);
    }
    
}