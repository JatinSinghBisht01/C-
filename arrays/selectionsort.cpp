#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for (int i = 0; i<n; i++){
         // finding min element.
         int min = arr[i];
         int min_index = i;
         for (int j = i+1; j<n; j++){
             if (arr[j]<min){
                 min = arr[j];
                 min_index = j;
             }

         }
         // swap.
         int temp = arr[i];
         arr[i] = arr[min_index];
         arr[min_index] = temp;

    }
}

int main(){
 int arr[6] = {3,1,6,9,0,4};

 selection_sort(arr, 6);

 for (int i = 0; i<6; i++){
     cout << arr[i] << " ";
 }
    
}