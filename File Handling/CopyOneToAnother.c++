#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ifstream fin;
    ofstream fout;
    fout.open("ParentFile.txt");
    fout<<"Hello\n";
    fout<<"I am Prakhar Pratap Singh.\n";
    fout.close();
    fout.open("ChildFile.txt");
    fin.open("ParentFile.txt");
    while(fin)
    {
        getline(fin,line);
        string d="";
        for(int i=0;i<line.length();i++)
        {
            if(line[i]<=90)
            d+=line[i];
            else
            d+=(char)(line[i]-32);
        }
        fout<<d<<endl;
    }
    fout.close();
    fin.close();
}