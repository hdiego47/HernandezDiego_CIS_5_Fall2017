/* 
 * File:   main.cpp
 * Author: Diego Hernandez
 * Created on October 19, 2017, 12:15 PM
 * Purpose: Create a web page
 */

//System Libraries
#include <iostream>  //Input/output Stream Library
#include <fstream>   //File stream library
#include <cstring>   //String Library
using namespace std; //Standard Name-space under which system Libraries Reside

//User Libraries

//Global Constants - No variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string fName,usrName,usrBio;
    ofstream out;
    
    //Initialize Variables
    fName="webpage.html";
    out.open(fName.c_str());
    
    //Input Data/Variables
    cout<<"Generate Code for a Bio Webpage"<<endl;
    cout<<"Input Name"<<endl;
    getline(cin,usrName);
    cout<<"Input Bio"<<endl;
    getline(cin,usrBio);
    
    //Generate the Web Page
    cout<<"<html>"<<endl;
    cout<<" <head>"<<endl;
    cout<<"     <title>Gaddis 9thEd Chap5 Prob26 Web Page Generator</title>"<<endl;
    cout<<" <head>"<<endl;
    cout<<" <body>"<<endl;
    cout<<"     <center>"<<endl;
    cout<<"         <h1>"<<usrName<<"</h1>"<<endl;
    cout<<"         <hr />"<<endl;
    cout<<"             "<<usrBio<<endl;
    cout<<"         <hr />"<<endl;
    cout<<"     <center>"<<endl;
    cout<<" </body>"<<endl;
    cout<<"</html>"<<endl;
    
    out<<"<html>"<<endl;
    out<<" <head>"<<endl;
    out<<"     <title>Gaddis 9thEd Chap5 Prob26 Web Page Generator</title>"<<endl;
    out<<" <head>"<<endl;
    out<<" <body>"<<endl;
    out<<"     <center>"<<endl;
    out<<"         <h1>"<<usrName<<"</h1>"<<endl;
    out<<"         <hr />"<<endl;
    out<<"             "<<usrBio<<endl;
    out<<"         <hr />"<<endl;
    out<<"     <center>"<<endl;
    out<<" </body>"<<endl;
    out<<"</html>"<<endl;
    
    //Close file
    out.close();
    
    //Exit the program
    return 0;
}