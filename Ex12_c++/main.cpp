#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y;
    cout<<"x: "<<x<<", y: "<<y<<endl;
    swap(x,y);
    cout<<"x: "<<x<<", y: "<<y<<endl;
    z=y;
    y=x;
    x=z;

    cout<<x<<endl<<y;


    return 0;
}
