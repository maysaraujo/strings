#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome [60];
    char nome2 [60];

    fflush(stdin);
    printf(" Insira uma palavra: ");
    scanf("%[^\n]", nome);
    printf(" Insira mais uma palavra: ");
    fflush(stdin);
    scanf("%[^\n]", nome2);
    printf(" Tamanho da palavra %s: %d\n",nome, strlen(nome));
    printf(" Tamanho da palavra %s: %d\n", nome2, strlen(nome2));

    if (strcmp(nome, nome2) > 0){
        printf(" As duas strings possuem conteudo diferentes\n");
    }else {
        printf(" As duas strings possuem o mesmo conteudo\n");
    }
}