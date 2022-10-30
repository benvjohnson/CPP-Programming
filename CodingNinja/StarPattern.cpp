/**
 * Print the following pattern
 * Pattern for N = 4
 * The dots represent spaces.
 *  ...*
 *  ..***
 *  .*****
 *  *******
 *  Input Format :
 *  N (Total no. of rows)
 *  Output Format :
 *  Pattern in N lines
*/

#include<iostream>
using namespace std;

class Solution{
public:
	void printTriangle(int n){
		int row = 1;
        while(row <= n){
            int space = 1;
            while(space <= n - row){
                cout<<' ';
            	space++;  
            }
            int col = 1;
            while(col <= (2 * row) - 1){
                cout<<'*';
            	col++; 
            }
            cout<<endl;
            row++;
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