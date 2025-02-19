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


//Make Variable Modules
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



//Return them to main module, and calculate the users input.
int main()
{
    double loan = LoanA();
    double Month = Monthly();
    double payment = PaymentsA();
    double MonthPay = Month * pow((1 + Month), payment) / (pow(1 + Month, payment) - 1) * loan;
    double MIR = Month * 100;
    double APB = MonthPay * payment;
    double IP = APB - loan;

    //Display all the information onto the screen .
    cout << fixed << setprecision(2) << "Loan Amount:\t\t$" << loan << endl;
    cout <<"Monthly Interest Rate:\t" << MIR <<"%" << endl;
    cout << "Number of payments:\t" << payment << endl;
    cout << fixed << setprecision(2) << "Monthly Payment:\t$" << MonthPay << endl;
    cout << fixed << setprecision(2) << "Amount Paid Back:\t$" << APB << endl;
    cout << fixed << setprecision(2) << "Interest Paid:\t\t$" << IP << endl;


    
    
}

