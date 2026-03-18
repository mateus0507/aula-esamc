#include <stdio.h>
int main(){
    int num1, num2, total;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um segundo numero: ");
    scanf("%d", &num2);
    total = num1 + num2;
    printf("A soma dos dois numeros e: %d", total);
    return 0;
}