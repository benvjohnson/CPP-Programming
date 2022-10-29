/**
 * Problem : Pattern 1
 * Link    : https://practice.geeksforgeeks.org/problems/square-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_1
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
                cout<<"*\t";
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