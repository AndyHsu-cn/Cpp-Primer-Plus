/*	02_05ourfunc.c
 *  2025-02-10
 *  modified by Andy Hsu
 * 
 *  defining your own function
 */
#include <iostream>
void simon(int n);
int main(void)
{
    using namespace std;

    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    
    return 0;
}

void simon(int n)
{
    using namespace std;

    cout << "Simon says touch your toes " << n << " times." << endl;
}