#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s="abc";
   int count=0;
   cout<<"Enter the string=";
   getline(cin,s);
   
cout<<"Reversing using reverse function=";
 for(string::reverse_iterator i=s.rbegin();i<s.rend();i++)
 {
       cout<<*i;
 }
 cout<<endl;
   reverse(s.begin(),s.end());
   cout<<"Reversing using reverse function="<<s<<endl;

}
 
   

