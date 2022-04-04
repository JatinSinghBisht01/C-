#include <iostream>
using namespace std;

void printarr(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int arr[], int n){
    for (int j = 0; j < n-1; j++){
        for (int i = 0; i < n-1-j; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr [i] = arr[i+1];
                arr[i+1] = temp ;
            }
        }
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

    bubble_sort(arr, n);
    printarr(arr, n);
}