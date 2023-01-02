#include<stdio.h>
 
int main() {
    int num,i,soma=0;
    printf("Informe o numero: ");
    scanf("%d", &num);
    for (i=1;i<num;i++){
        if (num%i == 0){
            soma+= i;
        }
    }
    
    if (soma == num){
        printf("O numero eh perfeito");
    } else{
        printf("O numero nao eh perfeito");
    }
    return 0;
}
