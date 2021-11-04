#include<iostream>
using namespace std;
class cal
{
    public:
    float area(float l,float b)
    {
        return(l*b);
    }
     float area(float l)
    {
        return(l*l);
    }
  

};
int main()
{
    cout<<"Main Menu\n1.for square\n2.Rectangle";
    int ch;
    cin>>ch;
    cal c;
    if(ch==1)
    {
         float s;
         cout<<"\nEnter the side";
         cin>>s;
          cout<<"\nThe area is="<<c.area(s);

    }
    else
    {
        float l,b;
        cout<<"\nEnter the length and breath=";
        cin>>l>>b;
        cout<<"\nThe area is="<<c.area(l,b);
    }
}