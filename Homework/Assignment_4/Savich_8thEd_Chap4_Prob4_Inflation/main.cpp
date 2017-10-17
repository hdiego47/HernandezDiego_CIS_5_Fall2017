/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on October 17, 2017, 12:30 PM
 * Purpose: Inflation Calculator
 */

//System Libraries
#include <iostream>  //Input/output Stream Library
#include <cmath>     //Math library
#include <iomanip>   //Format Library
using namespace std; //Standard Name-space under which system Libraries Reside

//User Libraries

//Global Constants - No variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int yrNow=2017,yrThen;
    float infRate,prNow,prThen;
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"This program calculates inflation rate"<<endl;
    cout<<"Input the Year and Price of Original item"<<endl;
    cout<<"as well as Price today"<<endl;
    cin>>yrThen>>prThen>>prNow;
    cout<<endl;
    
    //Process or map the inputs to the outputs
    infRate=.09;
    float delta,tol=.001,prCalc;
    float kGain=.001;
    do{
        prCalc=prThen;
        for(int year=yrThen+1;year<=yrNow;year++){
            prCalc*=(1+infRate);
        }
        delta=prNow-prCalc;
        infRate+=kGain*delta;
    }while(abs(delta)>=tol);
    
    //Display/Output all pertinent variables
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"In "<<yrThen<<" The price = $"<<prThen<<endl;
    cout<<"In "<<yrNow<<" The price  = $"<<prNow<<endl;
    cout<<"The Price calculated = $"<<prCalc<<endl;
    cout<<"The inflation rate   = "<<infRate*100.0f<<"%"<<endl;
    
    //Exit the program
    return 0;
}