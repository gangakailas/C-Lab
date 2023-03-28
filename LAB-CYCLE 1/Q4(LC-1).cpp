#include<iostream>
#include<cstring>
using namespace std;

class strings
{
    private:
    char *strs;
    int length;

    public:
    strings()
    {
        length=0;
        strs=new char[length+1];
    }

    strings(const char *s)
    {
        length=strlen(s);
        strs=new char[length+1];
        strcpy(strs, s);
    }

    void display(void)
    {
        cout<<strs;
    }

    int getlength(void)
    {
        return length;
    }

    void concatenate(strings, strings);

};

void strings::concatenate(strings a, strings b)
{
    length=a.length+b.length;
    delete strs;

    strs=new char[length+1];
    strcpy(strs, a.strs);
    strcat(strs, b.strs);
}



int main()
{
    int str1len, str2len;
    strings S1;

    strings n1("Greeshma");
    cout<<"The first string is ";
    n1.display();
    cout<<"\n";
    str1len=n1.getlength();
    cout<<"The length is "<<str1len<<"\n";
    

    strings n2("Gouri");
    cout<<"The second string is ";
    n2.display();
    cout<<"\n";
    str2len=n2.getlength();
    cout<<"The length is "<<str2len<<"\n";
    
    cout<<"*********COMPARISON**********"<<"\n";
    if(str1len>str2len)
    {
        cout<<"The larger string is ";
        n1.display();
        cout<<"\n";
        cout<<"The smaller string is ";
        n2.display();
        cout<<"\n";
    }

    else if(str2len>str1len) 
    {
        cout<<"The larger string is ";
        n2.display();
        cout<<"\n";
        cout<<"The smaller string is ";
        n1.display();
        cout<<"\n";
    }
    
    cout<<"********CONCATENATION********"<<"\n";
    S1.concatenate(n1, n2);
    cout<<"The concatenated string is= ";
    S1.display();
    cout<<"\n";


   
}

