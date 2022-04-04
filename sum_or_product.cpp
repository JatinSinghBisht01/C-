#include<iostream>
using namespace std;

// program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).

int main(){
    int number;
    cout<< " enter number"<<endl;
    cin>>number;
    char choice;
    cout<<"enter 'S' if sum of n terms else 'P' if product of n terms"<<endl;
    cin>> choice;
    int sum=0;
    int product=1;
    for(int i=1; i<=number ; i++ ){
        sum= sum + i;
        product = product*i ;  
    }
    if(choice== 'S' | choice=='s'){
        cout<<"sum: "<< sum;
    }
    else if(choice == 'P' | choice == 'p'){
        cout<<"product"<< product;
    }else{
        cout<<"-1";
    }
    return 0;
}