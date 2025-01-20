#include <stdio.h>
int main(){
    char nome[20];
    int idade;
    float peso;
    float altura;

    printf("Digite seu nome,");
    scanf("%s",&nome);
    printf("Digite sua idade,");
    scanf("%d",&idade);
    printf("Digite seu peso,");
    scanf("%f",&peso);
    printf("Digite de Altura,");
    scanf("%f",&altura);
    printf("Seu nome é: %s\n",nome);

    return 0;
    



}