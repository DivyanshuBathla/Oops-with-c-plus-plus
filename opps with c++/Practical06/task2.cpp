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
   string temp;

 for(string::reverse_iterator i=s.rbegin();i!=s.rend();i++)
 {
       temp.push_back(*i);
 }
 
   
   /*for(int i=0;i<s.length();i++)
   {
      if(s[i]!=temp[i])
      {
          count++;
          break;
      }
   }
  */
   count=temp.compare(s);
   if(count==0)
   cout<<"Entered string is palindrome"<<endl;
   else
   cout<<"Entered string is not palindrome"<<endl;
         
}
