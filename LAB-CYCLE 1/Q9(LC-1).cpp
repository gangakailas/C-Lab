#include<iostream>
using namespace std;

class home
{
    private:
    static int count;
    int x;

    public:
    home()
    {
        x=0;
        count++;
    }
    home(int m)
    {
        x=m;
        count++;
    }
    static void showcount(void);
    void showx(void);

};

void home::showcount(void)
{
    cout<<"count= "<<count<<"\n";
}

void home::showx(void)
{
    cout<<"x="<<x<<"\n";
}

int home::count=0;

int main()
{
    home h1;
    h1.showx();
    home::showcount();

    home h2(5);
    h2.showx();
    home::showcount();

    home h3;
    h3.showx();
    home::showcount();


}