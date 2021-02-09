#include<stdio.h>
int main()
{
    float r=0,h,d,b;
    printf("Enter values of h,d,b:");
    scanf("%f %f %f",&h,&d,&b);
    r=0.33*((h*d*b)+(d/b));
    printf("%f",r);
}
