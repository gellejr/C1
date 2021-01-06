#include <stdio.h>
#include <math.h>
int main (void)
{
double lowerbound, upperbound, step_size;
//double step_size;
printf("Please input lowerbound for sine (deg)\n");
scanf("%lf", &lowerbound);
printf("Please input upperbound for sine (deg)\n");
scanf("%lf", &upperbound);
printf("Please input step size for sine (deg)\n");
scanf("%lf", &step_size);
if (lowerbound < 0)
{
printf("Lowerbound cannot be less than 0.\n");
return 0;
}
if (upperbound > 180)
{
printf("Upperbound cannot be greater than 180.\n");
return 0;
}
if (upperbound < lowerbound + step_size)
{
printf("Upperbound should be at least lowerbound + stepsize.\n");
return 0;
}
double pi = 3.14159;
lowerbound = lowerbound / 180.0 * pi;
upperbound = upperbound / 180.0 * pi;
step_size = step_size / 180.0 * pi;
double i;
int j, count;
double sin_value;
double output_step_size = 0.05;
printf("\nSine graph for inputs:\n");
for(i = lowerbound; i <= upperbound; i += step_size)
{
sin_value = sin(i);
count = sin_value / output_step_size;
for (j = 0; j <= count; j++)
{
if (j == count)
printf("#");
else
printf(" ");
}
printf("\n");
}
return 0;
}
