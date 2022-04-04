#include <iostream>
using namespace std;

// getting ascii value of an integer or character taken from user.

int main(){
    int a;
    cout <<"enter any no " << endl;
    cin >> a;
    char b=a;
    cout << "the ascii value of no is " << b << endl;
    
    char c;
    cout << "enter any character "<< endl;
    cin >> c;
    int d = c;
    cout << "the ascii value of character is " << d << endl;
    return 0;
}