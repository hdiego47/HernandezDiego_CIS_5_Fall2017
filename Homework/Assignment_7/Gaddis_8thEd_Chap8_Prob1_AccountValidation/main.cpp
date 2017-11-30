/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on November 30, 2017, 11:33 AM
 * Purpose: Charge Account Validation
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
    const int SIZE=18;
    int accList[SIZE]={5658845,4520125,7895122,9777541,9562388,1302850,
                       8080152,4562555,5552012,5050552,7825877,1250255,
                       6545231,3852085,7576651,7881200,4581002,1005231};
    int numEnt;
    
    //Input Data/Variables
    cout<<"Please enter the Account Number"<<endl;
    cin>>numEnt;
    cout<<endl;
    
    //Process or map the inputs to the outputs
    bool found=false;
    for(int index=0;index<SIZE&&!found;index++){
        if(accList[index]==numEnt){
            found=true;
        }
    }
    
    //Display/Output all pertinent variables
    if(found==true){
        cout<<"The Account Number "<<numEnt<<" is valid."<<endl;
    }else cout<<"The Account Number "<<numEnt<<" is not valid."<<endl;
    
    //Exit the program
    return 0;
}