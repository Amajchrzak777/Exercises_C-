#include <iostream>
#include <math.h>

using namespace std;

void heronTriangle()
{
    int a,b,c;
    float p,pole;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    p = (float)1/2*(a+b+c);
    pole = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<pole;
}

int main()
{
    heronTriangle();
    return 0;
}
