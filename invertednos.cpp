#include<iostream>
using namespace std;

// Playing with nos.

int main(){
    int n;
    cout<<"enter value of n ";
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n-i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}