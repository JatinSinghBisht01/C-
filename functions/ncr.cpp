#include<iostream>
using namespace std;

int n_c_r(int n){
    int factorial = 1;
    int i = 1;
    while(i<=n){
        factorial = factorial * i;
        i++;
    }
    return factorial;
}

int main(){
    int n,r;
    cin>>n>>r;
    int factorial_n= n_c_r(n);
    int factorial_r= n_c_r(r);
    int factorial_n_r= n_c_r(n-r);

    int ncr = factorial_n / (factorial_n_r * factorial_r);
    cout<< ncr;
}