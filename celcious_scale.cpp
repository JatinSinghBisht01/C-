#include <iostream>
using namespace std;

// farenheit to celcious scale

int main(){
    cout << "enter farenheit value ";
    int F;
    cin >> F;
    float c = (5.0/9)*(F-32);
    cout << "the celcious value on scale is " << c << endl;
    return 0;

}