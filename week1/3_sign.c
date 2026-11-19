#include <stdio.h>

int main(void) {
    int temperature;
    printf("Enter temperature: ");
    scanf("%d", &temperature);

    if(temperature > 0) {
        printf("positive");
    } else if(temperature < 0) {
        printf("negative");
    } else {
        printf("zero");
    }
    return 0;
}