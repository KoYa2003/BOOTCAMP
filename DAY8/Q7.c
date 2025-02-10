//program to find the best time to buy and sell stock

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of days: ");
    scanf("%d", &n);

    int prices[n];

    printf("Enter stock prices for %d days: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int minPrice = prices[0];
    int maxProfit = 0; 

    for (int i = 1; i < n; i++) { 
        if (prices[i] < minPrice) {
            minPrice = prices[i]; 
        } 
        int profit = prices[i] - minPrice; 
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }
    printf("Maximum Profit: %d\n", maxProfit);

    return 0;
}
