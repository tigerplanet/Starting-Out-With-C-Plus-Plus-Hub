/* Chapter 2, Challenge 3
    September 25, 2024
    
    Sales Tax
    Write a program that will compute the total sales tax on a $95
    dollar purchase. Assume the state sales tax is 4 percent, and 
    the county sales tax is 2 percent.
*/

#include <iostream>
using namespace std;

int main () {

    double purchase = 95, salesTax = 0.04, countyTax = 0.02,
        totalTax, totalPrice;
    totalTax = (purchase * salesTax) + (purchase * countyTax);
    totalPrice = purchase + totalTax;

    cout << "The total sales tax on a $95 purchase is $" << 
        totalPrice << ".";
   
    return 0;
}