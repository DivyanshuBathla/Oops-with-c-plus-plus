#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
     fstream f;
     f.open("write.txt",ios::out);
     string s="ssss";
    getline(cin,s);
     f<<s;
    
    f.close();
}
