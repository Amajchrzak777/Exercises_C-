#include <iostream>

using namespace std;

void areaRectangle()
{
    int x,y;
    cin>>x;
    cin>>y;
    cout<<x*y;
}

void perimeterRectangle()
{
    int x,y;
    cin>>x;
    cin>>y;
    cout<<2*x+2*y;
}
int main()
{
    areaRectangle();
    perimeterRectangle();
    return 0;
}
