#include <stdio.h>
int main(){
    int nota1;
    int nota2;
    int media;
    
    printf("Nota do primeiro semestre?");
    scanf(" %d\n", &nota1);

    printf("Nota do segundo semestre?");
    scanf("%d\n", &nota2);

    media=(nota1+nota2)/2;

    printf("media é igual a %d",media);
    return 0;

}