#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int radius;
    float volume;
    cout<<"Radius: ";
    cin>>radius;
    volume = (float)4/3*M_PI*radius*radius*radius;
    cout<<volume;
    return 0;
}
