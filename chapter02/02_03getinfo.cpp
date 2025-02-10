/*	02_03getinfo.c
 *  2025-02-09
 *  modified by Andy Hsu
 * 
 *  input and output
 */
#include <iostream>
int main(void)
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;

    return 0;
}