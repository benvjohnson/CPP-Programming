/**
 *  Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit
 *  values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
 *  Input Format :
 *  3 integers - S, E and W respectively 
 *  Output Format :
 *  Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value in integer form.
 *  The Fahrenheit value and its corresponding Celsius value should be separate by single space.
*/

#include<iostream>
using namespace std;

int main(){
    int start,end,step,celsius;
    cin>>start;
    cin>>end;
    cin>>step;
    while (start <= end){
        celsius = (int)((5.0/9)*(start-32));
         printf("%d\t%d \n",start,celsius);
        start += step;
    }
     
}