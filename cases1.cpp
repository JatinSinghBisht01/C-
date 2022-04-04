#include <iostream>
using namespace std;

int main(){
    char s;
    cout << "enter any character ";
    cin >> s;
    if (s>='a' && s<='z'){
        cout << "0";
    }else if(s>='A' && s<='Z'){
        cout << " 1 ";
    }else{
        cout <<"-1";
    }
    return 0;

}