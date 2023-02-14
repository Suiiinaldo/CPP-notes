#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f,o;
    f.open("child1.txt",ios::out);
    f<<"I am from File 1"<<endl;
    f.close();
    f.open("child2.txt",ios::out);
    f<<"I am from File 2"<<endl;
    f.close();
    o.open("SuperFile.txt",ios::app);
    f.open("child1.txt",ios::in);
    string line;
    while(f)
    {
        getline(f,line);
        o<<line<<endl;
    }
    f.close();
    f.open("child2.txt",ios::out);
    while(f)
    {
        getline(f,line);
        o<<line<<endl;
    }
    f.close();
    o.close();
}