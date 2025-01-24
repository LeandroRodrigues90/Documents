#include <stdio.h>
int main(){
    float numero1,numero2;
    float soma,subtracao,multiplicao,divisao;

    printf("Entre com um numero 1: ");
    scanf("%f",&numero1);
    printf("Entre com um numero 2: ");
    scanf("%f",&numero2);

    soma=numero1+numero2;
    subtracao=numero1-numero2;
    multiplicao=numero1*numero2;
    divisao=numero1/numero2;

    printf("A soma é de %.2f\n",soma);
    printf("a subtração é %.2f\n",subtracao);
    printf("a multiplicação %.2f\n",multiplicao);
    printf("a divisao é de %.2f\n",divisao);

//atribuição

    soma+=20;
    printf("%f\n",soma);
    soma-=2;
    printf("%f\n",soma);
    soma*=2;
    printf("%f\n",soma);
    soma/=4;
    printf("%f\n",soma);
//inclemento e decremento
    soma++;
    printf("somma é igual a %f\n",soma);
    
    ++soma;
    printf("e agora o valoe será %f\n",soma);
    soma--;
    printf("novo valor sera %f\n",soma);
    soma--;
    printf("valor agora será %f\n",soma);
    return 0;


}