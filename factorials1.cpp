#include <iostream>
using namespace std;

// factorial of a no.

int main(){
    long long int a;
    cout <<"enter a no "<< endl;
    cin >> a;
    long long int i=1;
    long long int j=1;
    while (i<=a){
        j=j*i;
        i=i+1;

    }
    cout <<j<<endl;
    return 0;

}