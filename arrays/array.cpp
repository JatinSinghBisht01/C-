#include<iostream>
#include<climits>
using namespace std;

int main(){
    // takin size of array
    int n;
    cout<<"enter value of n"<<endl;
    cin>> n;

    // defining array 
    int array[5];
    for (int i = 0; i<n; i++){
        cin>> array[i];

    }

    // printing array. 
    cout<< "array is "<<endl;
    for (int i = 0; i<n; i++){
        cout<< array[i]<<endl;
    }

    // displaying largest value in an array.
    int max = INT_MIN;
    for (int i=0; i<n; i++){
        if (array[i]>max){
            max = array[i];
        }
    }
    cout<< "max : "<< max << endl;

    // sum of all values in an array.
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum = sum + array[i];
    }
    cout << "sum : "<< sum;
    return 0;
}