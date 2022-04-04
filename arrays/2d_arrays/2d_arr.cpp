# include <iostream>
using namespace std;

// fun to print arr.
void printarr(int arr[][100], int m, int n){
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cout<< arr[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    // declaring array. 
    int arr[100][100];
    int m,n;
    cout << "enter m and n : "<< endl;
    cin >> m>>n;

    // taking input.
    cout << "enter arr : ";
    for (int i = 0; i<m; i++){
        for ( int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    // printing array.
    printarr(arr, m, n);
}