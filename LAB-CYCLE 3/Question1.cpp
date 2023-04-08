#include<iostream>
using namespace std;

class SHAPE
{
    protected:
    float pm;

    public:
    virtual void input()=0;
    virtual void calc_pm()=0;
    virtual void output()=0;

};

class SQUARE:public SHAPE
{
    protected:
    float side;

    public:
    void input()
    {
        cout<<"Enter side for Square= ";
        cin>>side;
    }
    void calc_pm()
    {
        pm=4*(side);
    }
    void output()
    {
        cout<<"Perimeter of the Square= "<<pm<<"\n";
    }
    
};

class RECTANGLE:public SHAPE
{
    protected:
    float length;
    float breadth;

    public:
    void input()
    {
        cout<<"Enter length for Rectangle= ";
        cin>>length;
        
        cout<<"Enter breadth for Rectangle";
        cin>>breadth;
    }
    void calc_pm()
    {
        pm=length*breadth;
    }
    void output()
    {
        cout<<"Perimeter of the Rectangle= "<<pm<<"\n";
    }
    
};

class CIRCLE:public SHAPE
{
    protected:
    float radius;

    public:
    void input()
    {
        cout<<"Enter radius for Circle= ";
        cin>>radius;
    }
    void calc_pm()
    {
        pm=2*(3.14)*radius;
    }
    void output()
    {
        cout<<"Perimeter of the Circle= "<<pm<<"\n";
    }
    
};

class TRIANGLE:public SHAPE
{
    protected:
    float a;
    float b;
    float c;

    public:
    void input()
    {
        cout<<"Enter first side for Triangle= ";
        cin>>a;

        cout<<"Enter second side for Triangle= ";
        cin>>b;

        cout<<"Enter third side for Triangle= ";
        cin>>c;
    }
    void calc_pm()
    {
        pm=a+b+c;
    }
    void output()
    {
        cout<<"Perimeter of the Triangle= "<<pm<<"\n";
    }

};

int main()
{
    SHAPE *S;
    char status='y';
    int choice;
    cout<<"********* SHAPES & PERIMETERS ***********"<<"\n";

    do
    {
        cout<<"********** AVAILABLE SHAPES **************"<<"\n";
        cout<<"1.SQUARE"<<"\n";
        cout<<"2.RECTANGLE"<<"\n";
        cout<<"3.CIRCLE"<<"\n";
        cout<<"4.TRIANGLE"<<"\n";
    
        cout<<"Enter your choice:";
        cin>>choice;
        
        switch (choice)
        {
            case 1:
                S=new SQUARE;
                S->input();
                S->calc_pm();
                S->output();
                break;
            case 2:
                S=new RECTANGLE;
                S->input();
                S->calc_pm();
                S->output();
                break;
            case 3:
                S=new CIRCLE;
                S->input();
                S->calc_pm();
                S->output();
                break;
            case 4:
                S=new TRIANGLE;
                S->input();
                S->calc_pm();
                S->output();
                break;
            default:
                break;
        }

        cout<<"Do you want to continue?(y/n)";
        cin>>status;

    } while (status=='y' || status=='Y');
    
    cout<<"THANK YOU!"<<"\n";
    cout<<"Exiting......"<<"\n";

    return 0;
}