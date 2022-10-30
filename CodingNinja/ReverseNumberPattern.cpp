/**
 * Print the following pattern for the given N number of rows.
 * Pattern for N = 4
 *  1
 *  21
 *  321
 *  4321
 * Input format :
 * Integer N (Total no. of rows)
 * Output format :
 * Pattern in N lines
*/

#include<iostream>
using namespace std;

class Solution{
    public:
        void printTriangle(int n) {
            int row = 1;
            while(row <= n){
                int col = row;
                while(col >= 1){
                    cout<<col;
                    col--;
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
    ob.printTriangle(number);
    return 0;
}