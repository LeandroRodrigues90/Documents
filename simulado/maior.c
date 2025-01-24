#include <stdio.h>
int main(){
    int num1,num2;
    int maior;

    printf("Digite um numero?:");
    scanf("%d",&num1);
    printf("Digite um numero?:");
    scanf("%d",&num2);
//opção simplicada do codigo if else
//num1>num2 ? (maior=num1):(maior=num2);
//abaixo estamos no meio mais usual do codigo if else
    if (num1>num2)
    {
        printf("esse é numero maior:%d\n",num1);
    }else{
        printf("esse é numero maior:%d\n",num2);

    }
    
}