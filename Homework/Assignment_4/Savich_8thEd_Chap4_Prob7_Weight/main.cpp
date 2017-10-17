/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on October 17, 2017, 11:55 AM
 * Purpose: Weight problem
 */

//System Libraries
#include <iostream>  //Input/output Stream Library
#include <cmath>     //Math library
using namespace std; //Standard Name-space under which system Libraries Reside

//User Libraries

//Global Constants - No variables only Math/Science/Conversion constants
const float GRAVITY=6.673e-8f; //Universal gravitational constant
const float CNVCMFT=1/30.48f;  //30.48cm/ft
const float CNVMIFT=5280.0f;   //5280ft/mile
const float CNVGKG=1000.0f;    //100 grams to 1 kilogram
const float REARTH=3959.0f;    //Radius of the earth
const float MEARTH=5.972e24f;  //Mass of the earth

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float myMass, myWgt;  //The users mass and weight
    float actWgt;
    
    //Initialize Variables
    myMass=6.0f;
    
    //Input Data/Variables
    cout<<"This program converts your weight in lbs to"<<endl;
    cout<<"Your mass in slugs"<<endl;
    cout<<"Input your actual weight in lbs"<<endl;
    cin>>actWgt;
    cout<<endl;
    
    //Process or map the inputs to the outputs
    float delta,tol=.001f;
    float kGain=tol;
    do{
        myWgt=GRAVITY*pow(CNVCMFT,3)*MEARTH*CNVGKG*myMass/
                (pow(REARTH,2)*pow(CNVMIFT,2));
        delta=actWgt-myWgt;
        myMass+=kGain*delta;
    }while(abs(delta)>=tol);
    
    //Display/Output all pertinent variables
    cout<<"Your weight = "<<myWgt<<" lbs"<<endl;
    cout<<"Your mass   = "<<myMass<<" slugs"<<endl;
    
    //Exit the program
    return 0;
}