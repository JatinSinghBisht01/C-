#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    
    cout<<"prime: "<<endl;
    for (int i = 2 ; i<=n ; i++){
        bool a=false;
       
        for (int d =2 ; d<i ; d++){
            
            if (i%d == 0){
                 a = true;

            }
        

        }
        if (a){
            continue;
        }else{
            cout<<i<<endl;
        }

    }
}