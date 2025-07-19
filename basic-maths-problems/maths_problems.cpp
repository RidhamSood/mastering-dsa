#include <iostream>
using namespace std;

// Extracting the digits one by one 
int main(){
    int num;
    int digits_count =0;
    cin>>num;
    while(num != 0){
        cout<<"digits: "<<num%10<<"\n";
        digits_count += 1;
        num=num/10;
    }
    cout<<"Total Digits: "<<digits_count;
    return 0;
}