/* Chapter 2, Challenge 4
    September 25, 2024
    
    Restaurant Bill
    Write a program that computes the tax and tip on a restaurant
    bill for a patron with a $88.67 meal charge. The tax should be
    6.75 percent of the meal cost. The tip should be 20 percent of 
    the total after adding the tax. Display the meal cost, tax 
    amount, tip amount, and total bill on the screen.
*/

#include <iostream>
using namespace std;

int main () {

    double mealCharge = 88.67, taxRate = 0.0675, tipRate = 0.2,
        totalMealCost, taxAmount, tipAmount;

    taxAmount = mealCharge * taxRate;
    totalMealCost = mealCharge + taxAmount;
    tipAmount = totalMealCost * tipRate;
    totalMealCost += tipAmount;

    cout << "Meal Cost: $" << mealCharge << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Tip Amount: $" << tipAmount << endl;
    cout << "Total Bill: $" << totalMealCost << endl;
    return 0;
}