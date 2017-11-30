/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on November 30, 2017, 12:10 PM
 * Purpose: To find if a lottery ticket is a winner or not using a binary search
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
    int lukyNum[SIZE]={13579,26791,26792,33445,55555,
                       62483,77777,79422,85647,93121};
    int winNum,middle;
    int first=0;
    int last=SIZE-1;
    
    //Input Data/Variables
    cout<<"Please enter this week's winning number."<<endl;
    cin>>winNum;
    cout<<endl;
    
    //Sort the Array
    for(int i=0;i<SIZE-1;i++){
        for(int j=i+1;j<SIZE;j++){
            if(lukyNum[i]>lukyNum[j]){
                int temp=lukyNum[i];
                lukyNum[i]=lukyNum[j];
                lukyNum[j]=temp;
            }
        }
    }
    
    //Process or map the inputs to the outputs
    bool found=false;
    for(int index=0;index<SIZE&&!found;index++){
        
    }
    
    //Display/Output all pertinent variables
    if(found==true){
        cout<<"CONGRATULATIONS YOU'RE A WINNER!!!"<<endl;
    }else cout<<"Too bad... You lose."<<endl;
    
    //Exit the program
    return 0;
}