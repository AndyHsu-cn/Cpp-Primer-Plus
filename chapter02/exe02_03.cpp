/*	exe02_03.cpp
 *  2025-02-10
 *  modified by Andy Hsu
 * 
 *  Write a C++ program that uses three user-defined functions (counting main() as
 *  one) and produces the following output:

    Three blind mice
    Three blind mice
    See how they run
    See how they run

 *  One function, called two times, should produce the first two lines, and the 
 *  remaining function, also called twice, should produce the remaining output.
 */
#include <iostream>
using namespace std;
void blind(void);
void see(void);
int main(void)
{
    blind();
    blind();
    see();
    see();

    return 0;
}

void blind(void)
{
    cout << "Three blind mice" << endl;
}

void see(void)
{
    cout << "See how they run" << endl;
}