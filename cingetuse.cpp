#include<iostream>
using namespace std;

// program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

int main(){
    char c;
    int digit;
    cout<<"enter value"<<endl;
    c = cin.get();
    int count=0;
    int count_char=0;
    int count_digit=0;
    int count_space=0;
    while(c!='$'){
        count++;
        if(c>='a' && c<='z'){
            count_char++;
        }
        digit = c;
        if(c>=0 && c<=9){
            count_digit++;
        }
        count_space=(count-(count_char + count_digit));
        c=cin.get();
    }
    cout<<"char: "<< count_char<<endl;
    cout<<"digit: "<< count_digit<<endl;
    cout<<"space: "<< count_space<<endl;

}