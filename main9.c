#include <stdio.h>

int main()
{

    int max , min , counter = 0 , value;
    double total;
    double average;

    printf("Welcome. This program will calculate minimum, maximum and average of numbers input by the user.\n");
    do
    {
        printf("Please input a number for calculations or 0 to finish\n");
        scanf("%d", &value);
        total += value;
        if (counter == 0)
        {
            max = value;
            min = value;
        }

        if (value > max)
            max = value;

        if (value < min)
            min = value;
        
        if (value != 0)
            counter++;
    }
    while(value != 0);

    if (counter == 0)
    {
        printf("No value provided. Exiting.\n");
    }
    else
    {
        average = total / counter;
        printf("Results are:\n");
        printf("\tMaximum: %d\n", max);
        printf("\tMinimum: %d\n", min);
        printf("\tAverage: %.2f\n", average);
    }
    

    return 0;
}

