#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int x;
    double y, avg;
    cin>>x;
    cin>>y;
    avg = x/y;
    cout<<fixed<<setprecision(3)<<avg<<" km/l"<<endl;
    return 0;
}
