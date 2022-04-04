#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter n ";
    cin>>n;

    int i = 1;

    while (i<=n){
        int j = 1;
        int p=i;
        while (j<=i){
            cout<<p;
            j++;
            p=p-1;
        }
        cout<< endl;
        i++;
    }
}