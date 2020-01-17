#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double pi=3.14159265;
    cout << fixed << setprecision(4);
    cout << "Formating the output: " << endl;
    cout << "----------------------" << endl;
    cout << "The value of PI equal: "<<pi<<endl;
    cout << "The value of pi decimal place of total width 8 : |"<<setw(8)<<pi<<"|"<<endl;
    cout << "The value of pi decimal place of total width 8 : |"<<setw(10)<<pi<<"|"<<endl;
    cout << setfill('-');// szerokosc na jakiej znajdzie sie dany tekst (liczba)
    cout << "The value of pi decimal place of total width 8 : |"<<setw(8)<<pi<<"|"<<endl;
    cout << "The value of pi decimal place of total width 8 : |"<<setw(10)<<pi<<"|"<<endl;

    cout << scientific;//wyœwietla z notacja wyk³adnicz¹
    cout << "The value of pi in scientific format is: "<<pi<<endl;

    bool done = false;
    cout << " Status in number: "<< done<<endl;
    cout<< boolalpha;//status liczby w alfabecie
    cout << " Status in alphabet : "<< done<<endl;
    cout << endl;
    return 0;
}
