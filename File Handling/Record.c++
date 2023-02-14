#include<iostream>
#include<fstream>
using namespace std;
void getdata(string &name,string &eid)
{
    cout<<"Enter Name: ";
    getline(cin,name);
    cout<<"Enter EmployeeID : ";
    getline(cin,eid);
}
int main()
{
    ifstream fin;
    ofstream fout;
    string name , eid;
    fout.open("Records.txt");
    fin.open("Records.txt");
    fout<<"Employee Name        Employee ID"<<endl;
    for(int i=0;i<5;i++)
    {
        getdata(name,eid);
        fout<<name<<"                   "<<eid<<endl;
    }
    string line;
    while(fin)
    {
        getline(fin,line);
        cout<<line<<endl;
    }
}