/* Chapter 2, Challenge 2
    September 25, 2024
    
    Sales Prediction
    The East Coast sales division of a company generates 58 percent of
    total sales. Based on that percentage, write a program that will
    predict how much the East Coast division will generate if the 
    company has $8.6 million in sales this year.
*/

#include <iostream>
using namespace std;

int main () {

    double percentage = 0.58, sales = 8600000, eastCoast;
    eastCoast = sales * percentage;
    cout << "The East Coast division will generate $" << eastCoast <<
        " of sales this year.";
   
    return 0;
}