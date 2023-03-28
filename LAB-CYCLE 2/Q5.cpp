#include<iostream>
using namespace std;

class female
{
    protected:
    int f_no;

    public:
    female(int x)
    {
        f_no=x;
    }
    void put_fno(void)
    {
        cout<<"No. of female= "<<f_no<<"\n";
    }
};

class male
{
    protected:
    int m_no;

    public:
    male(int y)
    {
        m_no=y;
    }
    void put_mno(void)
    {
        cout<<"No. of males= "<<m_no<<"\n";
    }
};

class people:public female, public male
{
    protected:
    int p_no;

    public:
    people(int p, int q):female(p), male(q)
    {
        p_no=f_no+m_no;
    }
    void show(void)
    {
        cout<<"Total no. of people= "<<p_no<<"\n";
    }

};

class food:public people
{
    protected:
    int packages;

    public:
    food(int a, int b, int c):people(a, b)
    {
        packages=c;
    }
    void show_total(void)
    {
        put_fno();
        put_mno();
        show();
        cout<<"The total no. of packages needed= "<<p_no*packages<<"\n";
    }
 
};

int main()
{
    int f, m, p;
    cout<<"******* CATERING ********"<<"\n";

    cout<<"Enter the number of females= ";
    cin>>f;

    cout<<"Enter the number of males= ";
    cin>>m;

    cout<<"Enter the number of packages required for each person= ";
    cin>>p;

    food f1(f, m, p);
    f1.show_total();
     
    return 0;
}


