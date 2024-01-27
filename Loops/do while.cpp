/*
The do...while loop is similar to a while loop with one difference, i.e. the condition is tested at the end of 
the loop-body thus the loop-body is executed at least once irrespective of the condition which makes it an 
exit-controlled loop.
*/

#include <iostream>
using namespace std;

int main()
{
    // Initialization expression
    int i = 2;
    do
    {
        // Statement of body of loop
        cout << "Inside body of do-while loop" << endl;
        // Update expression
        i++;
    } while (i < 1); // Update expression
}