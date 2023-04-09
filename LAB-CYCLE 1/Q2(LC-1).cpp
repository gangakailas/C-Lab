#include<iostream>
#include<cmath>
using namespace std;
const float pi=3.14;

void area(int x);
void area(int x, int y);
void area(int x, int y, int z);
void area(int x, float y);
void area(float x, float y);

int main()
{
    int choice;
    int side;
    int length, breadth;
    int a, b, c;
    int rad;
    float base, height;
    
    cout<<"*******AVAILABLE SHAPES********"<<"\n";
    cout<<"1. Square"<<"\n";
    cout<<"2. Rectangle"<<"\n";
    cout<<"3. Triangle"<<"\n";
    cout<<"4. Circle"<<"\n";
    cout<<"5. Parallelogram"<<"\n";
    
    cout<<"Enter your choice= ";
    cin>>choice;

    if(choice==1)
    {
        cout<<"Enter side of the square= ";
        cin>>side;
        area(side);
    }

    else if(choice==2)
    {
        cout<<"Enter length of the rectangle= ";
        cin>>length;
        cout<<"Enter breadth of the rectangle= ";
        cin>>breadth;
        area(length,breadth);
    }

    else if(choice==3)
    {
        cout<<"Enter side 1 of the triangle= ";
        cin>>a;
        cout<<"Enter side 2 of the triangle= ";
        cin>>b;
        cout<<"Enter side 3 of the triangle= ";
        cin>>c;
        area(a, b, c);
    }

    else if(choice==4)
    {
        cout<<"Enter radius of the circle= ";
        cin>>rad;
        area(rad, pi);
    }

    else if(choice==5)
    {
        cout<<"Enter the base of the parallelogram= ";
        cin>>base;
        cout<<"Enter the height of the parallelogram= ";
        cin>>height;
        area(base, height);
    }

}

void area(int x)
{
    int ar;
    ar=x*x;
    cout<<"Area of the Square= "<<ar<<" sq units"<<"\n";
}

void area(int x, int y)
{
    int ar;
    ar=x*y;
    cout<<"Area of the Rectangle= "<<ar<<" sq units"<<"\n";
}

void area(int x, int y, int z)
{
    float s, ar;
    s=(x+y+z)/2;
    ar=sqrt(s*(s-x)*(s-y)*(s-z));
    cout<<"Area of the Triangle= "<<ar<<" sq units"<<"\n";
}

void area(int x, float y)
{
    float ar;
    ar=y*x*x;
    cout<<"Area of the Circle= "<<ar<<" sq units"<<"\n";
}

void area(float x, float y)
{
    float ar;
    ar=x*y;
    cout<<"Area of the Parallelogram= "<<ar<<" sq units"<<"\n";
}

