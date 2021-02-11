#include <stdio.h>

struct points
{
    int a[10],result;
}p;

int input(int n)
{
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p.a[i]);
    }
}
int compute(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+p.a[i];
    }  
    return sum;
}

int display(int ans)
{
    printf("The sum is %d:",ans);
  
}
int main() 
{
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);    
    input(n);
    p.result=compute(n);
    display(p.result);
    return 0;
}
