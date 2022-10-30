/**
 * Print the following pattern for the given N number of rows.
 * Pattern for N = 3
 *  A
 *  BB
 *  CCC
 * Input format :
 * Integer N (Total no. of rows)
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
                char ch = 'A' + row - 1;
                while(col <= row){
                    cout<<ch;
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