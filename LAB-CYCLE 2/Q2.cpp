#include<iostream>
using namespace std;

class complex
{
    private:
    float real; 
    float imag;

    public:
    complex()
    {
        real=0.0;
        imag=0.0;
    }
    complex(float a, float b)
    {
        real=a;
        imag=b;
    }
    
    friend complex operator+(complex, complex);
    friend complex operator*(complex, complex);
    void show(void);
};

complex operator+(complex c1, complex c2)
{
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;
}

complex operator*(complex c1, complex c2)
{
    complex c3;
    c3.real=(c1.real*c2.real)-(c1.imag*c2.imag);
    c3.imag=(c1.real*c2.imag)+(c1.imag*c2.real);
    return c3;
}

void complex::show(void)
{
    if(imag>=0)
    {
        cout<<real<<"+"<<imag<<"i";
    }
    else
    {
        cout<<real<<imag<<"i";
    }
}

int main()
{ 
    float r1, r2, i1, i2;
    char status='y';
    int choice;

    cout<<"COMPLEX NUMBER-1"<<"\n";
    cout<<"Enter real element";
    cin>>r1;
    cout<<"Enter imaginary element";
    cin>>i1;
    complex C1(r1, i1);

    cout<<"COMPLEX NUMBER-2"<<"\n";
    cout<<"Enter real element";
    cin>>r2;
    cout<<"Enter imaginary element";
    cin>>i2;
    complex C2(r2, i2);

    cout<<"First Complex Number is= ";
    C1.show();
    cout<<"\n";

    cout<<"Second Complex Number is= ";
    C2.show();
    cout<<"\n";

    complex C3, C4;

    do
    {
        cout<<"*******COMPLEX NUMBER OPERATIONS*******"<<"\n";
        cout<<"1.Complex Addition"<<"\n";
        cout<<"2.Complex Multiplication"<<"\n";
        cout<<"3.Exit"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                C3=C1+C2;
                cout<<"Sum of the complex number: ";
                C3.show();
                cout<<"\n";
                break;
            case 2:
                C4=C1*C2;
                cout<<"Product of the complex number: ";
                C4.show();
                cout<<"\n";
                break;
            case 3:
                break;
        }
        
        cout<<"Do you want to continue(y/n): ";
        cin>>status;
            

    } while (status=='y' || status=='Y');
    

   cout<<"Thank You!!";
   cout<<"Exiting....";

    
    
    
    
    return 0;
}