#include <iostream>
using namespace std;


int main(){
    char arr[100];
    cout << "enter arr. "<< endl;
    /*cin>> arr;                                        hello world                          it will store values befor white space as cin breaks at null vector.
                                                        hello   */

    cin.getline(arr,10);           // it will print all elemnts untill a new line is found.
    cout << arr<< endl;

}