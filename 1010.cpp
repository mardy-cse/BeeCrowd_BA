/*
In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.


12 1 5.30
16 2 5.10

VALOR A PAGAR: R$ 15.50
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int pc_1,pc_2,pu_1,pu_2;
    double pp_1,pp_2;

    cin>>pc_1>>pu_1>>pp_1;
    cin>>pc_2>>pu_2>>pp_2;
    double total = (pu_1*pp_1)+(pu_2*pp_2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;

}
