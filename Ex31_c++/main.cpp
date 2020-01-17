#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Check whether a number is positive, negative or zero: " << endl;
    for(int i=0;i<5;i++)
    {
        cin>>number;
        if(number>0){
            cout<<"the entered number is positive!";
        }else if(number==0){
            cout<<"the entered number is zero!";
        }else
            cout<<"the entered number is negative";
    }
    return 0;
}
