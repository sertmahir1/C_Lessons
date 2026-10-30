#include <stdio.h>
#include<stdlib.h>

int main() {
    float number;
    int count=0;
    float sum = 0.0;

    while (1) {
        printf("Enter a number (0 to stop): ");
        scanf("%f", &number);

        if (number == 0) {
            break;
        }

        sum += number;
        count++;
    }

    printf("\nSum: %.2f\n", sum);
    printf("\nCount: %.2f\n",sum/count);

    return 0;
}
