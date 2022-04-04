// linear search.
#include <iostream>
using namespace std;

int main(){
    
    int array[100];
    int tcases;
    cout<< "enter testcases : ";
    cin>> tcases;
    int n;
    int x;
    for (int i = 0; i<tcases; i++){
        cout<< "enter n : ";
        cin>> n;

        // taking array values and printing array.
        for (int j = 0; j<n; j++){                   
            cin>> array[j];
        }
        cout<< " array ";
        for (int j = 0; j<n; j++){
            cout<<array[j]<<" ";
        }
        cout<<endl;
        // finding X in array.
        cout<< "enter x : ";
        cin>> x;
        for (int j = 0; j<n; j++){
            if ( array[j] == x){
                cout<<"found at index " <<j<< endl;
            }
            else{
                cout<<"at index "<< j << "-1"<<endl;
            }

        }
}
}