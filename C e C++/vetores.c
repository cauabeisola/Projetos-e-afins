#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int i, qt, a;
    float media, media_final;
    printf("Quantos valores ser�o lidos? : ");
    scanf("%d", &qt);
    float val[qt];
    for(i = 1; i <= qt; i++){
        printf("Digite o %d� valor: "), &i;
        scanf("%f", &val[i - 1]);
    }
    for(a = 0; a < qt; a++){
        media += val[a];
    }
    media_final = ("%f", media) / ("%d", qt);
    printf("A m�dia desses n�meros � %.2f", media_final);
}
