#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int num, cont, i;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
	for(i = 1; i <= num; i++){
        if(num % i == 0){
            cont = cont + 1;
        }
	}
	if(cont == 2){
        printf("O n�mero � primo");
	}else{
        printf("O n�mero n�o � primo");
	}
}
