/*Program to calculate roots of a quadratic equation ax^2+bx+c=0*/

#include<stdio.h>     //Preprocessor Directive
#include<math.h>

int main()
{
	float a,b,c,d,x1,x2,im,re;          //Initialiation
	
	printf("ax^2+bx+c=0\nEnter values of a,b,c:\n");    //Decalaration
	scanf("%f%f%f",&a,&b,&c);       //Input
	
	d=b*b-4*a*c;    //computation
	
	if(d>0)           //if discriminant>0
	{
		x1=(-b+sqrt(d))/(2*a);    //Computation
		x2=(-b-sqrt(d))/(2*a);
		printf("x=%.2f , %.2f\n",x1,x2);     //Output
	}	
	else if(d==0)     //if discriminant=0
	{
		x1=x2=-b/(2*a);   //Computation
		printf("x=%.2f\n",x1);   //Output
	}
	else        //if roots are complex
	{
		re=-b/(2*a);
		im=sqrt(-d)/(2*a);
		printf("x=%.2f+i%.2f , %.2f-i%.2f\n",re,im,re,im);		
	}
	return 0;	
}
