#include<iostream>
using namespace std;

class TIME
{
    private:
    int hrs;
    int mins;
    int secs;

    public:
    void input(void);
    void add_time(TIME, TIME);
    void display(void)
    {
        cout<<hrs<<" hours "<<mins<<" minutes "<<secs<<" seconds "<<"\n";
    }
    
};

void TIME::input(void)
{
    cout<<"Enter hours: ";
    cin>>hrs;

    cout<<"Enter minutes: ";
    cin>>mins;

    cout<<"Enter seconds: ";
    cin>>secs;

}

void TIME::add_time(TIME t1, TIME t2)
{
    secs=t1.secs+t2.secs;
    mins=secs/60;
    secs=secs%60;
    mins=mins+t1.mins+t2.mins;
    hrs=mins/60;
    mins=mins%60;
    hrs=hrs+t1.hrs+t2.hrs;

}

int main()
{
    TIME t1, t2, t3;
    t1.input();
    t1.display();

    t2.input();
    t2.display();

    t3.add_time(t1, t2);
    t3.display();
}
