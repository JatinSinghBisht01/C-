// finding unique element. 

#include <iostream>
using namespace std;

int unique(int arr[], int n){
    for ( int l = 0; l<n; l++){
        int x = arr[l];
        for (int m = 0; m < n; m++){
            while (m != l){
                if (arr[m] != x){
                    return x;
                }
            }
        }
    }

}

int main(){
    int t, n;
    cout << " enter test cases. ";
    cin >> t ;
    int arr[100];
    for (int i = 0; i < t; i++){
        cout << "enter n : ";
        cin >> n;

        cout << " enter array[] : ";
        for (int j = 0; j < n; j++){
            cin >> arr[j];
        }

        cout << unique(arr, n);



    }
}