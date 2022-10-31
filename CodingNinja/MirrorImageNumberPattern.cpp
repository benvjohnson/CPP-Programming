/**
 * Print the following pattern for the given N number of rows.
 * Pattern for N = 4
 *  ...1
 *  ..21
 *  .321
 *  4321
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
    	void mirrorPattern(int n){
            int row =1;
            while(row <=n){
                int space = 1;
                while(space <= n-row){
                    cout<<' ';
                   	space++;
                }
                int col = 1;
                while(col <= row){
                    cout<<col;
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
    ob.mirrorPattern(number);
    return 0;
}


