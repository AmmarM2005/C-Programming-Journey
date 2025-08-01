//Write a program that calculates the final price of an item based on these discount rules:
//If the item price is above $1000, apply a 20% discount.
//If the item price is between $500 and $1000, apply a 10% discount.
//Otherwise, no discount.
//Challenge: Handle invalid or negative item prices (e.g., -50), or prices like 0 that may not need discounts.

#include<stdio.h>
int main()
{
    int p , d1 , d2 , d0 ;
    printf("Enter the Price of the item: ");
    scanf("%d",&p);
    d1 = p-(p*(20.0/100.0));
    d2 = p-(p*(10.0/100.0));
    if(p==0)
    {
        printf("The item is not free . You have to Pay some amount .");
    }
    else if(p<0)
    {
        printf("Please Enter valid price .");
    }
    else
    {
        if(p>1000)
        {
            printf("The discounted price is %d",d1);
        }
        else if(p>=500 && p<=1000)
        {
            printf("The discounted price is %d",d2);
        }
        else
            printf("There is no discount");

    }
    return 0;
}

#include <stdio.h>

//ChatGPT Solution
int main_2() {
    float p, finalPrice;

    // Input the price of the item
    printf("Enter the Price of the item: ");
    scanf("%f", &p);

    // Handle invalid or zero price
    if (p == 0) {
        printf("The item cannot be free. Please enter a valid price.\n");
    }
    else if (p < 0) {
        printf("Please enter a valid price (positive value).\n");
    }
    else {
        // Calculate discount and final price
        if (p > 1000) {
            finalPrice = p - (p * 0.20);  // Apply 20% discount
            printf("The discounted price is: $%.2f\n", finalPrice);
        }
        else if (p >= 500 && p <= 1000) {
            finalPrice = p - (p * 0.10);  // Apply 10% discount
            printf("The discounted price is: $%.2f\n", finalPrice);
        }
        else {
            printf("No discount is applied. The price is: $%.2f\n", p);
        }
    }

    return 0;
}
