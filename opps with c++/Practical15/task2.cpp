
#include <fstream>
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    //task 1
    cout<<"Ios functions"<<endl<<endl;
   
    int n=705;
     cout<<"In decimal="<<dec<<n<<endl;                       //using dec of ios
      cout<<"In hexadecimal="<<hex<<n<<endl;                  //using hex of ios
      char a,b,c;
      istringstream s("  123");
        s>>skipws>>a>>b>>c;
     cout<<"Printing a b c using spikws:"<<a<<b<<c<<endl;       
      istringstream p("  123");
       p>>noskipws>>a>>b>>c;
      cout<<"Printing a b c using noskipws:"<<a<<b<<c<<endl<<endl;
      //task 2
       cout<<"Istream functions"<<endl<<endl;
       istringstream x("  Hello world");
       string line;
       getline(x>>ws,line);
       cout<<"Using ws functions="<<line<<endl<<endl;
       
       cout<<"Using ostream functions endl"<<endl;
       cout<<"Hello"<<endl<<"World";                                //world will be printed on next line
    
    //task 3
      double f=3.1547895;
    cout<<"Using endl:"<<"Abc  "<<endl;
    cout<<"Using ends:"<<"Abc  "<<ends;                       //only clear buffedidmt go to next line
    cout<<"Using flush:"<<"Abc  "<<flush<<endl;
    //task 4
    cout<<"Using setprecision(5)="<<setprecision(5)<<f<<endl;
    cout<<"Using setw(8)="<<setw(8)<<12345678945<<endl;
    return 0;
}
