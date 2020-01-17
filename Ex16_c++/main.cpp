#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int radius,height;
    float volume;
    cout<<"radius: ";
    cin>>radius;
    cout<<"height: ";
    cin>>height;
    volume = M_PI*pow(radius,2)*height;
    cout<<volume;
    return 0;
}
