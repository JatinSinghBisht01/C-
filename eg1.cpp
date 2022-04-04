#include <iostream> 
using namespace std;

// product of two nos if greater than zero else sum.

int main(){
    int a, b;
    cout << "enter the two nos ";
    cin >>a>>b;
    int c= a*b;
    int d=a+b;
    if (a<100 && b< 100){
        cout <<"product ";
        cout <<c;
    }else{
        cout<<d;
    }
    return 0;

}