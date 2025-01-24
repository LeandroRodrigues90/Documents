#include <stdio.h>
int main(){
    char nome[50];
    int idade;
    float altura;
//declara os dadods da seção
    printf("Qual seu nome?");
    scanf("%s",&nome);
    printf("QUal sua idade?");
    scanf("%d",&idade);
    printf("Qual sua altura?");
    scanf("%f",&altura);

    printf("Seu nome é:%s --Sua idade é:%d--Sua altura: %0.2f\n",nome,idade,altura);
    printf("O cadastro esta finalizado!\n");

    if (idade>17)
    {
        printf("maior de idade");
       
        /* code */
    
    }
    else
    {
        printf("menor de idade");
    }
    return 0;
    

}