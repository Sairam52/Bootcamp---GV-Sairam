#include<stdio.h>

struct fraction{
	int num,den;
	int NUM,DEN;
};
typedef struct fraction frac;

frac input_one()
{
	frac f;
	printf("Enter numerator :");
	scanf("%d",&f.num);
	printf("Enter denominator :");
	scanf("%d",&f.den);
	return f;
}

void input_n(int n, frac F[n])
{
	for(int i =0;i<n;i++)
	{
		F[i]=input_one();
	}
}

frac compute_n(int n,frac F[n])
{
    frac f;
	int lcm,k[10],sum=0;
    lcm=1;
	for(int j=0;j<n;j++)
	{
			lcm=lcm*F[j].den;
	}
	
    for(int i=0;i<n;i++)
    {
        k[i]=lcm/F[i].den;
        sum=sum+(k[i]*F[i].num);
    }
    printf("%d",lcm);
}
void output(frac result)
{
    printf("The sum is = %d/%d",result.NUM,result.DEN);
}
int main()
{
    int n,den;
    frac f[n],num;
    printf("Enter the number of fractions :");
    scanf("%d",&n);
	input_n(n,f);
	num=compute_n(n,f);
    output(num);
    
	return 0;
}
