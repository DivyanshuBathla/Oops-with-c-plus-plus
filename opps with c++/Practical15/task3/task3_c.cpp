#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
     fstream f;
     f.open("write.txt",ios::app);
     string s="ssss";
    getline(cin,s);
     f<<s;
    
    f.close();
}
