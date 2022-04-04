#include<iostream>
using namespace std;

// Playing with nos.

int main(){
    int n;
    cout<<"enter value of n ";
    cin>>n;
    int i=1;
    while (i<=n){
        int k=1;
        while (k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while (j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}