#include <stdio.h>
#include <string.h>
//função sem parametro e sem retorno
void messagem(){
    printf("Meu Programa de dados e formulas\n");
}
//função com parametro e sem retorno
void parar(char final[]){
    printf("THE END",&final);
}
//função com parametro e com retorno
int multiplicacao(int a,int b){
    return(a*b);
}
//estrutura para receber dados 
struct Dados
{
   char nome[50];
   int idade;
   float altura;
    /* data */
};


int main(){
    //inicio do programa
    messagem();

    //acessar os dados agora
    struct Dados pessoa1;
    strcpy(pessoa1.nome,"Leandro");
    pessoa1.idade=35;
    pessoa1.altura=1.78;

    printf("Nome do Aluno é %s e sua idade %d e sua altura é %0.2f\n",pessoa1.nome,pessoa1.idade,pessoa1.altura);


    //passar agora a função de multiplicação para finalizar o sistema
    int x=145;
    int y=9;
    int resultado=multiplicacao(x,y);

    printf("o resultado da multiplicação de %d e %d é igual a %d \n",x,y,resultado);

    //passando o final do programa por uma mensagem

    parar("Esse é o fim do sistema");
    
    


    return 0;
}