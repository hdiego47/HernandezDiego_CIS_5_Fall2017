/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on November 21, 2017, 11:28 AM
 * Purpose: To fill and find the largest and smallest array values
 */

//System Libraries
#include <iostream>  //Input/output Stream Library
using namespace std; //Standard Name-space under which system Libraries Reside

//User Libraries

//Global Constants - No variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=10;
    int val[SIZE]={},big=0,small=0;
    
    //Input Data/Variables
    cout<<"Please input ten values. Press enter after every input"<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>val[i];
    }
    
    //Find the largest value
    for(int i=0;i<10;i++){
        val[i]>big?big=val[i]:big=big;
    }
    
    //Find the smallest value
    small=val[0];
    for(int i=0;i<=9;i++){
        val[i]<small?small=val[i]:small=small;
    }
    
    //Display/Output all pertinent variables
    cout<<endl;
    cout<<"The largest value  = "<<big<<endl;
    cout<<"The smallest value = "<<small<<endl;
    
    //Exit the program
    return 0;
}