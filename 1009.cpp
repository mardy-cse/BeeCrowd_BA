/*
Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string Name;
    double Salary;
    double Sale_amount;
    double Bonus;

    cin>>Name;
    cin>>Salary;
    cin>>Sale_amount;

    Bonus = (Sale_amount*15)/100;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<Salary+Bonus<<endl;
    return 0;
}
