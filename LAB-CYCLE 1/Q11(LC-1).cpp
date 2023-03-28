#include<iostream>
using namespace std;

class class_2;
class class_1
{
    private:
    int roll_no;
    float mark;

    public:
    class_1()
    {
        roll_no=0;
        mark=0;
    }
    class_1(int m, float n)
    {
        roll_no=m;
        mark=n;
    }
    void display(void)
    {
        cout<<"CLASS 1: roll_no= "<<roll_no<<"\n";
        cout<<"CLASS 1: mark= "<<mark<<"\n";

    }

    friend void interchange(class_1 &, class_2 &);

};

class class_2
{
    private:
    int roll_no;
    float mark;

    public:
    class_2()
    {
        roll_no=0;
        mark=0;
    }
    class_2(int m, float n)
    {
        roll_no=m;
        mark=n;
    }
    void display(void)
    {
        cout<<"CLASS 2: roll_no= "<<roll_no<<"\n";
        cout<<"CLASS 2: mark= "<<mark<<"\n";

    }

    friend void interchange(class_1 &, class_2 &);

};

void interchange(class_1 &C1, class_2 &C2)
{
    int x=C1.roll_no;
    float y=C1.mark;
    C1.roll_no=C2.roll_no;
    C1.mark=C2.mark;
    C2.roll_no=x;
    C2.mark=y;

}

int main()
{
    class_1 C1(19, 98.5);
    class_2 C2(27, 85.9);
    cout<<"Values before exchanging:"<<"\n";
    C1.display();
    C2.display();
  
    interchange(C1, C2);
    cout<<"Values after exchanging:"<<"\n";
    C1.display();
    C2.display();


    
    return 0;
}