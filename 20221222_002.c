
#include <stdio.h>

int main()
{
    float num, maior, menor;
    int i;
    printf("Informe o 1° valor: ");
    scanf("%f", &num);
    maior = num;
    menor = num;
    for (i=1;i<15;i++){
        printf("Informe o %d° valor: ",i+1);
        scanf("%f", &num);
        if (num> maior){
            maior = num;
        } else if (num< menor){
            menor = num;
        }
    }
    printf("O maior valor eh: %.2f\n", maior);
    printf("O menor valor eh: %.2f\n", menor);
    return 0;
}
