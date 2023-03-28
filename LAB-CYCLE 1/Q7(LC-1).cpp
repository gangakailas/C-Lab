#include<iostream>
using namespace std;

class matrix
{
    private:
    int **p;
    int d1, d2;

    public:
    matrix()
    {
        d1=0;
        d2=0;
    };
    matrix(int x, int y)
    {
        d1=x;
        d2=y;

        p=new int*[d1];

        for(int i=0; i<d1; i++)
        {
            p[i]=new int[d2];
        }
    }

    int getrow()
    {
        return d1;
    }

    int getcolumn()
    {
        return d2;
    }
    void create_matrix(int m, int n);

    void print_element(int m, int n);

    void matrix_add(matrix, matrix);
  
    void matrix_transpose(matrix);

    int matrix_trace(void);




};


void matrix::create_matrix(int m, int n)
{
        
    int value;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"Enter element for row "<<i<<" column "<<j<<" = ";
            cin>>value;
            p[i][j]=value;

        }
    }
        
}


void matrix::print_element(int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<p[i][j];
            cout<<" ";

        }
        cout<<"\n";
    }
}

void matrix::matrix_add(matrix m1, matrix m2)
{
    for(int i=0; i<d1; i++)
    {
        for(int j=0; j<d2; j++)
        {
            p[i][j]=m1.p[i][j]+m2.p[i][j];
        }
    }
}

void matrix::matrix_transpose(matrix m)
{
    for(int i=0; i<d1; i++)
    {
        for(int j=0; j<d2; j++)
        {
            p[i][j]=m.p[j][i];
        }
    }
}

int matrix::matrix_trace(void)
{
    int sum=0;
    for(int i=0; i<d1; i++)
    {
        for(int j=0; j<d2; j++)
        {
            if(i==j)
            {
                sum=sum+p[i][j];
            }
        }
    }
    
    return sum;
}

int main()
{
    int r1, c1, r2, c2;
    
    cout<<"MATRIX 1"<<"\n";
    cout<<"Enter the no. of rows preferred= ";
    cin>>r1;

    cout<<"Enter the no. of columns preferred= ";
    cin>>c1;

    matrix M1(r1, c1);
    M1.create_matrix(r1, c1);
    M1.print_element(r1, c1);

    cout<<"MATRIX 2"<<"\n";
    cout<<"Enter the no. of rows preferred= ";
    cin>>r2;

    cout<<"Enter the no. of columns preferred= ";
    cin>>c2;

    matrix M2(r2, c2);
    M2.create_matrix(r2, c2);
    M2.print_element(r2, c2);

    

    cout<<"******* MATRIX ADDITION *******"<<"\n";
    if(r1==r2 && c1==c2)
    {
        matrix M3(r1, c1);
        M3.matrix_add(M1, M2);
        M3.print_element(r1, c1);
    }
    else
    {
        cout<<"Matrix addition is not possble fo the given matrices!!"<<"\n";
    }

    
    cout<<"******* MATRIX TRANSPOSE *******"<<"\n";

    cout<<"Transpose of Matrix 1: "<<"\n";
    matrix M4(c1, r1);
    M4.matrix_transpose(M1);
    M4.print_element(c1, r1);

    cout<<"Transpose of Matrix 2: "<<"\n";
    matrix M5(c2, r2);
    M5.matrix_transpose(M2);
    M5.print_element(c1, r1); 

    cout<<"******* MATRIX TRACE *******"<<"\n";
    
    int M1_trace, M2_trace;
    M1_trace=M1.matrix_trace();
    M2_trace=M2.matrix_trace();

    cout<<"Trace of Matrix 1= "<<M1_trace<<"\n";
    cout<<"Trace of Matrix 2= "<<M2_trace<<"\n";





    



    
   

    return 0;

}



