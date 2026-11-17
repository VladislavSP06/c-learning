#include <stdio.h>

int main(void) {
    float C;
    printf("Enter the °С: ");
    scanf("%f", &C);
    float Fa = C*9/5 + 32;
    printf("%.2f\n", Fa);

    float F;
    printf("Enter the F, K: ");
    scanf("%f", &F);
    float Ce = (F-32)*5/9;
    printf("%.2f\n", Ce);
    return 0;
}