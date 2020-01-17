#include <iostream>

using namespace std;

int main()
{
    int a1,a2,b1,b2;
    float sum=0;
    float average=0;

    cout << "Input 1st two numbers: " << endl;
    cin>>a1>>a2;
    cout<< "Input 2nd two numbers: "<<endl;
    cin>>b1>>b2;
    sum=a1+a2+b1+b2;
    cout<<sum<<endl;
    average=sum/4;
    cout<<(float)average;
    return 0;
}
