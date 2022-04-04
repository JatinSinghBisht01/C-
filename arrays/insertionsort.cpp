#include <iostream>
using namespace std;

// printing array.
void printarr(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int insertionsort(int arr[], int n){
    for (int i = 0; i<n; i++){
        int current = arr[i];
        int j;
        for ( j = i - 1; j>0; j--){
            if (current < arr[j]){
                arr[j+1] = arr[j];

            }
            else {
                break;
            }
        }
        arr[j+1] = current;
    }
}

int main(){
    int n;
    cout << "enter n : "<< endl;
    cin >> n;

    int arr[100];
    cout << "enter arr : "<< endl;
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

    insertionsort(arr, n);
    printarr(arr, n);
}