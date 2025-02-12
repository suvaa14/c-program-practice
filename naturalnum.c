//naturalnum
#include <stdio.h>
int main(){
    int n, sum=0, i;

    printf("enter a number:");
    scanf("%d",&n);

    for(i = 1 ; i<=n; i++)
    {
        sum+=i;
    }
    printf("the sum of first %d natural number is %d",n,sum);
}