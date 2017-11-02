/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on October 31, 2017, 11:47 AM
 * Purpose: Temperature conversion or interpolation
 */

//System Libraries
#include <iostream>  //Input/output Stream Library
#include <iomanip>   //Format library
using namespace std; //Standard Name-space under which system Libraries Reside

//User Libraries

//Global Constants - No variables only Math/Science/Conversion constants

//Function Prototypes
float degC(float);//Linear conversion
float degC(float,float,float,float,float);//Interpolation

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float degCent,degFahr; //independent and dependant variable
    float f1,f2,c1,c2;     //Tabular data points
    
    //Initialize Variables
    f1=32; //Freezing point of water 32 degrees Fahrenheit 
    f2=212;//Boiling point of water 212 degrees Fahrenheit
    c1=0;  //Freezing point of water 0 degrees Centigrade
    c2=100;//Boiling point of water 100 degrees Centigrade
    
    //Output the Temperature Table
    cout<<"The Temperature Conversion table"<<endl;
    cout<<"Fahrenheit  Celsius 1  Celsius 2"<<endl;
    cout<<fixed<<setprecision(4)<<showpoint;
    for(int f=f1;f<=f2;f++){
        cout<<setw(6)<<f<<setw(15)<<degC(f)
            <<setw(11)<<degC(f,f1,f2,c1,c2)<<endl;
    }

    //Exit the program
    return 0;
}

float degC(float f){
    return (f-32)*5/9;
}

float degC(float f,float f1,float f2,float c1,float c2){
    return c1+(c2-c1)*(f-f1)/(f2-f1);
}