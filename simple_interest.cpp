#include <iostream>
using namespace std;

//calculating simple intrest using principal, rate, time.

int main(){
    int principal=200;
    int rate=8;
    int time=30;
    int SI= (principal*rate*time)/100;
    cout << SI << endl;
    return 0;
}