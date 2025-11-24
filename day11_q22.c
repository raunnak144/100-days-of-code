//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;

    // Input cost price and selling price
    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    // Check for profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", (profit / costPrice) * 100);
    }
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", (loss / costPrice) * 100);
    }
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
