/*	02_02carrots.cpp
 *  2025-02-09
 *  modified by Andy Hsu
 * 
 *  food processing program
 *  uses and displays a variable
 */
#include <iostream>
int main(void)
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout <<" carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    return 0;
}