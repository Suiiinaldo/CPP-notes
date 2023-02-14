
// Practical 5.1: Write a program that takes information about institute staff information for

// 1) Teacher code, name, subject and publication

// 2) Officer code, name and grade
// 3) Typist code, name, speed and daily wages and displays it using hierarchal inheritance
#include<iostream>
using namespace std;
class teacher
{
    int code;string name,subject,publication;
    public:
    void get_teacher()
    {
        cout<<"Enter the Data :-"<<endl;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Code : ";
        cin>>code;
        cout<<"Enter Subject Name : ";
        cin>>Subject;
        cout<<"Enter Publisher Name : ";
        cin>>publicatoin;
    }
}