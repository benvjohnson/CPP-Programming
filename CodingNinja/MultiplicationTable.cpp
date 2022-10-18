/**
 *  Write a program to print multiplication table of n
 *  Input Format : 
 *  A single integer, n
 *  Output Format :
 *  First 10 multiples of n each printed in new line
*/

#include<iostream>
using namespace std;

int main() {

    int number;
    cin>>number;
    int i = 1;
    while(i<=10){
        cout << i*number << endl;
        i++;
    }
      	
}
