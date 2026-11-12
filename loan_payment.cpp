/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    const double PERCENT_CONVERSION = 100.0;
    const int MONTHS_PER_YEAR = 12;
    const double ZERO_RATE = 0.0;

    double loan_amount = 0.0;
    double annual_rate = 0.0;
    int number_of_payments = 0;

    double monthly_rate = 0.0;
    double monthly_payment = 0.0;
    double amount_paid_back = 0.0;
    double interest_paid = 0.0;
    double growth_factor = 0.0;

    cout << "Monthly Loan Payment Calculator\n";

    cout << "Enter the loan amount: $";
    if (!(cin >> loan_amount) || loan_amount <= 0.0)
    {
        cerr << "Error: Loan amount must be positive.\n";
        return 1;
    }

    cout << "Enter the annual interest rate (percentage): ";
    if (!(cin >> annual_rate) || annual_rate < 0.0)
    {
        cerr << "Error: Interest rate cannot be negative.\n";
        return 1;
    }

    cout << "Enter the number of monthly payments: ";
    if (!(cin >> number_of_payments) || number_of_payments <= 0)
    {
        cerr << "Error: Number of payments must be positive.\n";
        return 1;
    }

    monthly_rate = annual_rate / PERCENT_CONVERSION / MONTHS_PER_YEAR;

    if (monthly_rate == ZERO_RATE)
    {
        monthly_payment = loan_amount / number_of_payments;
    }
    else
    {
        growth_factor = pow(1.0 + monthly_rate, number_of_payments);

        monthly_payment =
            (monthly_rate * growth_factor) /
            (growth_factor - 1.0) * loan_amount;
    }

    amount_paid_back = monthly_payment * number_of_payments;
    interest_paid = amount_paid_back - loan_amount;

    cout << fixed << setprecision(2);

    cout << "\nMonthly Loan Payment Report\n";
    cout << "----------------------------------------\n";

    cout << left << setw(28) << "Loan amount:"
         << right << "$" << loan_amount << '\n';

    cout << left << setw(28) << "Monthly interest rate:"
         << right << monthly_rate * PERCENT_CONVERSION << "%\n";

    cout << left << setw(28) << "Number of payments:"
         << right << number_of_payments << '\n';

    cout << left << setw(28) << "Monthly payment:"
         << right << "$" << monthly_payment << '\n';

    cout << left << setw(28) << "Amount paid back:"
         << right << "$" << amount_paid_back << '\n';

    cout << left << setw(28) << "Interest paid:"
         << right << "$" << interest_paid << '\n';

    return 0;
}
