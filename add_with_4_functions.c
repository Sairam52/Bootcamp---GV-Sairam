#include <stdio.h>
int input()
{
    int a;
    printf("Enter 1st number :");
    scanf("%d",&a);
    return a;
}
int compute_add(int a, int b, int c)
{
    c=a+b;
    return c;
}
int display(int c)
{
    printf("the sum is:%d",c);
    return 0;
}
int main() 
{
    int a,b,c,d;
    a=input();
    b=input();
    d=compute_add(a,b,c);
    display(d);
    return 0;
}
