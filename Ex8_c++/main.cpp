#include <iostream>

using namespace std;

int main()
{
    cout << "Check overflow/underflow during various arithmetical operation: " << endl;
    cout << "Range of ing is: "<<INT_MIN<<", "<<INT_MAX<<endl;
    int n1=2147483647;
    cout << "-------------------------------------------------"<<endl;
    cout << "Overflow the integer range and set in minimun range is: "<<n1+1<<endl;
    cout << "Increasing from this minimum range: "<<n1+2<<endl;
    cout << "Product is: "<<n1*n1<<endl;
    int n2=-2147483648;
    cout << "Underflow the range and set in kmaximum range: "<<n2-1<<endl;
    cout << "Increasing from this minimum range: "<<n1-2<<endl;
    cout << "Product is: "<<n2*n2<<endl;
    cout << endl;

    return 0;
}
