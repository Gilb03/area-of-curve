#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float start_point , end_point , total_area;

int numtraps;

void main() {
void input(void);
float find_area(float a , float b, int n);
printf("Area Under The Curve");

input();
total_area=find_area(start_point, end_point, numtraps);
printf("The total area is %f", total_area);
getch();
}
void input(void)
{
	printf("enter the lower limit");
	scanf("%f", & start_point);
	printf("enter the upper limit")
	scan("%f", & end_point)
	printf("enter the number of trapezoids");
	scanf("%d", numtraps);
}
float find_area(float a, float b, int n)
{
  float width , h1 , h2 , lower;
float function_x(float x)
float trap_area(float h1 , float h2 , float width);
width = ()b-a)/ n;
lower = a;
}

for(lower = a; lower <= b - width; lower + width)
{
	h1 = function_x(lower)
	h2 = function_x(lower + base);
	total_area += trap_area(h1 , h2 , width);
}
return (total_area);
