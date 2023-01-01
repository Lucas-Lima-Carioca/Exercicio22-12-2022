#include <stdio.h>
#include <math.h>


int main()
{
    int num;
    float X1,Xn;
    printf("Informe o valor para aproximar a raiz quadrada: ");
    scanf("%d", &num);
    X1 = num/2.0;
    Xn = X1;
    do{
        X1 = Xn;
        Xn = X1 - (X1*X1 - num)/ X1*2;
        
    }while (fabs(Xn-X1) >= 0.1);
    printf("Teoricamente essa eh a resposta: %f\n",fabs(Xn));
    printf("Usando sqrt(): %f",sqrt(num));
    return 0;
}
