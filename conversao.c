#include <stdio.h>
int main(){
    char nome1[50],nome2[50];
    float notaa1,notab1;
    float notaa2,notab2;
    float notaa3,notab3;
    float mediaa1,mediab2;
    float geral;

    printf("Qual o seu nome?");
    scanf("%s", &nome1);
    
    printf("Primeira nota?");
    scanf("%f", &notaa1);

    printf("Segunda nota?");
    scanf("%f", &notaa2);

    printf("terceira nota?");
    scanf("%f", &notaa3);

    printf("Qual o seu nome?");
    scanf("%s", &nome2);
    
    printf("Primeira nota?");
    scanf("%f", &notab1);

    printf("Segunda nota?");
    scanf("%f", &notab2);

    printf("terceira nota?");
    scanf("%f", &notab3);
   
    mediaa1=(notaa1 + notaa2 + notaa3) /3;
    mediab2=(notab1 + notab2 + notab3) /3;
    geral=(mediaa1 + mediab2) /2;
    printf("******************************************\n");
    printf("media do aluno %s igual a %.2f\n",nome1,mediaa1);
    printf("media do aluno %s igual a %.2f\n",nome2,mediab2);
    printf("***************************************\n");
    printf("Nota geral da sala é de %.2f",geral);

    return 0;

}

