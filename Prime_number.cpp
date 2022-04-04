#include <iostream>
using namespace std;

// checking given no is prime or not.

int main(){
    int N;
    cout << "enter any no ";
    cin >> N;
    
    int i=2;
    bool divided = false;
    while (i<=N-1){
        if (N%i==0){
            cout <<"not prime "<< endl;
            divided = true;
        }
        i=i+1;
    }
        if (!divided){
            cout << "no is prime "<< endl;
        
        }
    return 0;
}