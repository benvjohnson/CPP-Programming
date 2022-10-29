/**
 *  Print the following pattern for the given N number of rows.
 *  Pattern for N = 4
 *  1
 *  22
 *  333
 *  4444
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
                    cout<<i;
                    j++;
                }
                cout<<endl;
                i++;
            }
        }
};


int main(){
    int n;
    cin >> n;
    Solution ob;
    ob.printTriangle(n);
    return 0;
}