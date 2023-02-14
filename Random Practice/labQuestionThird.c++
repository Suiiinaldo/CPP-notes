#include<iostream>
using namespace std;
class bank
{
    public:
    long long accountNo;
    string name;
    long long balance;
    void newacc()
    {
        cout<<"Enter your Name\n";
        cin>>name;
        cout<<"Enter The Account Number\n";
        cin>>accountNo;
        cout<<"Enter The Initial Balance\n";
        cin>>balance;
    }
    void show()
    {
        cout<<"The Details Are :\n";
        cout<<"Name : "<<name<<endl;
        cout<<"Account Number : "<<accountNo<<endl;
        cout<<"Balance : "<<balance<<endl;
    }
    void withdraw()
    {
        cout<<"Enter The Amount to withdraw\n";
        int z;
        cin>>z;
        if(z>balance)
        cout<<"Insufficient Balance\n";
        else
        {
            balance-=z;
            cout<<"Withdrawn Successfully\n";
            cout<<"New Balance = "<<balance<<endl;
        }
    }
    void deposit()
    {
        cout<<"Enter The Amount to deposit\n";
        int z;
        cin>>z;
        balance+=z;
        cout<<"Deposited Successfully\n";
        cout<<"New Balance = "<<balance<<endl;
    }
};
int main()
{
    cout<<"Enter the size of database\n";
    int zx;
    cin>>zx;
    bank ob[zx];
    for(int i=0;i<zx;i++)
    {
        ob[i].newacc();
    }
    cout<<"Press 1 for Withdrawing\n";
    cout<<"Press 2 for Depositing\n";
    cout<<"Press 3 for showing all the details\n";
    int choice;
    cin>>choice;
    switch (choice)
    {
        case 1:
        {
            cout<<"Enter your Name\n";
            string s;
            cin>>s;
            int pos=-1;
            for(int i=0;i<zx;i++)
            {
                if(ob[i].name==s)
                    pos=i;
            }
            if(pos==-1)
                cout<<"No Such Account Found\n";
            else
            {
                ob[pos].withdraw();
                ob[pos].show();
            }
            break;
        }
        case 2:
        {
            cout<<"Enter your Name\n";
            string s;
            cin>>s;
            int pos=-1;
            for(int i=0;i<zx;i++)
            {
                if(ob[i].name==s)
                    pos=i;
            }
            if(pos==-1)
                cout<<"No Such Account Found\n";
            else
            {
                ob[pos].deposit();
                ob[pos].show();
            }
            break;
        }
        case 3:
        {
            cout<<"Enter your Name\n";
            string s;
            cin>>s;
            int pos=-1;
            for(int i=0;i<zx;i++)
            {
                if(ob[i].name==s)
                    pos=i;
            }
            if(pos==-1)
            cout<<"No Such Account Found\n";
            else
            {
                ob[pos].show();
            }
            break;
        }
        default:
        {
            cout<<"Invalid Choice\n";
        }
    }
}