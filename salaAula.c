#include <stdio.h>
int main(){
    int idade,matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade:\n");
    scanf("%d",&idade);

    printf("Digite sua matricula:\n");
    scanf("%d",&matricula);

    printf("Digite sua altura:\n");
    scanf("%f",&altura);

    printf("Digite seu nome:\n");
    scanf("%s",&nome);

    printf("Nome do aluno: %s -Numero da matricula: %d -Idade do Aluno: %d -Altura do Aluno: %.2f",nome,matricula,idade,altura);

    return 0;







}