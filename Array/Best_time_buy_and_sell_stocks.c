#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int min_price = prices[0];
    int max_profit = 0;
// This block of code compares the intitial minimum prize with current day proze
    for(int i= 1; i < pricesSize ;i++ ){
       if(prices[i]<min_price){
        min_price = prices[i];
       }
// block of code demonstrating the condition for selling the stock 
       else if(prices[i]-min_price > max_profit){
        max_profit = prices[i]-min_price;

       }
    }    
    return max_profit;

}

