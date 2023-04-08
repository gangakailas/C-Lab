#include<iostream>
using namespace std;

float division(float x, float y)
{
    if(y!=0)
    {
        return (x/y);
    }
    else
    {
        throw "Division by zero!!";
    }
}

int main()
{
    float a, b, c;
    cout<<"Enter first decimal value= ";
    cin>>a;

    cout<<"Enter second decimal value= ";
    cin>>b;

    try
    {
        c=division(a,b);
        cout<<c;
    }
    catch(const char *msg)
    {
        cout<<"Exception Caught: "<<msg<<"\n";
    }
    
    return 0;
}