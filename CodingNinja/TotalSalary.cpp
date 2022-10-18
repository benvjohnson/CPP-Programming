/**
 *  Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character),
 *  and depending upon which the total salary is calculated as -
 *  totalSalary = basic + hra + da + allow – pf
 *  where : 
 *  hra   = 20% of basic
 *  da    = 50% of basic
 *  allow = 1700 if grade = ‘A’
 *  allow = 1500 if grade = ‘B’
 *  allow = 1300 if grade = ‘C' or any other character
 *  pf    = 11% of basic.
 *  Round off the total salary and then print the integral part only.
 *  Input format :
 *  Basic salary & Grade (separated by space)
 *  Output Format :
 *  Total Salary
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double basicSalary,hra,da,pf,totalSalary;
    int allowance = 0,salary;
    char employeeGrade;
    cin>>basicSalary;
    cin>>employeeGrade;
    hra = basicSalary*20/100;
    da = basicSalary*50/100;
    pf = basicSalary*11/100;
    if('A' == employeeGrade){
        allowance = 1700;
    }else if('B' == employeeGrade){
        allowance = 1500;
    }else if('C' <= employeeGrade && 'Z' >= employeeGrade){
        allowance = 1300;
    }
    totalSalary = (double)basicSalary+hra+da+allowance-pf;
    salary = round(totalSalary);
    cout<<salary;

}