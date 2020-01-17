#include <iostream>

using namespace std;

int main()
{
    cout<<"Print the area and perimeter of a rectangle: ";
    cout << "-------------------------------------"<<endl;
    float x,h;
    float area,perimeter;
    cout <<"width and height: ";
    cin>>x>>h;
    area = x*h;
    perimeter = 2*x+2*h;
    cout<<area<<endl<<perimeter;
    return 0;
}
