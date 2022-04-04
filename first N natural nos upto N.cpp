#include <iostream>
using namespace std;

// printing 1 to N natural nos.

int main(){
    int N;
    cout << "enter any no N ";
    cin >> N;
    cout<< "the required sequence of natural nos upto N is "<< endl;
    int i=1;
    while (i <= N){
        cout<< i << endl;
        i = i+1;
    }
     
    return 0;


}