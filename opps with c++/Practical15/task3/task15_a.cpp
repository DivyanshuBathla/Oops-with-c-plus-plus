#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
     fstream f;
     f.open("write.txt",ios::in);
     char c;
     while(!(f.eof()))
     { 
     f>>noskipws>>c;
     
     cout<<noskipws<<c;
     }
    f.close();
}
