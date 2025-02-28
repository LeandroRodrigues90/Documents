#include <stdio.h>
#include <string.h>
enum DiasdaSemana{
    segunda=1,
    terça=2,
    quarta=3,
    quinta=4,
    sexta=5,
    sabado=6,
    domingo=7

};
void exibirDiaSemana(enum DiasdaSemana dia){
    switch (dia)
    {
        case segunda:
        printf("Hoje é segunda feira\n"); /* code */
        break;
        case terça:
        printf("Hoje é terça feira\n"); /* code */
        break;
        case quarta:
        printf("Hoje é quarta feira\n"); /* code */
        break;
        case quinta:
        printf("Hoje é quinta feira\n");
        break;
        case sexta:
        printf("Hoje é sexta feira\n");
        break;
        case sabado:
        printf("Hoje é sabado\n");
        break;
        case domingo:
        printf("Hoje é domingo\n");
        break;
        default:
        printf("Nenhum dia escolhido valido");
        break;
    }
}
int main(){

    exibirDiaSemana(domingo);

    return 0;
}