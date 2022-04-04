#include <iostream>
using namespace std;

// pattern 1.

int main(){
    int n;
    cout << "enter any no "<<endl;
    cin >> n;

    int i =1;
    while (i<=n){
        int j=1;
        while (j<=i){
            cout<<j;
            j=j+1;
        }
        cout << endl;
        i+=1;
    }
    return 0;
}