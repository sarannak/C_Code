/* C Program to find Area of a Triangle and Perimeter of a Triangle */

#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, p, s, Area;
  
  printf("\nPlease! Enter First edge of the triangle: ");
  scanf("%f",&a);
  printf("\nPlease! Enter Second edge of the triangle: ");
  scanf("%f",&b);
  printf("\nPlease! Enter Third edge of the triangle: ");
  scanf("%f",&c);  
  p = a + b + c;
  s = (a + b + c)/2;
  Area = sqrt(s * (s - a) * (s - b) * (s - c));
   
  printf("\n Perimeter of the Triangle = %.2f\n", p);
  printf("\n Semi Perimeter of the Triangle = %.2f\n",s);
  printf("\n Area of the triangle = %.2f\n",Area);

  return 0;
}