#include <stdio.h>
int main(){
    int opcao;
    float num1,num2,num3;
    float media;

    printf("Programa para Gereciamento de Sala\n");
    printf("1-Calcular a Média do Aluno\n");
    printf("2-Status do Aluno\n");
    printf("3-Sair do Sistema\n");
    printf("Escolha uma opção:");
    scanf("%d",&opcao);

    if ((opcao>0 && opcao<10))
    {
        printf("...Continuando \n");
          }
          else
          {
            printf("Opção Invalida");
          }
    

    switch (opcao)
    {
    case 1:
        printf("Opção Escolhida -Calcular a média do Aluno\n");
        printf("Qual a primeira nota?:");
        scanf("%f",&num1);

        printf("Qual a segunda nota?:");
        scanf("%f",&num2);

        printf("Qual a Terceira nota?:");
        scanf("%f",&num3);
  
        media =(num1 + num2 + num3) /3;
        printf("A Media do Aluno é de %.2f",media);

   
        break;
    case 2:
        printf("Opção Escolhida-Status do Aluno!\n");
        printf("Qual a média do Aluno?:");
        scanf("%f",media);


        if (media >=7)
        {
            printf("Aprovado");
        }
        else if (media >=5)
        {
            printf("Recuperação");
        }
        
        else
           {
            printf("Reprovado!");
           }
        break;
    case 3:
        printf("saindo....");
        break;

           
        
    
    default:
        printf("Nenhuma opção valida!");
        break;
    }


    return 0;

}