#include<iostream>
using namespace std;

//program to print first x terms of the series 3N + 2 which are not multiples of 4.

int main(){
    int x;
    cout<<"enter xth term ap to be printed."<<endl;
    cin>>x;
    for (int i; i<=x ; i++){
        int n=1;
        while (n<=100){
            int term = 3*n + 2;
            if (term % 4 == 0){
                continue;
            }else{
                cout<< term;
            }
            n++;
        }
    }
}