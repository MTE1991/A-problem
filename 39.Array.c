//write a program that read 10 numbers and display their sum and average
#include<stdio.h>
int main()
{
    int a[100], sum= 0,i,n;


    printf("How many numbers : ");
    scanf("%d", &n);


    for(i=0; i<n; i++);
    {
        scanf("%d", &a[n]);
    }

    for(i=0; i<n; i++);
    {
        sum = sum + a[n];
    }
    
    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", (float)sum/n);

}