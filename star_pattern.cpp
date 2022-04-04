#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter any no N ";
    cin >>n;

    int i=1;
    // creating n rows applying constraints on ith row.
    while (i<=n){

        // creating stars as per required patter.
        int j=1;
        while (j<=i){
            cout << "*";
            j=j+1;
        }  
        cout<<endl;
        i=i+1;
    }
    return 0;
}