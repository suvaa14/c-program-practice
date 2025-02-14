#include <stdio.h>

double square(double num)
{
 
    return (num * num);
}
int main()
{
    int num;
    double n;
    printf("\n\n function:find square of any number:\n");
    printf("\n\n function:find square of any number:\n");

    printf("input any number for square:");
    scanf("%d",&num);
    n =square(num);
    printf("the square of %d is : %.2f\n",num,n);
    return 0;
}
