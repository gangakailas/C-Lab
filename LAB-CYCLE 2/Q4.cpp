#include<iostream>
using namespace std;

class matrix
{
    private:
    int **p;
    int r, c;

    public:
    matrix()
    {
        r=0;
        c=0;
    }
    matrix(int x, int y)
    {
        r=x;
        c=y;

        p=new int*[r];
        
        for(int i=0; i<r; i++)
        {
            p[i]=new int[c];
        }

    }

    void fill_matrix(void);
    void print_matrix(void);
    matrix operator+(matrix);
    matrix operator*(matrix);
    
};

void matrix::fill_matrix(void)
{
    int value;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter the element for row "<<i<<" column "<<j<<": ";
            cin>>value;
            p[i][j]=value;
        }
    }
}

void matrix::print_matrix(void)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<p[i][j];
            cout<<" ";
        }
        cout<<"\n";
    }
}

matrix matrix::operator+(matrix m2)
{
    matrix m3(r, c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            m3.p[i][j]=p[i][j]+m2.p[i][j];
        }
    }
    return m3;
}

matrix matrix::operator*(matrix m2)
{
    matrix m4(r, m2.c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<m2.c; j++)
        {
            m4.p[i][j]=0;
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<m2.c; j++)
        {
            for(int k=0; k<c; k++)
            {
                m4.p[i][j]+=p[i][k]*m2.p[k][j];
            }
        }
    }
    return m4;
}

int main()
{
    int r1, r2, c1, c2;
    char status;
    int choice;
    
    cout<<"********* MATRICES **********"<<"\n";
    cout<<"MATRIX 1"<<"\n";
    cout<<"Enter no. of rows preferred= ";
    cin>>r1;
    cout<<"Enter no. of columns preferred= ";
    cin>>c1;
    matrix M1(r1, c1);
    M1.fill_matrix();

    cout<<"MATRIX 2"<<"\n";
    cout<<"Enter no. of rows preferred= ";
    cin>>r2;
    cout<<"Enter no. of columns preferred= ";
    cin>>c2;
    matrix M2(r2, c2);
    M2.fill_matrix();

    cout<<"Matrix 1: "<<"\n";
    M1.print_matrix();
    cout<<"\n";

    cout<<"Matrix 1: "<<"\n";
    M2.print_matrix();
    cout<<"\n";

    do
    {
        cout<<"******** MATRIX OPERATIONS ***********"<<"\n";
        cout<<"1.Matrix Addition"<<"\n";
        cout<<"1.Matrix Multiplication"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                if(r1==r2 && c1==c2)
                {
                    matrix M3(r1, c1);
                    M3=M1+M2;
                    cout<<"The sum of the two matrices: "<<"\n";
                    M3.print_matrix();
                }
                else
                {
                    cout<<"Addition cannot be performed on these two matrices";
                }
                break; 

            case 2:
                if(r2==c1)
                {
                    matrix M4(r1, c2);
                    M4=M1*M2;
                    cout<<"The product of the two matrices: "<<"\n";
                    M4.print_matrix();
                }
                else
                {
                    cout<<"Multiplication cannot be performed on these two matrices";
                }
                break;
        }

        cout<<"Do you want to continue?(y/n) ";
        cin>>status;

    } while (status=='y' || status=='Y');
    
    cout<<"Thank you!"<<"\n";
    cout<<"Exiting....."<<"\n";
    return 0;

}
