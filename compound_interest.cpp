/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    const double PERCENT_CONVERSION = 100.0;

    double principal = 0.0;
    double annual_rate = 0.0;
    int times_compounded = 0;

    double rate = 0.0;
    double amount = 0.0;
    double interest_earned = 0.0;

    cout << "Compound Interest Calculator\n";
    cout << "Enter the principal balance: $";
    if (!(cin >> principal) || principal <= 0.0)
    {
        cerr << "Error: Principal must be a positive number.\n";
        return 1;
    }

    cout << "Enter the annual interest rate (percentage): ";
    if (!(cin >> annual_rate) || annual_rate < 0.0)
    {
        cerr << "Error: Interest rate cannot be negative.\n";
        return 1;
    }

    cout << "Enter the number of times interest is compounded per year: ";
    if (!(cin >> times_compounded) || times_compounded <= 0)
    {
        cerr << "Error: Compounding frequency must be a positive integer.\n";
        return 1;
    }

    // Convert the entered percentage to decimal form before using the formula.
    rate = annual_rate / PERCENT_CONVERSION;

    amount = principal * pow(
        1.0 + rate / times_compounded,
        times_compounded
    );

    interest_earned = amount - principal;

    cout << fixed << setprecision(2);
    cout << "\nCompound Interest Report\n";
    cout << "----------------------------------------\n";
    cout << left << setw(28) << "Annual interest rate:"
         << right << annual_rate << "%\n";
    cout << left << setw(28) << "Times compounded:"
         << right << times_compounded << '\n';
    cout << left << setw(28) << "Principal:"
         << right << "$" << principal << '\n';
    cout << left << setw(28) << "Interest earned:"
         << right << "$" << interest_earned << '\n';
    cout << left << setw(28) << "Amount in savings:"
         << right << "$" << amount << '\n';

    return 0;
    
}