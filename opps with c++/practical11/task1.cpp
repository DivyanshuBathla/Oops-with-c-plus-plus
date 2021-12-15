#include<iostream>
class parent{
public:
void parent_display()
{
    std::cout<<"\nInside parent display";
}
};
class child:public parent{
public:
void child_display()
{
    std::cout<<"\nInside child display calling parent display";
    parent_display(); //calling parent class method without creating its object
}
};
int main()
{
    child obj;
    obj.child_display();
    std::cout<<"\n";
    obj.parent_display();
}
