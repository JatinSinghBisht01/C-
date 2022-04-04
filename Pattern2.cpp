#include <iostream>
using namespace std;

// pattern 2.

int main (){
    int n;
    cout << "enter value of n ";
    cin >> n;

    int i=1;
    int val=1;
    while (i<=n){
        int j=1;
        while (j<=i){
            cout << val;
            j=j+1;
            val=val+1;
        }
        cout << endl;
        i=i+1;

    }
    return 0;
}