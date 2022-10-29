/**
 *  Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
 *  Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 
 *  1, 3 & 5.
 *  Input format : 
 *  Integer N
 *  Output format :
 *  Sum_of_Even_Digits Sum_of_Odd_Digits 
 *  (Print first even sum and then odd sum separated by space)
*/

#include<iostream>
using namespace std;

int main(){

    int number,lastDigit,oddNumberSum = 0,evenNumberSum = 0;
    cin>>number;
    while (number > 0)
    {
        lastDigit = number%10;
        if(lastDigit % 2 == 0){
            evenNumberSum += lastDigit;
        }else{
            oddNumberSum  += lastDigit;
        }
        number = number/10;
    }
    cout<<evenNumberSum<<" "<<oddNumberSum;    
}