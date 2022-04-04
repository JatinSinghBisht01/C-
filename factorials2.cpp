#include <iostream>
using namespace std;

// factorial of a no.

int main(){
    long long int n;
    cout <<"enter a no "<< endl;
    cin >> n;
    long long int fact=1;
    if (n<0){
        cout<<"0"<<endl;
    }else if(n==0 || n==1){
        cout<<"1"<<endl;
    }else{
        while (n>1){
        fact=fact*n;
        n=n-1;
        }

    }
    cout <<fact<<endl;
    return 0;

}