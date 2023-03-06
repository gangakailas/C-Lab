#include<iostream>
using namespace std;

class COMPLEX
{
    private:
    float real;
    float imag;

    public:
    COMPLEX()
    {
        real=0;
        imag=0;
    }
    COMPLEX(float x)
    {
        real=x;
        imag=x;
    }
    COMPLEX(float p, float q)
    {
        real=p;
        imag=q;
    }

    friend COMPLEX add_complex(COMPLEX, COMPLEX);

    void display(void);
};

COMPLEX add_complex(COMPLEX C1, COMPLEX C2)
{
    COMPLEX C3;
    C3.real=C1.real+C2.real;
    C3.imag=C1.imag+C2.imag;
    return C3;

}

void COMPLEX::display(void)
{
    cout<<"Complex Number= ";
    cout<<real<<"+"<<imag<<"i"<<"\n";
}

int main()
{
    COMPLEX c1(12.5, 5.2);
    COMPLEX c2(4.1);
    COMPLEX c3;

    c1.display();
    c2.display();

    c3=add_complex(c1, c2);

    cout<<"Sum of complex numbers: "<<"\n";
    c3.display();


    return 0;
}