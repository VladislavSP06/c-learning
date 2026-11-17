#include <stdio.h>

int main(void) {
    int a;
    printf("Enter a = ");
    scanf("%d", &a);

    int b;
    printf("Enter b = ");
    scanf("%d", &b);
    int sum = a + b;
    printf("sum: %d\n", sum);
    int difference = a - b;
    printf("difference: %d\n", difference);
    int quotient = a/b;
    printf("quotient: %d\n", quotient);
    int product = a*b;
    printf("product: %d\n", product);
     return 0;
}