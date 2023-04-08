#include<iostream>
using namespace std;

template<class T, class U=char>
class operate
{
    private:
    T N1, N2;
    U C1;

    public:
    operate(){}
    operate(T n1, T n2, U c1)
    {
        N1=n1;
        N2=n2;
        C1=c1;
    }
    T add()
    {
        return(N1+N2);
    }
    T subtract()
    {
        return(N1-N2);
    }
    T multiply()
    {
        return(N1*N2);
    }
    T divide()
    {
        return(N1/N2);
    }
    
    void display()
    {
        cout<<"Operation on First and Second Variable"<<"\n";
        cout<<"The sum of the numbers= "<<add()<<"\n";
        cout<<"The difference of the numbers= "<<subtract()<<"\n";
        cout<<"The product of the numbers= "<<multiply()<<"\n";
        cout<<"The quotient of the numbers= "<<divide()<<"\n";
        cout<<"Third Variable: "<<C1<<"\n";
        cout<<"\n\n";
    }
};

int main()
{
    operate<int> o1(4, 2, 'c');
    o1.display();

    operate<int, bool> o2(4, 2, true);
    o2.display();

    return 0;

}