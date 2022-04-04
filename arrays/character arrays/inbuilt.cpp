#include <iostream>
# include <cstring>
using namespace std;

int main(){
    char input[100];
    cout<< "enter arr : ";
    cin.getline(input,100);

    // length of string.
    int len = strlen(input);
    cout << "length : "<< len<< endl;

    // comparing to strings. 

    char input1[100], input2[100];
    cout<< "enter arr 1: "<< endl;
    cin>>input1;

    cout << "enter arr 2: "<< endl;
    cin>> input2;

    if (strcmp(input1,input2) == 0){
        cout << "true"<< endl;
    }
    else{
        cout << "false" << endl;
    }

    // copying strings. 

    char a[10] = {'a'};
    char b[10] = {'d'};

    strcpy(a,b);
    cout << a;
}