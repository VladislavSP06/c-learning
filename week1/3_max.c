#include <stdio.h>

int main(void) {
    int a;
    printf("a = ");
    scanf("%d", &a);
    int b;
    printf("b = ");
    scanf("%d", &b);
    int c;
    printf("c = ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("%d\n", a);
    } else if (b > a && b > c) {
        printf("%d\n", b);
    } else if (c > b && c > a) {
        printf("%d\n", c);
    } else {
        printf("similar");
    }
    return 0;
}