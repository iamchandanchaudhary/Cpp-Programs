#include <iostream>
using namespace std;

int main() {
    cout << "Find the profit of Saler after Paying Tax :- \n" << endl;

    // Total Sales = $95000
    // State Tax = 4%
    // Country Tax = 2%

    // Find Final Profit
    
    double sales = 95000;
    cout << "Sales : $" << sales << endl;

    // Calculating state tax
    double stateTax = sales * 0.04;
    cout << "\nState Tax : $" << stateTax << endl;

    // Calculating country tax
    double countryTax = sales * 0.02;
    cout << "Country Tax : $" << countryTax << endl;

    double totalTax = stateTax + countryTax;
    cout << "Total Tax : $" << totalTax << endl; 

    // Subtract these tax from Sales profit
    double finalProfit = sales - totalTax;

    cout << "\nFinall Profit : $" << finalProfit << endl;
}