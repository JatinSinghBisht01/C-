#include <iostream>
using namespace std;

int main(){
    int a[100][100];
    int m, n;
    cout << "enter m and n : " << endl;
    cin >> m >> n;

    // taking input.
    cout << "enter arr : " << endl;
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cin >> a[i][j];
        }
        cout << endl;
    }
    // printing rowwise.
    cout << "row wise"<< endl;
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cout << a[i][j]<< " ";
        }
        cout<<endl;
    }
    
    cout << endl;

    // printing column wise.
    cout << "col wise"<< endl;
    for (int j = 0; j<m; j++){
        for (int i = 0; i<n; i++){
            cout << a[i][j]<< " ";
        }
        cout<<endl;
    }

}