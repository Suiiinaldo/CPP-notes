#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    string line;
    fout.open("abc.txt",ios::ate);
    fout<<"HELLO ";
    fout<<"Prakhar Pratap Singh"<<endl;
    fout<<"Anmol Singh Dhaliwal"<<endl;
    fout.seekp(0,ios::beg);
    fout<<"Byeee";
    fout.close();
    fin.open("abc.txt");
    while(!fin.eof())
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    fin.close();
}