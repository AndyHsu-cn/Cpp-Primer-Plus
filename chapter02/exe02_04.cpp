/*	exe02_04.cpp
 *  2025-02-10
 *  modified by Andy Hsu
 * 
 *  Write a program that asks the user to enter his or her age.The program then
 *  should display the age in months:

    Enter your age: 29
    Your age in months is 384

 */
#include <iostream>
using namespace std;
int main(void)
{
    int age_year;

    cout << "Enter your age: " << endl;
    cin >> age_year;
    cout << "Your age in months is " << age_year * 12 << endl;

    return 0;
}