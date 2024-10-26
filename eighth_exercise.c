/*Eighth exercise*/
#include <stdio.h>
#define FIRST_NUMBER 52.0
#define SECOND_NUMBER 12.0
#define THIRD_NUMBER 90.0

int main() {
    float sum = FIRST_NUMBER + SECOND_NUMBER + THIRD_NUMBER;
    float average = sum / 3.0;
    printf("The average is %.2f\n", average);
}