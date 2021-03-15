#include<stdio.h>
struct frac
{
	int num,den;
	int numerator,denominator;
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

Frac compute_sum(Frac p1, Frac p2)
{
	Frac f;
	int gcd, lcm,lar,big;
	for(int i=1;i<=p1.den && i<=p2.den;i++)
	{
		gcd=i;
	}
	lcm=(p1.den*p2.den)/gcd;
	if(p1.den>p2.den && p1.den%p2.den==0)
	{
		lar=lcm/p2.den;
		f.numerator=p2.num*lar+p1.num;
		f.denominator=p1.den;		
	}
	
	else if(p2.den>p1.den && p2.den%p1.den==0)
	{
		lar=lcm/p1.den;
		f.numerator=p1.num*lar+p2.num;
		f.denominator=p2.den;		
	}
	
	else
	{
		f.numerator=p2.num*p1.den+p1.num*p2.den;
		f.denominator=p2.den*p1.den;
	}
	return f;
	
}

void output(Frac result, Frac f1, Frac f2)
{
    printf("The answer of %d/%d + %d/%d is: %d/%d",f1.num,f1.den,f2.num,f2.den,result.numerator,result.denominator);
}

int main()
{
	Frac f1,f2,result;
	f1=input();
	f2=input();
	result=compute_sum(f1,f2);
	output(result,f1,f2);
	return 0;
	
}
