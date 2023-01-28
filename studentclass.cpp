#include<iostream>
using namespace std;

class student
{
    private:
    char name[20];
    int roll_no;
    int mark[3];

    public:
    void input(void)
    {
        cout<<"Enter Student Name: ";
        cin>>name;

        cout<<"Enter Student Roll No: ";
        cin>>roll_no;  

        cout<<"Enter Mark for subject1: ";
        cin>>mark[0];

        cout<<"Enter Mark for subject2: ";
        cin>>mark[1];

        cout<<"Enter Mark for subject3: ";
        cin>>mark[2];

    }

    char calcGrade(void);
    void display(void)
    {
        cout<<"*********STUDENT DETAILS**********"<<"\n";
        cout<<"NAME: "<<name<<"\n";
        cout<<"ROLL NO: "<<roll_no<<"\n";
        cout<<"FINAL MARKS: "<<calcGrade()<<"\n";

    }


};

char student::calcGrade(void)
{
    int sum, avg;
    char grade;

    for(int i=0; i<3; i++)
    {
        sum=sum+mark[i];
    }

    avg=sum/3;

    if(avg>90 && avg<=100)
    {
        grade='A';
    }
    
    else if(avg>85 && avg<=90)
    {
        grade='B';
    }
    
    else
    {
        grade='C';
    }

    return grade;
}

int main()
{
    int n;
    
    cout<<"Enter the number of students= ";
    cin>>n;
    
    student S[n];
    
    for(int i=0; i<n; i++)
    {
        S[i].input();
        S[i].display();

    }

    return 0;
}