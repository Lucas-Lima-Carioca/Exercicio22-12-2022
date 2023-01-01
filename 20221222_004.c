#include<stdio.h>
 
int main() {
    int num, i, flag = 0;
 
    printf("Digite um número: ");
    scanf("%d", &num);
    
    for (i = 2; i < num; i++) {
    if (num % i == 0) {
       flag = 1;
       break;
    }
    }
    
    if (flag == 0)
    printf("%d é um número primo\n", num);
    else
    printf("%d não é um número primo\n", num);
    
    return 0;
}
