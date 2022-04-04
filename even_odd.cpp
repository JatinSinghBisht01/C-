#include <iostream>
using namespace std;

// checking the given nu. is even or odd.

int main(){
    int a;
    cout << "enter any no ";
    cin >> a;
    if (a%2 == 0){
        cout << "the given no is even " << endl;
    }else{
        cout << "the given no is odd " << endl;
        return 0;
    }
}