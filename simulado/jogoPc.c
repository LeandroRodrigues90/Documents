#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int numeroJogador,numeroPc,resultado;
    char tipodeComparacao;

//srand veio da declaração da função stdlib
    srand(time(0));
//  AQUI O NUMERO DO ALEATORIO E OBTIDO SOMANDO MAIS UM PQ A DIVISAO DE 100 NUMERO DARIA SO 99
    numeroPc = rand() % 100 + 1;

    printf("Bem vindo ao Jogo de Numeros Aleatorios!\n");
    printf("Para o jogo entre nos numeros maiores digite (M):\n");
    printf("Para Jogar quem acha o numero menor digite (N):\n");
    printf("Para Jogar ,achar um numero igual digite (I):\n");
    printf("Digite sair (S):\n");

    //OPÇÃO PARA LEVAR AO MENU SWITCH   
    printf("Digite sua opção:");
    scanf("%s",&tipodeComparacao);
    //PERGUTA AO OPERADOR PRA SABER SEU NUMERO
    printf("Digite seu numero entre 1 e 100:");
    scanf("%d",&numeroJogador);


//NO SWITCH A DECLARAÇÃO COMO É UMA STHING TEM QUE ESTA EM ASPAS SIMPLES E A OPÇÃO MINUSCULA É PARA NAO HAVER ERROS CASO O OPERADOR ERRE
    switch (tipodeComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu o Jogo Maior Numero!\n");
        
        resultado = numeroJogador>numeroPc ? 1:0;

        break;
    case 'N':
    case 'n':
        printf("Você escolheu o jogo do menor numero!\n");
        resultado= numeroJogador<numeroPc ? 1:0;
        break;

    case 'I':
    case 'i':
        printf("Você escolheu o Jogo do Igual!\n");
        resultado=numeroJogador==numeroPc ? 1:0;
        break;
    
    default:
        printf("Opção Invalida!");
        break;
    }

    //AO FINAL É DECLADO OS NUMEROS DO OPERADOR E DO COMPUTADOR E O RESULTADO É COMPARADO POR O IF E ELSE
    
    
    printf("O seu numero é : %d e o numero do Computador é : %d\n",numeroJogador,numeroPc);

    if (resultado==1)
    {
        printf(" Parabéns você ganhou o jogo!");   
    }
    else{
    printf(" Infelimente não foi dessa vez!");
    }
    return 0;
}