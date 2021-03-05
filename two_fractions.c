#include<stdio.h>
struct frac
{
	int num,den;
};
typedef struct frac Frac;
Frac input()
{
	Frac f;
	printf("Enter the Numerator: ");
	scanf("%d",&f.num);
	printf("Enter the Denominator: ");
	scanf("%d",&f.den);
	return f;
}

int compute_sum(Frac p1, Frac p2)
{
	int gcd, lcm,lar,numerator,denominator,big;
	for(int i=1;i<=p1.den && i<=p2.den;i++)
	{
		gcd=i;
	}
	lcm=(p1.den*p2.den)/gcd;
	if(p1.den>p2.den && p1.den%p2.den==0)
	{
		lar=lcm/p2.den;
		numerator=p2.num*lar+p1.num;
		denominator=p1.den;		
	}
	
	else if(p2.den>p1.den && p2.den%p1.den==0)
	{
		lar=lcm/p1.den;
		numerator=p1.num*lar+p2.num;
		denominator=p2.den;		
	}
	
	else
	{
		numerator=p2.num*p1.den+p1.num*p2.den;
		denominator=p2.den*p1.den;
	}
	printf("The answer is: %d/%d",numerator,denominator);
}

int main()
{
	Frac f1,f2;
	f1=input();
	f2=input();
	compute_sum(f1,f2);
	return 0;
	
}
