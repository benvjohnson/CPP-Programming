/**
 * Print the following pattern for the given number of rows.
 * Pattern for N = 5
 *  E
 *  DE
 *  CDE
 *  BCDE
 *  ABCDE
 * Input format :
 * N (Total no. of rows)
 * Output format :
 * Pattern in N lines
*/

#include<iostream>
using namespace std;

class Solution{
    public:
        void printAlpha(int n){
            int row = 1;
            while(row <= n){
                int col = 1;
                char ch = 'A' + n - row;
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
    int n;
    cin >> n;
    Solution ob;
    ob.printAlpha(n);
    return 0;
}