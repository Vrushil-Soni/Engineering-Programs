/*
PROBLEM STATEMENT
Write a C program to accept cost price and sales price of an item and calculate the profit percentage or loss percentage.
*/

#include <stdio.h>

int main()
{
    float cost, sales, change, percentage;
    
    printf("Enter cost price: ");
    scanf("%f", &cost);
    printf("Enter sales price: ");
    scanf("%f", &sales);
    
    if(sales>cost)
    {
        change=sales-cost;
        percentage=(change/cost)*100;
        printf("You have a profit of %0.2f and your profit percentage is %0.2f!\n", change, percentage);
    }
    else if(cost>sales)
    {
        change=cost-sales;
        percentage=(change/cost)*100;
        printf("You have a loss of %0.2f and your loss percentage is %0.2f!\n", change, percentage);
    }
    else
    {
        printf("You broke even!\n");
    }
    
    return 0;
}
