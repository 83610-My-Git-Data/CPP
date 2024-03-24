#include <iostream>
using namespace std;

class Cylinder
{
private:
    int radius;
    int height;
    static const double PI;

public:
    Cylinder(){
        radius=1;
        height=1;
    }


    Cylinder(int radius, int height)
    {
        this->radius = radius;
        this->height=height;
    }

    static double getPI()
    {
        return PI;
    }

    void calculateVolume()
    {
        cout<<"Enter a radius:- ";
        cin>>radius;
        cout<<"Enter a height:- ";
        cin>>height;

        cout << "Volume of cylinder = " << PI * radius * radius *height << endl;
    }
};

const double Cylinder::PI = 3.14;



int main()
{
    Cylinder c1;
    c1.calculateVolume();

    

   
    return 0;
}
