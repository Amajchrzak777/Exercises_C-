#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;



int main()
{
    int side;
    float volume;
    cout<<"side: ";
    cin>>side;
    volume = pow(side,3);
    cout<<"volume: "<<volume;
    return 0;
}
