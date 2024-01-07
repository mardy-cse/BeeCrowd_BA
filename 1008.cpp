#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int NUMBER,HOURS;
    double AMOUNT, SALARY;

    cin>>NUMBER;
    cin>>HOURS;
    cin>>AMOUNT;
    SALARY = HOURS*AMOUNT;
    cout<<"NUMBER = "<<NUMBER<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<SALARY<<endl;
    return 0;

}
