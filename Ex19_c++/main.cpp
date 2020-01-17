#include <iostream>
#include <math.h>

using namespace std;

void areaX()
{
    float area,circ;
    int x;
    cout<<("x: ");
    cin>>x;
    area = M_PI*pow(x,2);
    circ = 2*M_PI*x;
    cout<<area<<endl;
    cout<<circ<<endl;

}




int main()
{
    areaX();
    return 0;
}
