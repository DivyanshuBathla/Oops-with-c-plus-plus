
#include <fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string data; 
    ofstream myfile_in;                                       
    myfile_in.open("example.txt");
    myfile_in<<"Hello i am inside  example.txt";     //Sending inside file using ifstream
    myfile_in.close();
    
    ifstream myfile_out;
    myfile_out.open("example.txt");                 
    getline(myfile_out,data);                    //extracting from file using ofstream
    cout<<data<<endl;
    myfile_out.close();

    return 0;
}
