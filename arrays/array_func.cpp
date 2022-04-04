#include <iostream>
using namespace std;

void printarray(int array[], int n){
    for (int j=0 ; j<n; j++){
        cout<< array[j]<<" ";
    }

}

int main(){
    int n;
    cout << "enter n "<<endl;
    cin>> n;
    
    int array[5];
    cout << "enter elements : "<< endl;
    

    for (int i=0; i<n; i++){
       
        cin>> array[i];    
    }
    cout<<endl;

    printarray(array, n);

    
   
}