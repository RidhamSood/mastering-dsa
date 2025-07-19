#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Extracting the digits one by one 
int main(){
    int number,num;
    int digits_count =0;
    cin>>number;
    num = number;
    while(num != 0){
        cout<<"digits: "<<num%10<<"\n";
        digits_count += 1;
        num=num/10;
    }
    cout<<"Total Digits: "<<digits_count<<"\n";
    // count the digit
    cout<<"Total Digits: "<<((int)(log10(number)+1));
    return 0;
}