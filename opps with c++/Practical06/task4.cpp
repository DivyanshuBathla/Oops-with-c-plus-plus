#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s="abc";
   int count=0;
   cout<<"Enter the first string=";
   getline(cin,s);
   string temp;
   cout<<"Enter the second string=";
   getline(cin,temp);
 

 
 
   if(s.length()!=temp.length())
      count++;
     else
  {
   for(int i=0;i<s.length();i++)
   {
      if(s[i]!=temp[i])
      {
          count++;
          break;
      }
   }
  }
  if(count==0)
  cout<<"both string are equal"<<endl;
  else
  cout<<"both string are not equal"<<endl;
 
}
