#include<iostream>
#include<cmath>
using namespace std;

class vectors
{
    private:
    float x;
    float y;
    float z;
    float mag;

    public:
    vectors()
    {
        x=0.0;
        y=0.0;
        z=0.0;
        mag=0.0;
    }
    vectors(float i, float j, float k)
    {
        x=i;
        y=j;
        z=k;
        magnitude();
    }
    bool operator==(vectors);
    bool operator!=(vectors);
    bool operator<(vectors);
    bool operator<=(vectors);
    bool operator>(vectors);
    bool operator>=(vectors);

    void magnitude(void);
    void show(void);

};

void vectors::magnitude(void)
{
    mag=sqrt((x*x)+(y*y)+(z*z));
}

bool vectors::operator==(vectors v)
{
    if(mag==v.mag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vectors::operator!=(vectors v)
{
    if(mag!=v.mag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vectors::operator<(vectors v)
{
    if(mag<v.mag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vectors::operator<=(vectors v)
{
    if(mag<=v.mag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vectors::operator>(vectors v)
{
    if(mag>v.mag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vectors::operator>=(vectors v)
{
    if(mag>=v.mag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void vectors::show(void)
{
    if(y>=0 && z>=0)
    {
        cout<<x<<"i+"<<y<<"j+"<<z<<"k";
    }
    else if(y<0 && z<0)
    {
        cout<<x<<"i"<<y<<"j"<<z<<"k";
    }
    else if(y<0)
    {
        cout<<x<<"i"<<y<<"j+"<<z<<"k";
    }
    else if(z<0)
    {
        cout<<x<<"i+"<<y<<"j"<<z<<"k";
    }
}

int main()
{
    float x1,y1,z1,x2,y2,z2;
    int choice;
    char status='y';
    cout<<"********VECTOR CREATION***********"<<"\n";
    
    cout<<"FIRST VECTOR"<<"\n";
    cout<<"Enter x-component of your vector= ";
    cin>>x1;
    cout<<"Enter y-component of your vector= ";
    cin>>y1;
    cout<<"Enter z-component of your vector= ";
    cin>>z1;
    vectors v1(x1,y1,z1);
    v1.show();
    cout<<"\n";

    cout<<"SECOND VECTOR"<<"\n";
    cout<<"Enter x-component of your vector= ";
    cin>>x2;
    cout<<"Enter y-component of your vector= ";
    cin>>y2;
    cout<<"Enter z-component of your vector= ";
    cin>>z2;
    vectors v2(x2,y2,z2);
    v2.show();
    cout<<"\n";

    while(status=='y' || status=='Y')
    {
        cout<<"**********VECTOR OPERATIONS************"<<"\n";
        cout<<"1.Check Equality"<<"\n";
        cout<<"2.Check Inequality"<<"\n";
        cout<<"3.Check Whether Lesser"<<"\n";
        cout<<"4.Check Whether Lesser Than or Equal To "<<"\n";
        cout<<"5.Check Whether Greater"<<"\n";
        cout<<"6.Check Whether Greater Than or Equal To "<<"\n";
        cout<<"Enter your choice= ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                if(v1==v2)
                {
                    v1.show();
                    cout<<" is equal to ";
                    v2.show();
                    cout<<"\n";
                }
                else
                {
                    v1.show();
                    cout<<" is not equal to ";
                    v2.show();
                    cout<<"\n";
                }
                break;

            case 2:
                if(v1!=v2)
                {
                    v1.show();
                    cout<<" is inequal to ";
                    v2.show();
                    cout<<"\n";
                }
                else
                {
                    v1.show();
                    cout<<" is not inequal to ";
                    v2.show();
                    cout<<"\n";
                }
                break;
 
            case 3:
                if(v1<v2)
                {
                    v1.show();
                    cout<<" is less than ";
                    v2.show();
                    cout<<"\n";
                }
                else
                {
                    v1.show();
                    cout<<" is not less than ";
                    v2.show();
                    cout<<"\n";
                }
                break;
            
            case 4:
                if(v1<=v2)
                {
                    v1.show();
                    cout<<" is less than or equal to ";
                    v2.show();
                    cout<<"\n";
                }
                else
                {
                    v1.show();
                    cout<<" is not less than or equal to ";
                    v2.show();
                    cout<<"\n";
                }
                break;

            case 5:
                if(v1>v2)
                {
                    v1.show();
                    cout<<" is greater than ";
                    v2.show();
                    cout<<"\n";
                }
                else
                {
                    v1.show();
                    cout<<" is not greater than ";
                    v2.show();
                    cout<<"\n";
                }
                break;
        
            case 6:
                if(v1>=v2)
                {
                    v1.show();
                    cout<<" is greater than or equal to ";
                    v2.show();
                    cout<<"\n";
                }
                else
                {
                    v1.show();
                    cout<<" is not greater than or equal to ";
                    v2.show();
                    cout<<"\n";
               }
               break;
        }

        cout<<"Do you want to continue(y/n)?";
        cin>>status;
    }

    cout<<"Thank You!!"<<"\n";
    cout<<"Exiting...."<<"\n";

    
    return 0;


}