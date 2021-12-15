#include<iostream>
class mammals{
    public:
    void mammals_display()
    {
        std::cout<<"\nI am a mammal";
    }
};
class marine_animals{
    public:
    void marine_animals_display()
    {
        std::cout<<"\nI am marine_animals";
    }
};
class bluewhale:public mammals,public marine_animals{
    public:
    void bluewhale_display()
    {
        std::cout<<"\nI am a both marineanimal and mammal ";
    }
};

int main()
{
    mammals mammal_obj;
    marine_animals marine_animals_obj;
    bluewhale bluewhale_obj;
     mammal_obj.mammals_display();
     marine_animals_obj.marine_animals_display();
     bluewhale_obj.bluewhale_display();
     std::cout<<"Using bluewhale obj for calling its parent class methods::";
     bluewhale_obj.mammals_display();
     bluewhale_obj.marine_animals_display();
}
