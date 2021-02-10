#include <stdio.h>
int main() 
{
    int a[10],sum=0,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is: %d",sum);
    return 0;
}
