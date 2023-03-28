#include<iostream>
using namespace std;

class alpha
{
    private:
    int x;

    public:
    alpha(int i)
    {
        x=i;
        cout<<"Alpha has been initialized"<<"\n";
    }
    void show_alpha(void)
    {
        cout<<"x="<<x<<"\n";
    }
};

class beta
{
    private:
    int y;

    public:
    beta(int j)
    {
        y=j;
        cout<<"Beta has been initialized"<<"\n";
    }
    void show_beta(void)
    {
        cout<<"y="<<y<<"\n";
    }
};

class gamma:public beta, public alpha
{
    private:
    int p;
    int q;

    public:
    gamma(int a, int b, int c, int d):alpha(a), beta(b)
    {
        p=c;
        q=d;
        cout<<"Gamma has been initialized"<<"\n";
    }
    void show_gamma(void)
    {
        cout<<"p="<<p<<"\n";
        cout<<"q="<<q<<"\n";
    }

};

int main()
{
    gamma g(3,5,8,2);
    g.show_alpha();
    g.show_beta();
    g.show_gamma();
    
    return 0;
}