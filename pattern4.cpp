#include <iostream>
using namespace std;

// pattern 1.

int main(){
    int n;
    cout << "enter any no ";
    cin >> n;

    int i =1;
    while (i<=n){
        int k=1;
        while (k<=n-i){
            cout<<" ";
            k=k+1;
        }
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