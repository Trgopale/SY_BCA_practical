#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

void main()
{
    int array[MAXSIZE];
    int i, num, power;
    float x, polysum;

    printf("Enter the order of the polynomial \n");
    scanf("%d", &x);
    printf("Enter the value of x \n");
    scanf("%f", &x);
    printf("Enter %d coefficients \n",num +1);
    for ( i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    polysum = array[0];
    for ( i = 1; i < num; i++)
    {
        polysum = polysum *x+ array[i];
    }
    power = num;
    printf("Given polynomial is: ");
    for ( i = 0; i < num; i++)
    {
        if (power < 0)
        {
            break;
        }
        if (array[i] > 0)
            printf(" + ");
        else if (array[i] < 0)
            printf(" + ");
        else
            printf("  ");
            printf("%d%d",abs(array[i]), power--);
    }
    printf("\n sum of the polynomial =%6.2f \n", polysum);
}