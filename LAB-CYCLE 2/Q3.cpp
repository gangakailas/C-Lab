#include<iostream>
using namespace std;

class vectors
{
    private:
    float x;
    float y;
    float z;

    public:
    friend float operator*(vectors, vectors);
    friend istream& operator>>(istream &, vectors&);
    friend ostream& operator<<(ostream &, vectors);
};

istream& operator>>(istream &inp, vectors &v1)
{
    cout<<"Enter x-coordinate= ";
    inp>>v1.x;
    cout<<"Enter y-coordinate= ";
    inp>>v1.y;
    cout<<"Enter z-coordinate= ";
    inp>>v1.z;

    return inp;
}

ostream& operator<<(ostream &out, vectors v1)
{
    if(v1.y>=0 && v1.z>=0)
    {
        out<<v1.x<<"i+"<<v1.y<<"j+"<<v1.z<<"\n";
    }
    else if(v1.y<0 && v1.z<0)
    {
        out<<v1.x<<"i"<<v1.y<<"j"<<v1.z<<"\n";
    }
    else if(v1.y<0)
    {
        out<<v1.x<<"i"<<v1.y<<"j+"<<v1.z<<"\n";
    }
    else if(v1.z<0)
    {
        out<<v1.x<<"i+"<<v1.y<<"j"<<v1.z<<"\n";
    }

    return out;
}

float operator*(vectors v1, vectors v2)
{
    float prod;
    prod=((v1.x*v2.x)+(v1.y*v2.y)+(v1.z*v2.z));
    return prod;
}

int main()
{
    vectors v1, v2;
    char choice;
    
    cout<<"******OVERLOADED FUNCTIONS FOR VECTOR OBJECTS********"<<"\n";
    cout<<"CREATING VECTOR-1"<<"\n";
    cin>>v1;
    
    cout<<"CREATING VECTOR-2"<<"\n";
    cin>>v2;
    
    cout<<"Vector 1: "<<v1<<"\n";
    cout<<"Vector 2: "<<v2<<"\n";

    cout<<"Provisions available for finding dot product: "<<"\n";
    cout<<"Enter 'y' for proceeding, else enter 'n': ";
    cin>>choice;

    if(choice=='y' || choice=='Y')
    {
        float dotpro;
        dotpro=v1*v2;
        cout<<"Dot Product: "<<dotpro<<"\n";
    } 
    else
    {
        cout<<"Exiting....."<<"\n";
    }
    
    return 0;
}