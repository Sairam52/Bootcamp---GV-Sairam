#include <stdio.h>
#include <math.h>
struct frac
{
    int gcd,lcm,lar,NUM,DEN;
};

int input()
{
    int num;
    scanf("%d",&num);  
    return num;
}

int solve(int num1,int num2,int den1,int den2)
{
    struct frac f;
    int ans1,ans2,x;
    for(int i=1;i<=den1 && i<=den2;i++)
    {
      f.gcd=i;
    }
  
    f.lcm = den1*den2/f.gcd;
  
    if(den1>den2 && den1%den2==0)
    {
        f.lar=f.lcm/den2;
        f.NUM=num2*f.lar+num1;
        f.DEN=den1;
    }
    else if(den2>den1 && den2%den1==0)
    {
        f.lar=f.lcm/den1;
        f.NUM=num1*f.lar+num2;
        f.DEN=den2;
    }
    else
    {
        f.NUM=num1*den2+num2*den1;
        f.DEN=den2*den1;
    } 
    
    int big=f.NUM;
    
    if(f.DEN>f.NUM)
        big=f.DEN;
    
    for(int i=1;i<=big;i++)
    {
        if((f.NUM%i==0)&&(f.DEN%i==0))
            x=i;
    }
    ans1=f.NUM/x;
    ans2=f.DEN/x;
    printf("Sum is: %d/%d",ans1,ans2);
}

int main()
{
    struct frac f;
    
    int num1,num2,den1,den2;
    printf("enter numerator 1 : ");
    num1=input();
    printf("enter denominator 1 : ");
    den1=input();
    printf("enter numerator 2 : ");
    num2=input();
    printf("enter denominator 2 : ");
    den2=input();
    solve(num1,num2,den1,den2);
    return 0;
}
