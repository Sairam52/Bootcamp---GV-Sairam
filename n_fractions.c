#include <stdio.h>
struct frac
{
  int den[10];
  int num[10];
  int n;
};
int input()
{
    struct frac s;
    printf("Enter the limit  :");
    scanf("%d",&s.n);
    for(int i=0;i<s.n;i++)
    {
        printf("Enter the numerator : ");
        scanf("%d",&s.num[i]);
        printf("Enter the denominator : ");
        scanf("%d",&s.den[i]);
    }
    return 0;
}
int sum()
{
    struct frac s;
    int lcm=1,sum=0,lar,x=0,sum1=0,lcm1=0;
    for(int i=0;i<s.n;i++)
    {
        lcm=lcm*s.den[i];
    }
    int l[10];
    for(int i=0;i<s.n;i++)
    {
        l[i]=lcm/s.den[i];
        sum=sum+(l[i]*s.num[i]);
    }
  
    lar=sum;
    if(lar<lcm)
        lar=lcm;
    else 
        lar=sum;
    for(int i=1;i<=lar;i++)
    {
        if((sum%i==0)&&(lcm%i==0))
            x=i;
    }
    sum1=sum/x;
    lcm1=lcm/x;
    printf("Sum : %d/%d",sum1,lcm1);
    return 0;
}
int main()
{
    input();
    sum();
    return 0;
}
