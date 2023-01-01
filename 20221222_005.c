#include<stdio.h>
 
int main() {
    int i, j = 1;
    float total = 0;
    for (i=1;i<=50;i++){
        total = total + (float) j/ i;
        j+=2;
    }
    printf("O resultado eh: %f", total);
    return 0;
}
