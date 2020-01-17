#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    //generator liczb losowych
    srand(time(NULL));
    for(int i=0;i<50;i++)
    {
        cout<<"Losowanie: "<<rand()%50+1<<endl;
    }
    return 0;
}
