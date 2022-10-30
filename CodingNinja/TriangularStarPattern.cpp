/**
 * Print the following pattern for the given N number of rows.
 * Pattern for N = 4
 *  *
 *  **
 *  ***
 *  ****
 *  Note : There are no spaces between the stars (*).
 *  Input format :
 *  Integer N (Total no. of rows)
 *  Output format :
 *  Pattern in N lines
*/

#include<iostream>
using namespace std;

class Solution{
    public:
        void printTriangle(int n){
            int i = 1;
            while(i <= n){
                int j= 1;
                while(j <= i){
                    cout<<"*";
                    j++;
                }
                cout<<endl;
                i++;
            }
        }
};


int main(){
    int number;
    cin >> number;
    Solution ob;
    ob.printTriangle(number);
    return 0;
}