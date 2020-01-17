#include <iostream>
#include <math.h>

using namespace std;

void celsToFahr()
{
    float cels,fahr;
    cout<<"Cels: ";
    cin>>fahr;
    cels = ((fahr * 5.0)-(5.0 * 32))/9;
    cout<<cels<<endl;
    cout<<fahr;
}

int main()
{
    celsToFahr();
    return 0;
}
