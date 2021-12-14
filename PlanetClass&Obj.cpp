/*Create a class that captures planets.
Each planet has a name, a distance from the sun, and its gravity relative to Earth’s gravity.
For distance and gravity, use the type double which captures real numbers.
Make objects for Earth and your favorite non-earth planet.*/


#include<iostream>
#include<string.h>
using namespace std;
class Planet
{
private:
    char Name[15];
    double Distance;
    double Gravity;
public:
    void setPlanet(char *name,double distance,double gravity)
    {
        strcpy(Name,name);
        Distance = distance;
        Gravity = gravity;
    }
    char *getname()
    {
        return Name;
    }
    double getdistance()
    {
        return Distance;
    }
    double getgravity()
    {
        return Gravity;
    }


};
class Earth:public Planet
{
public:

    void display()
    {
        cout<<getname()<<getdistance()<<getgravity()<<endl;
    }

};
class Jupiter:public Planet
{
public:

    void displaynew()
    {
        cout<<getname()<<getdistance()<<getgravity()<<endl;
    }


};

int main()
{
    Earth ob1;
    ob1.setPlanet("Earth",4000000,9.8);
    Jupiter ob2;
    ob2.setPlanet("Jupiter",6000000,9.6);
    ob1.display();
    ob2.displaynew();
    return(0);

}
