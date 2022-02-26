#include<stdio.h>

void main()
{
    float temp, ctemp;
    int ch;

    printf("Temprature Converrsion Menu");
    printf("nt1.Fahrenheit to Celsius");
    printf("nt2.Celsius to Fahrenheit");
    printf("nEnter your choice(1 / 2):");
    scanf("%d", &ch);

    if (ch == 1)
    {
        printf("Enter Temperature in Fahrenheit:");
        scanf("%f", &temp);
        ctemp = (temp - 32) / 1.8;
        printf("nTemprature in celcius is %f", ctemp);
    }
    else if (ch == 2)
    {
        printf("Enter Temperature in Celsius:");
        scanf("%f", &temp);
        ctemp = (1.8 * temp) + 32;
        printf("nTemperature in Fahrenheit is %f", ctemp);
    }
    else
        printf("nWrong choice…..!!");
}