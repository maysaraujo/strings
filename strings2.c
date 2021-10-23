#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome [60];

    printf(" Insira o seu nome: ");
    gets(nome);
    printf(" Nome ao contrario: %s\n", strrev(nome));
}