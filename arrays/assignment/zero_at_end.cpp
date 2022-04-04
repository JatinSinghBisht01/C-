#include <iostream>
using namespace std;

// printing array.
void printarr(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}
// collecting zero at end.
void end_zero(int arr[], int n){
    for (int i = 0; i<n; i++){
        for (int j = 0 ; j<(n-1); j++){
            if (arr[j] == 0){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[100];
    int t;
    int n;
    cout << "enter test cases : "<< endl;
    cin >> t;

    for (int i = 1; i<=t; i++){
        cout << "enter len of array : "<< endl;
        cin >> n;
        cout << "enter arr : " << endl;
        for ( int j = 0; j<n; j++){
            cin >> arr[j];
        }
        end_zero(arr, n);
        printarr(arr, n);
        cout << endl;

    }
}