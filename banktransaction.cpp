#include<iostream>
using namespace std;

class bank
{
    private:
    string cust_name;
    int acc_no;
    string acc_type;
    int balance=0;

    public:
    void create_acc(void);
    void withdraw(void);
    void deposit(void);
    void put_balance(void)
    {
        int x;
        cout<<"Enter your Account Number: ";
        cin>>x;
        
        cout<<"YOUR CURRENT BALANCE: "<<balance<<"\n";
    }
    void acc_statement(void);

};

void bank::create_acc(void)
{
    int acc_type_info;
    
    cout<<"*****ACCOUNT CREATION*******"<<"\n";
    cout<<"Enter your Name: ";
    cin>>cust_name;

    cout<<"Choose the account type you prefer: "<<"\n";
    cout<<"1.Savings account"<<"\n";
    cout<<"2.Current account"<<"\n";
    cout<<"3.Salary account"<<"\n";
    cout<<"4.Fixed deposits account"<<"\n";
    cin>>acc_type_info;

    if(acc_type_info==1)
    {
        acc_type="Savings account";
        cout<<"You've successfully created a Saving's Account!!"<<"\n";
    }

    else if(acc_type_info==2)
    {
        acc_type="Current account";
        cout<<"You've successfully created a Current Account!!"<<"\n";
    }

    else if(acc_type_info==3)
    {
        acc_type="Salary account";
        cout<<"You've successfully created a Salary Account!!"<<"\n";
    }

    else if(acc_type_info==4)
    {
        acc_type="Fixed deposit account";
        cout<<"You've successfully created a Fixed Deposit Account!!"<<"\n";
    }
    
    acc_no=(rand()+acc_type_info);

    cout<<"Your Account Number is: "<<acc_no<<"\n";

    
}

void bank::deposit(void)
{
    int dummy_deposit, deposit;
    int x;

    cout<<"******DEPOSIT CASH**********"<<"\n";
    cout<<"Enter your Account Number: ";
    cin>>x;

    if(balance==0)
    {
        cout<<"This is the initial deposit(a minimum of Rs. 500 is required)"<<"\n";
        cout<<"Enter the amount to be deposited: "<<"\n";
        cin>>dummy_deposit;
        if (dummy_deposit<500)
        {
            cout<<"INVALID ENTRY(minimum of 500 was required)!!"<<"\n";
        }

        else
        {
            deposit=dummy_deposit;
            balance=deposit;
            cout<<"You've succesfully deposited an amount of Rs. "<<deposit<<" in the Account!!"<<"\n";
        }
    }
    else   
    {
        cout<<"Enter the amount to be deposited: "<<"\n";
        cin>>deposit;
        cout<<"You've succesfully deposited an amount of Rs. "<<deposit<<" in the Account!!"<<"\n";
        balance=balance+deposit;
    }
}
    


void bank::withdraw(void)
{
    int with_cash;
    int x, y;
    cout<<"Enter your Account Number: ";
    cin>>x;
    
    if(balance<500)
    {
        cout<<"Transaction denied due to Inadequate Bank Balance!!!"<<"\n";
    }
    
    else
    {
        cout<<"Enter the amount to be withdrawn= ";
        cin>>with_cash;
        y=balance-with_cash;
        
        if(y<500)
        {
            cout<<"Transaction denied!!!(this withdrawal will reduce your balance to less than minimum amount required as per bank guidelines)"<<"\n";
        }
        else
        {
            cout<<"An amount of Rs."<<with_cash<<" was successfully withdrawn!!"<<"\n";
            balance=balance-with_cash;
        }
    }
}

void bank::acc_statement(void)
{
    int x;
    cout<<"Enter your Account Number: ";
    cin>>x;

    cout<<"*******ACCOUNT DETAILS*********"<<"\n";
    cout<<"Customer Name: "<<cust_name<<"\n";
    cout<<"Account Number: "<<acc_no<<"\n";
    cout<<"Account Type: "<<acc_type<<"\n";
    cout<<"Bank Balance: "<<balance<<"\n";
}

int menu()
{
    int choice;

    cout<<"*******WELCOME TO OUR BANK SERVICE**********"<<"\n";
    cout<<"1.ADD NEW ACCOUNT"<<"\n";
    cout<<"2.WITHDRAW CASH"<<"\n";
    cout<<"3.DEPOSIT CASH"<<"\n";
    cout<<"4.ENQUIRE BALANCE"<<"\n";
    cout<<"5.BANK ACCOUNT STATEMENT"<<"\n";
    cin>>choice;

    return choice;

}

int main(){

    bank b1;

    int x;
    char next; 
    x=menu();
    next='y';
    
    while(next=='y' || next=='Y')
    {
        
        if(x==1)
        {
            b1.create_acc();
        }
    
        else if(x==2)
        {
            b1.withdraw();
        }

        else if(x==3)
        {
            b1.deposit();
        }

        else if(x==4)
        {
            b1.put_balance();
        }

        else if(x==5)
        {
            b1.acc_statement();
        }
        
        cout<<"Do you want to continue?(y/n)"<<"\n";
        cin>>next;

        if(next=='y' || next=='Y')
        {
            x=menu();
        }
    }

    cout<<"THANK YOU FOR VISITING!!"<<"\n";
}