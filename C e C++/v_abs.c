#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float a, b;
    printf("Digite um n�mero: ");
    scanf("%f", &a);
    printf("Digite outro n�mero: ");
    scanf("%f", &b);
    float result = a - b;
    printf("A diferen�a entre %f e %f � %f", a, b, fabs(result));
}
