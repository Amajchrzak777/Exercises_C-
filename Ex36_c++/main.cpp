#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<"Formatting the output using type casting: "<<endl;
    cout << "-------------------------------------"<<endl;
    cout << "Print floating-point number in fixed format with 1 decimal place: "<<endl;
    cout <<fixed<<setprecision(1)<<endl;
    int i1=4;
    int i2=8;
    cout<< i1/i2<<endl;
    cout<<(double)i1/i2<<endl;
    cout<< i1/(double)i2<<endl;
    cout<< (double)(i1/i2)<<endl;

    double d1 = 5.5,d2=6.6;
    cout<<"\nTest implicit type casting: \n";
    cout<< (int)d1/i2<<endl;
    cout<< (int)(d1/i2)<<endl;
    cout <<"\nint implicitly casts to double: \n";
    d1 = i1;
    cout << d1 <<endl;
    cout<<"double truncates to int!: \n";
    i2=d2;
    cout << i2 <<endl;
    return 0;
}
