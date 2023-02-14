#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    string line;
    ofstream fout;
    ifstream fin;
    fin.open("abc.txt");
    fout.open("abc.txt");
    fout<<"Hello\n";
        fout<<"Expansion of e^x is : "<<endl;
        fout<<"1 + ";
        for(int i=1;i<10;i++)
        {
            line="(x^"+to_string(i)+")/"+to_string(i)+"!"+" + ";
            fout<<line;
        }
        fout<<".....infinity"<<endl;
    fout.close();
    while(fin)
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    fin.close();
}