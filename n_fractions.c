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
    int x;
    if(sum>lcm)
    {
        for(int i=1;i<sum;i++)
        {
            if(sum%i==0 && lcm%i==0)
            {
                x=i;
            }
        }
    }
    else{
        for(int i=1;i<lcm;i++)
        {
            if(sum%i==0 && lcm%i==0)
            {
                x=i;
            }
        }
    }
    
    f.NUM=sum/x;
    f.DEN=lcm/x;
    return f;
}
void output(frac result)
{
    printf("The sum is = %d/%d",result.NUM,result.DEN);
}
int main()
{
    int n;
    frac num;
    printf("Enter the number of fractions :");
    scanf("%d",&n);
    frac f[n];
    input_n(n,f);
	num=compute_n(n,f);
    output(num);
    
	return 0;
}
