#include <iostream>
using namespace std;

float ReadNumber(string Massage)
{
    float Num = 0;
    do{
    cout << Massage << endl;
    cin >> Num;
    }while(Num>0);
    return Num;
}
