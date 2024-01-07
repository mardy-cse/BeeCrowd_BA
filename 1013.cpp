#include <iostream>
using namespace std;
int main(){
    int a,b,c,greatest;
    cin>>a>>b>>c;
    if(a>b && a>c){
        greatest = a;
    }
    else if(b>a && b>c){
        greatest =b;
    }else{
    greatest = c;
    }
    cout<<greatest<<" eh o maior";
    return 0;
}
