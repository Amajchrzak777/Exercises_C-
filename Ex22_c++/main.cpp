#include <iostream>

using namespace std;

void angleOfTriangle()
{
    int first, second, third;
    cout<<"1st angle: ";
    cin>>first;
    cout<<"2nd angle: ";
    cin>>second;
    third = 180-(first + second);
    cout <<"3rd angle: " <<third;
}

int main()
{
    angleOfTriangle();
    return 0;
}
