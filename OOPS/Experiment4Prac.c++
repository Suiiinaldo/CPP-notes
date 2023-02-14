#include<iostream>
using namespace std;
class student 
{
    string name;int height,*weight,*rollno;
    public:
    student()
    {
        weight=new int;
        rollno=new int;
    }
    student(string na,int a,int b,int c)
    {
        name =na;
        height=a;
        weight=&b;
        rollno=&c;
    }
    student(student &d)
    {
        name=d.name;
        height=d.height;
        weight =new int;
        rollno=new int;
        *weight=*(d.weight);
        *rollno=*(d.rollno);
    }
    void display()
    {
        cout<<"Name : "<<name<<endl<<"Height : "<<height<<endl<<"Weight : "<<*weight<<endl<<"Roll Number : "<<*rollno<<endl;
    }
    ~student()
    {
        cout<<"Destructor invoked"<<endl;
        delete weight;
        delete rollno;
    }
};
int main()
{
    cout<<"21BCS9783_Prakhar Pratap Singh"<<endl;
    student abc("Prakhar",178,55,9783);
    abc.display();
    student cba(abc);
    cout<<endl<<"Elements of Second Objects "<<endl;
    cba.display();
}