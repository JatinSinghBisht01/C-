#include <iostream>
using namespace std;

int binarysearch(int array[], int n, int x) {
    int start = 0;
    int end = n-1;

    while ( start <= end) {
        int mid = (start + end) / 2 ;
        if ( array[mid] == x) {
            return mid ;

        }
        else if ( x > array[mid]) {
            start = mid + 1 ;

        }
        else if ( x < array[mid]) {
            end = mid - 1 ;
        }
    }
    
    return -1;
}

int main(){
    int n;
    cout<< "enter n : ";
    cin>> n;

    int array[10] ;

    for (int i = 0; i<n; i++){
        cin >> array[i];

    }
    int x;
    cout << "value : ";
    cin >> x;

    cout << binarysearch(array, n, x) << endl;

}