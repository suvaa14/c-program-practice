#include <stdio.h>

int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
   
    int max = findMax(num1, num2);

    printf("The maximum of %d and %d is: %d\n", num1, num2, max);

    return 0;
}
