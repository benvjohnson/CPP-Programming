/**
 *  Write a program to print all the factors of a number other than 1 and the number itself.
 *  Input Format :
 *  A single integer, n
 *  Output Format :
 *  All the factors of n excluding 1 and the number itself
*/

#include<iostream>
using namespace std;

int main(){
    int number,count = 2;
    cin>>number;
    while (count <= number/2){
        if(number % count == 0){
            cout<<count<<" ";
        }
        count++;
    }   
}