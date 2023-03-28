#include<iostream>
using namespace std;

class complex
{
    private:
    float real;
    float imag;

    public:
    complex(void)
    {
        real=0;
        imag=0;
    }
    complex(float x)
    {
        real=x;
        imag=x;
    }
    complex(float x, float y)
    {
        real=x;
        imag=y;
    }
    void add_complex(complex, complex);
    void show(void);
  
};

void complex::add_complex(complex c1, complex c2)
{
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
}

void complex::show(void)
{
    cout<<"The complex number is: ";
    cout<<real<<"+"<<imag<<"i"<<"\n";
}

int main()
{
    complex C1;
    complex C2(12.3,7.7);
    complex C3(1.5, 8.4);

    C1.show();
    C2.show();
    C3.show();

    C1.add_complex(C2, C3);

    cout<<"**** COMPLEX ADDITION *****"<<"\n";
    C1.show();

}