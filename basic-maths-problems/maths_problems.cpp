#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Extracting the digits one by one 
void extract_and_count_number(int number){
    int num;
    num = number;
    int digits_count =0;

    // As in this division comes in iteration so in T.C log comes
    while(num != 0){
        cout<<"digits: "<<num%10<<"\n";
        digits_count += 1;
        num=num/10;
    }
    cout<<"Total Digits: "<<digits_count<<"\n";
    // count the digit
    cout<<"Total Digits: "<<((int)(log10(number)+1))<<"\n";
}

// Method one for reversing the digit
void reverse_number_i(int number){
    int count = (int)log10(number)+1;
    int newNumber = 0;
    int multiplier =pow(10,count-1);// 10x10x10x10x10
    // we have to take 1 zero less then count because it will go 5,4,3,2,1 means 00000,0000,000,00,0
    // but we want 0000,000,00,0,1 at the end we want 1 not zero
    while(count != 0){
        //  multiplier*number%10 This will create issue so use proper brackets 
        newNumber = multiplier*(number%10) + newNumber;
        multiplier /= 10;
        number = number/10;
        count -=1;

    }
    cout<<newNumber<<"\n";
}
// Method second for reversing the digit
void reverse_number_ii(int number){
    int reverse_number = 0;
    while(number > 0){
        reverse_number = (reverse_number*10) + number%10;
        number = number/10;
    }
    cout<<reverse_number<<"\n";
}

// Check Number is PALINDROME or not
void palindrome(int num){
    int reverse_number =0;
    int number = num;
    while(number!= 0){
        reverse_number = reverse_number*10 + number%10;
        number = number/10;
    }
    if(reverse_number == num) cout<<"The given number is a palindrome\n";
    else cout<<"The given number is not an palindrome number\n";
}

// Check Number is ARMSTRONG or not
void armstrong(int number){
    int num = number;
    int num1 = number;
    int total_digits = (int)(log10(number)+1);
    int total_sum = 0;
    int total_sum_1= 0;

    // find armstrong number using pow() function for calculating the power values
    for(int i=0 ; i<total_digits; i++){
        total_sum = total_sum + pow(num%10,total_digits);
        num = num/10;
    }
    if(total_sum == number) cout<<number<<" is armstrong\n";
    else cout<<number<<" is not armstrong\n";
    
    // find armstrong number and calculate power values using for loop
    for(int i=0 ; i<total_digits; i++){
        int cube_of_each_number = 1;
        for(int j=0; j<total_digits; j++){
            cube_of_each_number *= (num1%10);
        }
        total_sum_1 = total_sum_1 + cube_of_each_number;
        num1 = num1/10;
    }
    if(total_sum_1 == number) cout<<number<<" is armstrong"<<endl;
    else cout<<number<<" is not armstrong\n";
}

// Print all divisors
void print_all_divisors(int number){
    vector<int> divisors;
    for(int i = 1 ; i<= sqrt(number); i++){
        if(number%i == 0){
            divisors.push_back(i);
            if(i != number/i){
                divisors.push_back(number/i);
            }
        } 
    }
    sort(divisors.begin(),divisors.end());
    for(auto it:divisors){
        cout<<it<<"\n";
    }
}

// Check Number is Prime or not
void check_prime(int number){
    vector <int> ls;
    for (int i = 1; i*i <= number; i++)
    {
        if(number%i == 0){  
            ls.push_back(i);
            if(i != number/i){
                ls.push_back(number/i);
            }
        }
    }
    
    if(ls.size() == 2) cout<<"Given Number is prime\n";
    else cout<<"Given Number is not prime\n";    
}

// Find GCD/HCF 
void gcd_hcf(int number1, int number2){
    // It's T.C = O(sqrt(minimum(number1, number2)))
    int hcf = 1;
    if(number1<number2){
        for(int i=1; i*i<=number1; i++){
            if(number1 % i == 0 && number2%i== 0){
                if(i>hcf){
                    hcf = i;
                }
                // if the largest factor of smallest number divides the largest number 
                // means that number is hcf 
                // eg from 12,36 -> 12 is a largest factor of 12(smallest number)
                // now that 12 divides the largest number which is 36 so that is hcf
                if(i != number1/i && i != number2/i && number2%number1/i == 0){
                    if(number1/i>hcf){
                        hcf = number1/i;
                        break;
                    }
                }
            }
        }
    }

    else{
        for(int i=1; i*i<=number2; i++){
            if(number2 % i == 0 && number1%i== 0){
                if(i>hcf){
                    hcf = i;
                }
                if(i != number2/i && i != number1/i && number1%number2/i == 0){
                    if(number2/i>hcf){
                        hcf = number2/i;
                        break;
                    }
                }
            }
        }
    }
    cout<<hcf<<"\n";
}

int main(){
    int num,num1;
    cin>>num;
    cin>>num1;
    extract_and_count_number(num);
    reverse_number_i(num);
    reverse_number_ii(num);
    palindrome(num);
    armstrong(num);
    print_all_divisors(num);
    check_prime(num);
    gcd_hcf(num,num1);
    return 0;
}