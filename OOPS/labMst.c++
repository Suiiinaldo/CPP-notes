#include<iostream>
using namespace std;
class employee
{
    int employeeuid;
    string name,address;
    public:
    employee()
    {
        cout<<"Enter the ID"<<endl;
        cin>>employeeuid;
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"Enter the address"<<endl;
        cin>>address;
    }
    void display();
    ~employee()
    {
        cout<<"Destructor invoked"<<endl;
    }
};
void employee :: display()
{
    cout<<"ID :"<<employeeuid<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Address :"<<address<<endl;
}
int main()
{
    employee ob;
    cout<<endl<<"Enter the details for 2nd person"<<endl<<endl;
    employee bo;
    cout<<endl<<"The Data are :"<<endl;
    ob.display();
    bo.display();
}