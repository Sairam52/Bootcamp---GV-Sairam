#include<stdio.h>
#include<math.h> 
struct points  
{ 	
  float x,y;
}p1,p2;

float input() 
{
	float a;
	scanf("%f",&a);
	return a;
}
float compute_add(float a, float b, float c, float d) 
{
  return (sqrt(((a-c)*(a-c))+((b-d)*(b-d))));
}
int display(float sum) 
{
	printf("The distance between the points is : %.2f\n",sum);
  return 0;
}
int main() 
{
  float sum;
  printf("Enter (x1,y1):");
  p1.x = input();
  p1.y = input();
  printf("Enter (x2,y2):");
  p2.x = input();
  p2.y = input();
  sum = compute_add(p1.x, p1.y, p2.x, p2.y);
  display(sum);
  return 0;
}
