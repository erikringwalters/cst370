/*
* Title: adj_matrix.cpp
* Abstract: This program takes a file path and reads the contents of a described graph, then outputs the properties of the graph.
* Author: Erik Ring-Walters
* ID: 7574
* Date: 09/05/2017
*/

using namespace std;
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

int main()
{
   int sum = 0;
   int x;
    int v;//vertices
    int e;//edges
    ifstream inFile;
    string fileName;
    cout << "Enter input file name: ";
    cin >> fileName;
    inFile.open("./t1.txt");

    if (!inFile) {
        cout << "Unable to open file";
        return 0; // terminate with error
    }
    char contents[50];
    int i = 0;
  while(!infile.eof) // To get you all the lines.
        {
	        getline(inFile,contents[0]); // Saves the line in STRING.
	        cout<<contents[i]; // Prints our contents.
	        i++;
        }
       i = 2;
    while(contents[i] > -50000 && contents[i]!=null)
    {
       cout << contents[i];
    }
    
    inFile.close();
    cout << "Vertices = " << contents[0] << "\n Edges = " << contents[1] << endl; 
    return 0;
}

