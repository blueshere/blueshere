#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,n;
int isPrime;
printf("Prime numbers are:");
for(n=2; n<=100; n++)
{
    isPrime=1;
    for(i=2; i<n; i++)
    {
        if(n % i==0)
    {
        isPrime=0;
        break;
    }
    }
    if (isPrime==1)
    {
    printf("%d ", n);
    }   

} printf("\n");
return 0;
}