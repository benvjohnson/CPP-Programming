/**
 * Problem : Pattern 16
 * Link : https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285334/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_16
*/

#include<iostream>
using namespace std;

class Solution {
 public:
    void printTriangle(int n) {
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
    int number;
    cin >> number;
    Solution ob;
    ob.printTriangle(number);
    return 0;
}