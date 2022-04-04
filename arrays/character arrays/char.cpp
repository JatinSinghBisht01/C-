#include <iostream>
using namespace std;

int main(){
    char a[100];
    cout << " enter a ";
    cin >> a;
    a[4] = 'd';
    //a[1] = '\0';      will return value of 0 index only .
    /*a[3] = 'c';   will replace null vector if abc is input in a and will return abcd 
    followed by some garbage value.*/
    cout << a;
}