#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    float a, b, c;
    printf("digite um lado do triangulo: ");
    scanf("%f", &a);
    printf("\ndigite outro lado do triangulo: ");
    scanf("%f", &b);
    printf("\ndigite outro lado do triangulo: ");
    scanf("%f", &c);
    if(a == b && b == c){
        printf("\nO triangulo � equil�tero");
    }else if(a == b || b == c || c == a){
        printf("\nO triangulo � is�celes");
    }else{
    printf("\nO triangulo � escaleno");
    }
}
