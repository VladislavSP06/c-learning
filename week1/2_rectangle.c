#include <stdio.h>

int main(void) {
    int a;
    printf("a =");
    scanf("%d", &a);
    int b;
    printf("b =");
    scanf("%d", &b);
    int P = 2*(a + b);
    printf("P = %d\n", P);
    int S = a*b;
    printf("S = %d\n", S);
return 0;
}