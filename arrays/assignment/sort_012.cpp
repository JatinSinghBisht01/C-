#include <iostream>
using namespace std;

// printing arr.
void printarr(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

// sorting.
void sort_012(int arr[], int n){
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n - 1 ; i++){
            if ( arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

}
int main(){
    int t,n;
    int arr[100];
    cout << "enter t : "<< endl;
    cin >> t;

    for (int i = 1; i<=t; i++){
        cout <<"enter n : "<< endl;
        cin >> n;

        cout << "enter arr : "<< endl;
        for (int j = 0; j<n; j++){
            cin >> arr[j];

        }
        sort_012(arr, n);
        printarr(arr, n);
        cout << endl;
    }



}