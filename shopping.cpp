#include<iostream>
using namespace std;

class shop
{
    private:
    int code;
    string name;
    float price;
    int quantity;

    public:
    int getcode(void)
    {
        return code;
    }
    void add_item(void);
    void delete_item(void);
    float show_total(void);

};

void shop::add_item(void)
{
    cout<<"Enter the product code= ";
    cin>>code;

    cout<<"Enter the product name= ";
    cin>>name;

    cout<<"Enter the product price= ";
    cin>>price;

    cout<<"Enter the product quantity= ";
    cin>>quantity;

}

void shop::delete_item(void)
{
    price=0.0;
    quantity=0;
    cout<<"The item was successfully deleted from your cart!"<<"\n";
   
}

float shop::show_total(void)
{
    float sum=price*quantity;
    return sum;

}



int main()
{
    shop s[100];
    int i;
    i=0;
    char status;
    status='y';
    int choice;

    while (status=='y' || status=='Y')
    {
        cout<<"---------SHOPPING SERVICE-------------"<<"\n";
        cout<<"1. Add items to your shopping list"<<"\n";
        cout<<"2. Delete items from your shopping list"<<"\n";
        cout<<"3. Print the total value of your purchase order"<<"\n";
        cout<<"4. Exit from service"<<"\n";
        cout<<"Select your choice: "<<"\n";
        cin>>choice;

        if(choice==1)
        {
            s[i].add_item();
            i=i+1;
        }
        else if(choice==2)
        {
            int dummycode;
            cout<<"Enter the code of the item to be deleted: ";
            cin>>dummycode;

            for(int j=0; j<i; j++)
            {
                if(s[j].getcode()==dummycode)
                {
                    s[j].delete_item();
                }

            }
        }
        else if(choice==3)
        {
            float total=0.0;
            for(int j=0; j<i; j++)
            {
                total=total+s[j].show_total();

            }
            
            cout<<"The Total Amount: Rs."<<total<<"\n";
        }

        else if(choice==4)
        {
            status='n';
            cout<<"Thank you for visiting!!"<<"\n";
        }
        else
        {
            cout<<"INVALID ENTRY, TRY AGAIN!!"<<"\n";
        }

    }

    return 0;
}