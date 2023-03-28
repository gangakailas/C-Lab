#include<iostream>
using namespace std;

class Shapes
{
    protected:
    float area;

    public:
    
    virtual void input()=0; 
    virtual void calc_area()=0;
    virtual void display_area()=0;

};

class Circle:public Shapes
{
    protected:
    float rad;

    public:
    void input()
    {
        cout<<"Enter the radius= ";
        cin>>rad;
    }

    void calc_area()
    {
        area=(3.14)*(rad*rad);
    }

    void display_area()
    {
        cout<<"Area of the Circle= "<<area<<"\n";
    }

};

class Square:public Shapes
{
    protected:
    float side;

    public:
    void input()
    {
        cout<<"Enter the side= ";
        cin>>side;
    }

    void calc_area()
    {
        area=side*side;
    }

    void display_area()
    {
        cout<<"Area of the Square= "<<area<<"\n";
    }

};

class Ellipse:public Shapes
{
    protected:
    float major_axis;
    float minor_axis;

    public:
    void input()
    {
        cout<<"Enter the length of semi-major axis= ";
        cin>>major_axis;

        cout<<"Enter the length of semi-minor axis= ";
        cin>>minor_axis;
    }

    void calc_area()
    {
        area=(3.14)*(major_axis*minor_axis);
    }

    void display_area()
    {
        cout<<"Area of the Ellipse= "<<area<<"\n";
    }

};

class Rectangle:public Shapes
{
    protected:
    float length;
    float breadth;

    public:
    void input()
    {
        cout<<"Enter the length= ";
        cin>>length;

        cout<<"Enter the breadth= ";
        cin>>breadth;
    }

    void calc_area()
    {
        area=length*breadth;
    }

    void display_area()
    {
        cout<<"Area of the Rectangle= "<<area<<"\n";
    }

};

int main()
{
    int choice;
    char status='y';
    Shapes *S;
    cout<<"***** SHAPES AND AREAS ******"<<"\n";

    do
    {
        cout<<"***** AVAILABLE SHAPES ******"<<"\n";
        cout<<"1. Circle"<<"\n";
        cout<<"2. Square"<<"\n";
        cout<<"3. Ellipse"<<"\n";
        cout<<"4. Rectangle"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                S=new Circle;
                S->input();
                S->calc_area();
                S->display_area();
                break;
            case 2:
                S=new Square;
                S->input();
                S->calc_area();
                S->display_area();
                break;
            case 3:
                S=new Ellipse;
                S->input();
                S->calc_area();
                S->display_area();
                break;
            case 4:
                S=new Rectangle;
                S->input();
                S->calc_area();
                S->display_area();
                break;

        }
        cout<<"Do you want to continue(y/n)? ";
        cin>>status;

    } while (status=='y' || status=='Y');

    cout<<"Thank You!!!"<<"\n";
    cout<<"Exiting...."<<"\n";
    
    return 0;
}