/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on October 31, 2017, 12:15 PM
 * Purpose: To find the lowest score and drop it then find the average
 */

//System Libraries
#include <iostream>  //Input/output Stream Library
using namespace std; //Standard Name-space under which system Libraries Reside

//User Libraries

//Global Constants - No variables only Math/Science/Conversion constants

//Function Prototypes
float getScore();
float fndLowst(float &);
float average();

//Execution Begins Here
int main(int argc, char** argv) {
    //Display/Output all pertinent variables
    cout<<"The Average 4 highest scores = "<<average()<<endl;
    
    //Exit the program
    return 0;
}

float average(){
    float sum;
    float lowest=fndLowst(sum);
    return (sum-lowest)/4;
}

float fndLowst(float &sum){
    sum=0;
    float lowest=getScore();
    sum+=lowest;
    for(int i=1;i<=4;i++){
        float add=getScore();
        if(add<lowest)lowest=add;
        sum+=add;
    }
    return lowest;
}

float getScore(){
    static int cnt=1;
    float score;
    cout<<"Type in the Test Score "<<cnt++<<endl;
    cin>>score;
    return score;
}