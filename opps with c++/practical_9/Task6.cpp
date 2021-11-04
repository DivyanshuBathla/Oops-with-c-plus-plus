#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    cout<<"Main Menu\na. Come to next line\nb. set minimum field width\nc. fill string with (*) after setw(15) function";
    char ch;
    int num=152;
    cin>>ch;
    switch (ch)
    {
    case 'a':cout<<"current line"<<endl<<"Next line  "<<num<<endl;
        break;
     case 'b':cout<<setw(15)<<num;
        break;
     case 'c':cout<<setfill('*')<<setw(15)<<num;
        break;   
    
    default:
        break;
    }

}