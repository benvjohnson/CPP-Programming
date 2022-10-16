/**
 * Write a program that takes a character as input and prints either 1, 0 or -1
 * according to the following rules.
 * 1, if the character is an uppercase alphabet (A - Z)
 * 0, if the character is a lowercase alphabet (a - z)
 * -1, if the character is not an alphabet
 *
 * Input format :
 * Single Character
 *
 * Output format :
 * 1 or 0 or -1
 *
 */

#include<iostream>
using namespace std;

int main(){

    int asciiValue;
    char character;
    cin>>character;
    asciiValue = character;
    if(asciiValue >= 65 &&  asciiValue <= 90){
        cout<<"1";
    }
    else if(asciiValue  >= 97 && asciiValue <=122){
        cout<<"0";
    }
    else{
        cout<<"-1";
    }

}