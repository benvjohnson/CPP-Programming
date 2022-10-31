/**
 * Print the following pattern for the given N number of rows.
 * Pattern for N = 4
 * 4444
 * 333
 * 22
 * 1
 * Input format :
 * Integer N (Total no. of rows)
 * Output format :
 * Pattern in N lines
*/

#include<iostream>
using namespace std;

class Solution{
    public:
    	void invertedPattern(int n){
            int row =n;
            while(row >=1){
                int col = 1;
                while(col <= row){
                    cout<<row;
                    col++;
                }
                cout<<endl;
                row--;
            }
            
        }
};

int main(){
    int number;
    cin >> number;
    Solution ob;
    ob.invertedPattern(number);
    return 0;
}

