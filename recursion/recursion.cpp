#include <bits/stdc++.h>
using namespace std;

// Just basic implementation of recursion
int counter = 0;
void basic_recursion(){
    counter ++;
    if(counter == 5){ // condition where function returns and stop calling itself called
                      // Base Condition
        return;
    }
    else{
        cout<<counter<<endl;
        basic_recursion();
    }
}

// print 1 to n using recursion
// we are doing backtracking here
void func1(int num){
    if(num<1) return;
    func1(num-1);
    cout<<num;
}

// print n to 1
void func2(int num){
    if(num<1) return ;
    cout<<num;
    func2(num-1);
}
int main(){
    int num;
    cin>>num;
    basic_recursion();
    func1(num);
    func2(num);
    return 0;
}