#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;
    public:
    void getdata()
    {
        cout<<"Enter ID of employee"<<endl;
        cin>>id;
        count++;
    }
    void putdata()
    {
        cout<<"The ID of Employee is : "<<id<<endl;
    }
    static void getcount()
    {
        cout<<"Serial Number of Employee is : "<<count<<endl;
    }
}emp;
int employee :: count;
int main()
{
    cout<<"This code is done by Prakhar Pratap Singh 21BCS9783"<<endl;
    employee rup,laksh,naman,choni;
    rup.getdata();
    rup.putdata();
    employee :: getcount();
    laksh.getdata();
    laksh.putdata();
    employee :: getcount();
    naman.getdata();
    naman.putdata();
    employee :: getcount();
    choni.getdata();
    choni.putdata();
    employee :: getcount();
}