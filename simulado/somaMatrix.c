#include <stdio.h>
void messagem(){
    printf("+++++ Procurar numeros na Matriz +++++\n");
}
int main(){
    messagem();
    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int procurar;
    int sair=0;
    

    printf("Qual o numero procurar na Matriz:");
    scanf("%d",&procurar);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if (matriz[i][j]==procurar)
           {
            printf("O numero procurado é %d e sua posição é (%d e %d).\n",procurar,i,j);
            sair=1;
            break;
           }
            /* code */
        }
        if(sair)break;/* code */
    }
    if (!sair)
    {
        printf("O numero %d não foi encontrado!",procurar);/* code */
    }
    printf("Fim da Execução do programa......saindo....\n");
    
    return 0;
}