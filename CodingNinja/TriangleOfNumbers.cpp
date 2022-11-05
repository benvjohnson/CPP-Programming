/**
 * Print the following pattern for the given number of rows.
 * Pattern for N = 4
 * ...1
 * ..232
 * .34543
 * 4567654
 * The dots represent spaces.
 * Input format :
 * Integer N (Total no. of rows)
 * Output format :
 * Pattern in N lines
*/

#include<iostream>
using namespace std;

class Solution{
public:
	void printTriangleNumber(int n){
		int row = 1;
        while(row <= n){
            int space = 1;
            while(space <= n - row){
                cout<<" ";
            	space++;  
            }
            int col = 1;
            int value = row;
            while(col <= row){
                cout<<value;
                value++;
                col++;
            }
            value = 2 * (row - 1);
            while(value >= row){
                cout<<value;
                value--;
            }
            cout<<endl;
            row++;

        }
    }
};

int main(){
    int number;
    cin>>number;
    Solution ob;
    ob.printTriangleNumber(number);
    return 0;
}