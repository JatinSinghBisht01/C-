#include <iostream>
using namespace std;
 
// creating pattern.


int main(){
    int n;
    cout <<"enter value of n  ";
    cin >> n;
    int i = 1;

    while (i<=n){
       int j = 1;
       while (j<=i){
          char ch = 'A' + n;
          char k = ch - i + j - 1;
          cout << k;
        
          j++;
        }
        cout<< endl;
        i++;
    }
}