/* Third exercise*/
#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = upper;

    printf("Celsius\tFahrenheit\n");

    while (celsius >= lower) {
        fahr = celsius * 9 / 5 + 32;
        printf("%6.0f\t%9.0f\n", celsius, fahr);
        celsius = celsius - step;
    }
}
