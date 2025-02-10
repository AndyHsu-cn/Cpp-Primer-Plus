/*	exe02_02.cpp
 *  2025-02-10
 *  modified by Andy Hsu
 * 
 *  Write a C++ program that asks for a distance in furlongs and converts it to yards.
 *  (One furlong is 220 yards.)
 */
#include <iostream>
using namespace std;
int main(void)
{
    double furlongs, yards;

    cout << "Enter a distance in furlongs: ";
    cin >> furlongs;
    yards = 220 * furlongs;
    cout << "That equivalent year is " << yards << endl;

    return 0;
}