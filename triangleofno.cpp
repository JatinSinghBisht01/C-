#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int i=1;
    while (i<=n){
        int k=1;
        while (k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        int p=i;
        while (j<=i){
           
            cout<<p;
            p++;
            j++;
        }
        int l=2*i - 2;
        while(i<=l){
            cout<<l;
            l=l-1;
    
        }
        cout<<endl;
        i++;
    }
}