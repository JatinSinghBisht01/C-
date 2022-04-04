#include <iostream>
using namespace std;

// calculating sum of even natural nos till n.

int main(){
    int n;
    cout << "enter any no ";
    cin >> n;

    int i=1;
    int j=0;
    while (i<=n){
        if (i%2==0){
            j=j+i;
        }
        i=i+1;
    }
    cout << "sum of even nos is "<<j<< endl;
    return 0;

}