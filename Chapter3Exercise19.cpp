/*Filename:Chapter3Exercise19.cpp
Programmer:Charles Sherwood
Date:2/25
Requirements:This program will calculate the amount of interest 
paid back on a loan taken out.
*/


#include <cmath>
#include <iostream>
#include<iomanip>
using namespace std;

double LoanA()
{
    double loan;
    cout << "How much was the initial loan?: $";
    cin >> loan;
    return loan;
}

double Monthly()
{
    double Month;
    cout << "How much is the monthly Interest Rate?: ";
    cin >> Month;
    return Month;
}

double PaymentsA()
{
    double payment;
    cout << "How many payments have you made already?: ";
    cin >> payment;
    return payment;
}




int main()
{
    double loan = LoanA();
    double Month = Monthly();
    double payment = PaymentsA();
    double MonthPay = Month * pow((1 + Month), payment) / (pow(1 + Month, payment) - 1) * loan;

    cout << fixed << setprecision(2) << MonthPay;
    



    
    
}

