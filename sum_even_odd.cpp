#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter value of n "<< endl;
    cin >> n;
    int i = 1;
    int even = 0;
    int odd = 0;

    while (i<=n){
       
        if (i%2==0){
            even = even + i;
        }else{
            odd = odd + i;
        }
        i+=1;
    }
    cout << "sum of even is "<< even <<endl;
    cout << "sum of odd is " << odd << endl;

}