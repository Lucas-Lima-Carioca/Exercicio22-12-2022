
#include <stdio.h>

int main()
{
    int num, pares=0, impares=0;
    do{
        printf("Informe um valor: ");
        scanf("%d", &num);
        if (num%2 != 0) {
            impares +=num;
        } else {
            pares +=num;
        }
    }while (num<=1000);
    printf("Soma dos impares: %d\n",impares);
    printf("Soma dos pares: %d\n",pares);
    return 0;
}
