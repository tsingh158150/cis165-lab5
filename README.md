Name: Trishi Singh   
CIS-165-W099  
LAB 5  
Program 1: Compound Interest

Description

The compound-interest program asks the user for the principal balance, annual interest rate as a percentage, and number of times interest is compounded during one year. It calculates the final savings amount and the interest earned, which is the output.

Formula

$A=P{\left({1+\frac{r}{n}}\right)}^{n}$

Where:

* A is the final amount.  
* P is the principal.  
* r is the annual interest rate in decimal form.  
* n is the number of times interest is compounded per year.

The interest earned is:

interest\_earned \= amount \- principal

The percentage is converted to decimal form by dividing it by 100\.

Program Plan 

1. Include \<iostream\>, \<iomanip\>, and \<cmath\>.  
2. Declare the required variables and an uppercase named constant for percentage conversion.  
3. Ask the user for the principal and validate that it is positive.  
4. Ask for the annual interest percentage and validate that it is not negative.  
5. Ask for the compounding frequency and validate that it is positive.  
6. Convert the annual percentage to a decimal rate.  
7. Calculate the final amount with the compound-interest formula and pow().  
8. Calculate the interest earned by subtracting the principal from the final amount.  
9. Display the annual rate, compounding frequency, principal, interest earned, and final savings amount with two decimal places.  
10. End the program.

Program 2: Monthly Loan Payment

Description

The loan-payment program asks the user for the loan amount, annual interest rate as a percentage, and number of monthly payments. It calculates the monthly interest rate, monthly payment, total amount paid back, and total interest paid.

Formula

First, convert the annual percentage rate to a monthly decimal rate:

monthly\_rate \= annual\_rate / 100 / 12

For a loan with a positive interest rate:

$M=P\frac{r(1+r{)}^{n}}{(1+r{)}^{n}-1}$

Where:

* M is the monthly payment.  
* P is the loan amount.  
* r is the monthly interest rate in decimal form.  
* n is the number of monthly payments.

Then calculate:

amount\_paid\_back \= monthly\_payment \* number\_of\_payments

interest\_paid \= amount\_paid\_back \- loan\_amount

When the interest rate is zero, the program calculates the payment as the loan amount divided by the number of payments. This avoids division by zero in the regular loan formula.

Program Plan / Pseudocode

1. Include \<iostream\>, \<iomanip\>, and \<cmath\>.  
2. Declare the required variables and uppercase named constants.  
3. Ask for the loan amount and validate that it is positive.  
4. Ask for the annual interest percentage and validate that it is not negative.  
5. Ask for the number of monthly payments and validate that it is positive.  
6. Convert the annual percentage to a monthly decimal rate.  
7. If the monthly rate is zero, divide the loan amount by the number of payments.  
8. Otherwise, calculate the monthly payment using the loan formula and pow().  
9. Calculate the total amount paid back.  
10. Calculate the total interest paid.  
11. Display the loan amount, monthly interest rate, number of payments, monthly payment, amount paid back, and interest paid with two decimal places.  
12. End the program.

Test the program:

Compound-Interest Tests  
Test 1- assigned values   
Input: Principal: \$1,000; rate: 4.25%; compounding: 12  
Expected results:**Expected interest earned;** \$43.34, **Expected amount in savings:** \$1,043.34  
Actual Result: **Expected interest earned;** \$43.34, **Expected amount in savings:** \$1,043.34  
Pass/Fail: Pass

Test 2- additional positive values  
Input: Principal: \$2500; rate: 5.5%; compounding: 4  
Expected results:**Expected interest earned;** \$140.36  
, **Expected amount in savings: 2640.36**  
Actual Result: **Expected interest earned;** \$140.36,  
 **Expected amount in savings: 2640.36**  
Pass/Fail: Pass

Loan-Payment Tests 

Test 1- assigned values   
Input :Loan: \$10,000; annual rate: 12%; payments: 36   
Expected results:Expected monthly payment:\$332.14   
 Expected amount paid back:\$11,957.15    
Expected interest paid : \$1,957.15   
Actual Result: Expected monthly payment:\$332.14     
Expected amount paid back:\$11,957.15    
Expected interest paid : \$1,957.15   
Pass/Fail: Pass  
Test 2- additional positive values  
Input :Loan:\$15,000 ; annual rate: 6.5%; payments: 48   
Expected results:Expected monthly payment: 355.72  
 Expected amount paid back:\$17074.77  
Expected interest paid : 2074.77  
Actual Result: Expected monthly payment: 355.72  
 Expected amount paid back:\$17074.77  
Expected interest paid : 2074.77  
Pass/Fail: Pass

Additional Zero-Interest Test

* Loan amount: \$1,200  
* Annual interest rate: 0%  
* Number of payments: 12

Expected results:

* Monthly payment: \$100.00  
* Amount paid back: \$1,200.00  
* Interest paid: \$0.00

Actual results:

* Monthly payment: \$100.00  
* Amount paid back: \$1,200.00  
* Interest paid: \$0.00

Explain my code

1\. Why must a percentage be divided by 100 before using it in a formula?

A percentage is out of 100, while the formulas use decimal values. Dividing by 100 converts the percentage into the correct decimal form. For example, 5% becomes 0.05. Using 5 instead of 0.05 would make the calculation incorrect.

2\. How does pow() represent exponentiation?

The pow() function from the \<cmath\> library raises a number to a specified power. It takes two arguments: the base and the exponent. For example, pow(2.0, 3.0) calculates ${2}^{3}$, which equals 8\. The programs use it to calculate the exponential part of the financial formulas.

3\. What does the number of compounding periods change in the savings formula?

The number of compounding periods determines how often interest is added to the principal during the year. More frequent compounding generally produces a higher final balance when the principal and annual interest rate stay the same.

4\. Why should calculations use full precision when money is displayed to two decimal places?

Rounding intermediate calculations too early can create small errors that accumulate in later calculations. The programs keep the full calculated values and use fixed and setprecision(2) only when displaying monetary results. This gives more accurate totals while still showing money in a readable format.

5\. How are the amount paid back and total interest calculated?

The amount paid back is calculated by multiplying the monthly payment by the total number of monthly payments. The total interest is calculated by subtracting the original loan amount from the amount paid back.

6\. Why are calculations stored in variables before being displayed?

Storing each calculation in a variable makes the code easier to read, understand, test, and debug. It also avoids placing complicated formulas directly inside cout statements and allows the same result to be reused.

