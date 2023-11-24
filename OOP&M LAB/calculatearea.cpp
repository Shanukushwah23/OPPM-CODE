//WAP to calculate the area and volume of a room using object and classes
#include<iostream>
using namespace std;
class Room
{
    public:
    int length;
    int breadth;
    int height;
    int calculatearea(){


    return length*breadth;
}
double calculatevolume()
{
    return length*breadth*height;
}
};
  int main()
  {
Room room1;

room1.length=10.9;
room1.breadth=42.0;
room1.height=20.3;
cout<<"Area of Room="<<room1.calculatearea()<<endl;
cout<<"volumen of Room="<<room1.calculatearea()<<endl;
return 0;
}




