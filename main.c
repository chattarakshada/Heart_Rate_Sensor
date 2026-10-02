#include<stdio.h>

void main()

{

float heart_rate, low_limit = 60, high_limit = 100;

printf("Enter Heart rate in BPM:");
scanf("%f",&heart_rate);

if(heart_rate <= low_limit)
{
printf("Heart rate status: Low Heart Rate");
}

else if(heart_rate <= high_limit && heart_rate > low_limit)
{
printf("Heart rate status: Normal Heart Rate");
}

else
{
printf("Heart rate status: High Heart Rate");
}

}
