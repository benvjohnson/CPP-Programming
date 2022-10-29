/**
 * Print the following pattern for the given N number of rows.
 * Pattern for N = 4
 *  4444
 *  4444
 *  4444
 *  4444
 * Input format :
 * Integer N (Total no. of rows)
 * Output format :
 * Pattern in N lines
*/

#include<iostream>
using namespace std;

class Solution {
  public:
    void printSquare(int n) {
        int row = 0;
        while(row < n){
            int col = 0;
            while(col < n){
                cout<<n;
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
    ob.printSquare(number);
    return 0;
}