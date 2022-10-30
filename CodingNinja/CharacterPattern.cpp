/**
 * Print the following pattern for the given N number of rows.
 * Pattern for N = 4
 *  A
 *  BC
 *  CDE
 *  DEFG
 * Input format :
 * Integer N (Total no. of rows)
 * Output format :
 * Pattern in N lines
*/

#include<iostream>
using namespace std;

class Solution{
    public:
        void printCharacter(int n){
            int row = 1;
            while(row <= n){
                int col = 1;
                char ch = 'A' + row - 1;
                while(col <= row){
                    cout<<ch;
                    ch++;
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
    ob.printCharacter(number);
    return 0;
}