#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    double A,B,C;
    cin>>A>>B>>C;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<.5*A*C<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<3.14159*pow(C,2)<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<(A+B)/2*C<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<pow(B,2)<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<A*B<<endl;
    return 0;
}
