#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float a, b;
    int escolha;
    printf("Digite dois n�meros: ");
    scanf("%f %f", &a, &b);
    printf("Qual opera��o deseja fazer? :\n[ 1 ] Adi��o\n[ 2 ] Subtra��o\n[ 3 ] Multiplica��o\n[ 4 ] Divis�o\n   >>>");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            printf("O resultado � %.2f", a + b);
            break;
        case 2:
            printf("[ 1 ] %.2f - %.2f\n[ 2 ] %.2f - %.2f\n   >>>", a, b, b, a);
            scanf("%d", &escolha);
            if(escolha == 1){
                printf("O resultado � %.2f", a - b);
            }else if(escolha == 2){
                printf("O resultado � %.2f", b - a);
            }else{
                printf("Op��o inv�lida");
            }
            break;
        case 3:
            printf("O resultado � %.2f", a * b);
            break;
        case 4:
            printf("[ 1 ] %.2f / %.2f\n[ 2 ] %.2f / %.2f\n   >>>", a, b, b, a);
            scanf("%d", &escolha);
            if(escolha == 1){
                printf("O resultado � %.2f", a / b);
            }else if(escolha == 2){
                printf("O resultado � %.2f", b / a);
            }else{
                printf("Op��o inv�lida");
            }
            break;
        default:
            printf("Op��o inv�lida");
    system("pause");
}
}
