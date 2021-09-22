// Homework 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include<vector>


using namespace std;

class student {

    string fName;
    string lName;
    float grade;
public:
    string getfName()
    {
        return fName;
   }
    string getlName()
    {
        return lName;
    }
    float getgrade()
    {
        return grade;
    }
   
};


int main()
{
    vector<student>myStudents;
    for (int i = 0; i < myStudents.size(); i++) 
    {

      

        myStudents.push_back(student());
    }
    ifstream myfile("example.txt");

    string fName;
    

    if (myfile.is_open())
    {
        while (getline(myfile, fName))
            cout << fName << endl;

    }

    else
        cout << "unable to open file\n";
    
    return(0);
}
