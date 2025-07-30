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

int sum_using_recursion(int num){
    if(num<1) return num;
    else return  num + sum_using_recursion(num-1);
}

// factorial using recursion
int factorial_rec(int num){
    if(num == 1) return 1;
    return num*factorial_rec(num-1);
}

int fibonacci(int num){
    if(num<=1){
        return num;
    }
    else return fibonacci(num-1) + fibonacci(num-2);
}

int main(){
    int num;
    cin>>num;
    basic_recursion();
    func1(num);
    cout<<endl;
    func2(num);
    cout<<endl;
    cout<<sum_using_recursion(num);
    cout<<endl;
    cout<<factorial_rec(num);
    cout<<endl;
    cout<<fibonacci(num);
    cout<<endl;

    return 0;
}