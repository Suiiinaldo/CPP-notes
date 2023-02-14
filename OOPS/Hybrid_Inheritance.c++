#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    void getname()
    {
        cout<<"Enter The name of Student :"<<endl;
        cin>>name;
    }

};
class test : public student
{
    public:
    int score;
    void getscore()
    {
        cout<<"Enter the Score : ";
        cin>>score;
    }
};
class sports
{
    public:
    string medal;//int marks;
    void getmedal()
    {
        cout<<"Enter the Medal received in Sports (Gold,Silver,Bronze,Null) "<<endl;//cout<<"Enter the marks";
        cin>>medal;//cin>>marks;
    }
};
class result : public test,public sports
{
    public:
    void calculate()
    {
        if(medal=="Gold" || score>=80)
        {
            cout<<"Name : "<<name<<endl<<"Marks : "<<score<<endl<<"Medal : "<<medal<<endl; 
            cout<<"Result : Passed (Distinction)"<<endl;
        }
        else if(score>=60 || medal=="Silver")
        {
            cout<<"Name : "<<name<<endl<<"Marks : "<<score<<endl<<"Medal : "<<medal<<endl; 
            cout<<"Passed (First Division)"<<endl;
        }
        else if(score>=50 || medal=="Bronze")
        {
            cout<<"Name : "<<name<<endl<<"Marks : "<<score<<endl<<"Medal : "<<medal<<endl; 
            cout<<"Passed (Second Division)"<<endl;
        }
        else if(score>=40 )
        {
            cout<<"Name : "<<name<<endl<<"Marks : "<<score<<endl<<"Medal : "<<medal<<endl; 
            cout<<"Passed (Third Division)"<<endl;
        }
        else
        {
            cout<<"Name : "<<name<<endl<<"Marks : "<<score<<endl<<"Medal : "<<medal<<endl; 
            cout<<"Failed"<<endl;
        }
    }
};
int main()
{
    result ob;
    ob.getname();
    ob.getscore();
    ob.getmedal();
    ob.calculate();
}