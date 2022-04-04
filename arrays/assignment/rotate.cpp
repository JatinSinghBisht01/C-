#include <iostream>
using namespace std;

// printing array.
void printarr(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}
// rotating array.
void rotate(int arr[], int n, int d){
    for (int i = 0; (i+d)<n; i++){
        int temp = arr[i];
        arr[i] = arr[i+d];
        arr[i+d] = temp;

    }
}

int main(){
    int arr[100];
    int t;
    int n;
    int d;
    cout << "enter test cases : "<< endl;
    cin >> t;

    for (int i = 1; i<=t; i++){
        cout << "enter len of array : "<< endl;
        cin >> n;
        cout << "enter arr : " << endl;
        for ( int j = 0; j<n; j++){
            cin >> arr[j];
        }
        cout << "D : "<< endl;
        cin >> d;
        rotate(arr, n, d);
        printarr(arr, n);
        cout << endl;

    }
}