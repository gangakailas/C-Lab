#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;

    public:
    void get_rollno(int);
    void put_rollno(void);

};

void student::get_rollno(int x)
{
    roll_no=x;
}

void student::put_rollno(void)
{
    cout<<"Roll Number= "<<roll_no<<"\n";
}

class test:virtual public student
{
    protected:
    float sub1;
    float sub2;

    public:
    void get_marks(float, float);
    void put_marks(void);

};

void test::get_marks(float a, float b)
{
    sub1=a;
    sub2=b;
}

void test::put_marks(void)
{
    cout<<"Marks for Subject 1= "<<sub1<<"\n";
    cout<<"Marks for Subject 2= "<<sub2<<"\n";
}

class sports:virtual public student
{
    protected:
    float score;

    public:
    void get_score(float);
    void put_score(void);

};

void sports::get_score(float s)
{
    score=s;
}

void sports::put_score(void)
{
    cout<<"Score in Sports= "<<score<<"\n";
}

class result:public test, public sports
{
    protected:
    float total;

    public:
    void put_total(void);
}; 

void result::put_total(void)
{
    total=sub1+sub2+score;
    cout<<"___FINAL RESULTS___"<<"\n";
    put_rollno();
    put_marks();
    put_score();
    cout<<"The Total Marks= "<<total<<"\n";
}

int main()
{
    int rn;
    float s1, s2, s;
    result r;
    cout<<"***** Welcome to Student Score Entering System *******"<<"\n";
    
    cout<<"Enter Student Roll-no= ";
    cin>>rn;

    cout<<"Enter Marks for Subject 1= ";
    cin>>s1;

    cout<<"Enter Marks for Subject 2= ";
    cin>>s2;

    cout<<"Enter Sports Score= ";
    cin>>s;

    r.get_rollno(rn);
    r.get_marks(s1, s2);
    r.get_score(s);
    r.put_total();

    return 0;
}
