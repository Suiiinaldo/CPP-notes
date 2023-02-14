#include<iostream>
using namespace std;
class Student
{
    public:
    int uid;
    void getnumber()
    {
        cout<<"Enter your UID"<<endl;
        cin>>uid;
    }
    void putnumber()
    {
        cout<<"UID is : "<<uid<<endl;
    }
};
class test : virtual  public Student
{
    public:
    int ma,eng,cpp;
    void getmarks()
    {
        cout<<"Enter the marks for the subjects : "<<endl;
        cout<<"For Mathematics :";
        cin>>ma;
        cout<<"For English :";
        cin>>eng;
        cout<<"For Computer :";
        cin>>cpp;
    }
    void putmarks()
    {
        cout<<"Marks are :"<<endl;
        cout<<"Mathematics :"<<ma<<endl;
        cout<<"English :"<<ma<<endl;
        cout<<"Computer :"<<cpp<<endl;
    }
};
class sports : virtual public Student
{
    public:
    int marks;
    void getscore()
    {
        cout<<"Enter the score in sports out of 100"<<endl;
        cin>>marks;
    }
    void putscore()
    {
        cout<<"Score in sports is :"<<marks<<endl;
    }
};
class result : public sports,public test
{
    public:
    int fin;
    void display()
    {
        fin=ma+eng+cpp;
        cout<<"Total marks in test is :"<<fin<<endl;
        cout<<"Marks in sports is :"<<marks;
    }
};
int main()
{
    cout<<"21BCS9783 Prakhar Pratap Singh"<<endl;
    result ob;
    ob.getnumber();
    ob.getmarks();
    ob.getscore();
    cout<<endl;
    ob.putnumber();
    ob.display();
    cout<<endl<<"Size of object is :"<<sizeof(ob)<<endl;

}