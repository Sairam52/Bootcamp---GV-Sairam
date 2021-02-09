// 1/3 of ((h x d x b) + ( d divided by b)).
#include<stdio.h>
float input()
{
    float num;
    scanf("%f",&num);
    return num;
}

float result(float h,float d,float b)
{
    return 0.33*((h*d*b)+(d/b));
}

int display(float r)
{
    printf("%.2f",r);
    return 0;
}
int main()
{
    float r,h,d,b;
    printf("Enter H:");
    h=input();
    printf("Enter D:");
    d=input();
    printf("Enter B:");
    b=input();
    r=result(h,d,b);
    display(r);
    return 0;
}
