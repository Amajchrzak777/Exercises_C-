#include <iostream>

using namespace std;

void kelvToFahr()
{
    int kelv;
    float fahr;
    cout<<"Kelvin: ";
    cin>>kelv;
    fahr = (float)1.8*(kelv-273)+32;
    cout<<"Fahrenheit: "<<fahr;
}

int main()
{
    kelvToFahr();
    return 0;
}
