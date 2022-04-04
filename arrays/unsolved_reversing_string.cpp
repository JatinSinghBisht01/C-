// reversing a string.

#include <iostream>
using namespace std;


void printarray(int array[], int n){
    for (int j=0 ; j<n; j++){
        cout<< array[j]<<" ";
    }
}
int reverse(int array[], int n){
    int i = 0;
    int j = n-1;
    while (i<j){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j++;
    }
  
}

int main(){
    int array[10] = {1,2,3,4,5};
    
    reverse(array, 5);
    cout << "reversed array is";
    printarray(array, 5);

}