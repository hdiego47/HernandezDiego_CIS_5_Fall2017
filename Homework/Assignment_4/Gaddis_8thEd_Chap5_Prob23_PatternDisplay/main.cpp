/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on October 19, 2017, 11:40 AM
 * Purpose: Creating triangular patterns
 */

//System Libraries
#include <iostream>  //Input/output Stream Library
using namespace std; //Standard Name-space under which system Libraries Reside

//User Libraries

//Global Constants - No variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Display/Output all pertinent variables
    for(int cnt1=1,cnt2=19,cnt3=10;cnt1<=10;cnt1++,cnt2--,cnt3--){
        //Display First Triangle
        for(int t1=1;t1<=cnt1;t1++)cout<<"*";
        //Display Middle Spaces
        for(int t1=1;t1<=cnt2;t1++)cout<<" ";
        //Display Second Triangle
        for(int t1=1;t1<=cnt3;t1++)cout<<"*";
        cout<<endl;
    }
    
    //Exit the program
    return 0;
}