#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter value of n ";
    cin >> n;

    int i =1;
    
    while (i<=n){
        int j = 1;
        char chs= 'A' + i -1;
        
        
        while (j<=i){
            char ch= chs + j -1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;

    }
}