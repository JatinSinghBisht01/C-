#include <iostream>
using namespace std;

// Compairing two given nos provided by user.j

int main(){
    int a;
    int b;
    cout << "enter value of a and b ";
    cin >> a>>b;
    if (a==b){
        cout << "they are equal " << endl;
    }else if (a>b){
        cout << "a is greater than b "<< endl;
    }else{
        cout << "b is greater than a "<< endl;
        return 0;
    }
}