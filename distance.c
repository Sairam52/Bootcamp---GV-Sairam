#include <stdio.h>
#include <math.h>
float input()
{
    int a;
    scanf("%d",&a);
    return a;
}
float cumpute_add(float a, float b, float c,float d)
{
    
    return sqrt(pow((a-c),2)+pow((b-d),2));
}
int display(float sum)
{
    printf("the distance is:%.2f",sum);
    return 0;
}
int main() 
{
    float a,b,c,d,sum;
    printf("Enter (x1,y1):");
    a=input();
    b=input();
    printf("Enter (x2,y2):");
    c=input();
    d=input();
    sum=compute_add(a,b,c,d);
    display(sum);
    return 0;
}
