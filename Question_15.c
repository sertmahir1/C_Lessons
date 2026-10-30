#include <stdio.h>
#include<stdlib.h>

int main() {
    int day = 1;
    float temp;
    int highCount = 0;
    int lowCount = 0;
    while (day <= 7) {
        printf("Enter the temperature for day %d: ", day);
        scanf("%f", &temp);

        if (temp >= 25.0) {
            highCount++;
        }
        else {
            lowCount++;
        }

        day++;
    }
    printf("\nNumber of days with temperature >= 25 C: %d\n", highCount);
    printf("Number of days with temperature < 25 C: %d\n", lowCount);

    if (highCount > 4) {
        printf("The week had mostly high temperatures!\n");
    }

    return 0;
}
