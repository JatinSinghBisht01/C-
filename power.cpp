#include <cmath>
#include <iostream>
using namespace std;

// calculating exponential.

int main(){
    int x;
    cout << "enter value of x ";
    cin >> x;
    if (x >= 0 && x <= 8){
        int n;
        cout << "enter value of n ";
        cin >> n;
        if (n >= 0 && n <=9){
            int expo = pow(x,n) ;
            cout << "exponential is "<< expo;
        } else { 
            cout << "n is not in given domain"<< endl;}
    }else{
        cout << "x is not in given domain "<< endl;
    }

}