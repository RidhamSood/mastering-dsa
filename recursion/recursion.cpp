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
int main(){
    basic_recursion();
    return 0;
}