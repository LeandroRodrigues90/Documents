#include <stdio.h>
int main(){
    int temperatura;
    int resultado;

    printf("Qual temperatura está fazendo essa noite!:");
    scanf("%d", &temperatura);

    resultado = temperatura >=25 ? 1:0;

    if (resultado==1)
    {
       printf("Esta calor esta noite") ;/* code */
    }else{
        printf("Esta frio esta noite");
    }

    return 0;
    



}