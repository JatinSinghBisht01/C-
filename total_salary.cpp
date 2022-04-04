#include <cmath>
#include <iostream>
using namespace std;

// to calculate total salary.

int main(){
    int basic;
    char grade;
    cout << "enter your basic salary "<< endl;
    cin >> basic;
    cout << "enter grade A or B or C " << endl;
    cin >> grade;

    double hra = 0.2*basic;
    double da = 0.5*basic;
    double pf = 0.11*basic;
    int allow;
    if (grade == 'A'){
        allow = 1700;
    }else if (grade == 'B'){
        allow = 1500;
    }else{
        allow = 1300;
    }
    double s = basic + hra + da + allow - pf;
    int total_salary = round(s);
    cout << "total salary is "<< total_salary << endl;
    return 0;   
}