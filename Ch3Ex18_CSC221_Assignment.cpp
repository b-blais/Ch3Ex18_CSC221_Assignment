/*
Title: Chapter 3 Exercise 18 - Interest Earned
File Name : Ch3Ex18_CSC221_Assignment
Programmer : Brion Blais
Date : 10 / 2024
Requirements :
    Write a program that asks for the principal, the interest rate,
    and the number of times interest is compounded.  Display the results.

    Without deposits, the formula is: amount = principal * (1 + (rate / T))^T
    

 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double principal;
    double interestRate;
    int timesCompounded;
    double totalReturned;

    cout << "Please enter the amount of money you are starting with to include cents. i.e. 400.23" << endl;
    cin >> principal;
    cout << "Please enter the interest rate as a percentage. i.e. 4.25" << endl;
    cin >> interestRate;
    cout << "Please enter the number of times the interest is compounded." << endl;
    cin >> timesCompounded;

    totalReturned = principal * pow((1 + ((interestRate/100) / timesCompounded)), timesCompounded);

    cout << "The return on your investment is:\n" << endl;
    cout << setprecision(2) << fixed;
    cout << "Interest Rate:       " << setw(13) << right << (interestRate) << "%" << endl;
    cout << "Times Compounded:    " << setw(13) << right << timesCompounded << endl;
    cout << "Principal:           $" << setw(12) << right << principal << endl;
    cout << "Interest:            $" << setw(12) << right << (totalReturned - principal) << endl;
    cout << "Amount in Savings:   $" << setw(12) << right << totalReturned << endl;

    return 0;
}