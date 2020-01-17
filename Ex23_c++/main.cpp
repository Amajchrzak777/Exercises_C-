#include <iostream>
#include <iomanip>

using namespace std;

void kmToM()
{
    int km;
    float m;
    cout<<"Km: ";
    cin>>km;
    m = km*(float)0.62;
    cout<<m;
}
int main()
{
    cout<<fixed<<setprecision(3);
    kmToM();
    return 0;
}
