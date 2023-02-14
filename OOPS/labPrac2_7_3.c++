#include<iostream>
using namespace std;
class media
{
    public:
    int number,n;
    void GetTotal()
    {
        cout<<"Enter the Initial Number of Books : "<<endl;
        cin>>number;
    }
    virtual void get()
    {
        cout<<"Choose your option :- "<<endl;
        cout<<"Type 1 for Issuing a Book "<<endl;
        cout<<"Type 2 for Depositing a Book "<<endl;
        cout<<"Type 3 for Returning a Book "<<endl;
        cin>>n;
        switch(n)
        {
            case 1:number-=1;break;
            case 2:number+=1;break;
            case 3:number+=1;break;
            default:cout<<"Invalid Choice "<<endl;
        }
    }
    virtual void show()
    {
        cout<<"The total Number of Books In the Library is : "<<number<<endl;
    }
};
class book : public media
{
    public:
    string name,author;
    void get()
    {
        cout<<"Enter the details of the Book :"<<endl;
        cout<<"Enter the name of Book   : ";
        cin>>name;
        cout<<"Enter the name of Author : ";
        cin>>author;
    }
    void show()
    {
        cout<<"The Details of Book are :-"<<endl;
        cout<<"Name of the Book   : "<<name<<endl;
        cout<<"Author of the Book : "<<author<<endl;
    }
};
class tape : public media
{
    public:
    int bookNumber;
    void get()
    {
        cout<<"Enter the Book Number"<<endl;
        cin>>bookNumber;
    }
    void show()
    {
        cout<<"Book Number is     : "<<bookNumber<<endl;
    }
};
int main()
{
    cout<<"Prakhar Pratap Singh\t21BCS9783"<<endl;
    media a1,*a2;
    book b1;
    tape t1;
    a2=&a1; a2->GetTotal();
    a2=&b1; a2->get();
    a2=&t1; a2->get();
    a2=&b1; a2->show();
    a2=&t1; a2->show();
    a2=&a1; a2->get(); a2->show();
    return 0;
}