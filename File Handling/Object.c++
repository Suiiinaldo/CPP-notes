#include<iostream>
#include<fstream>
using namespace std;
class data
{
    public:
    string name,UID;
    void getdata()
    {
        cout<<"Enter Name\n";
        cin>>name;
        cout<<"Enter UID\n";
        cin>>UID;
    }
};
int main()
{
    data ob;
    ob.getdata();
    ofstream fout("File.txt");
    ifstream fin("File.txt");
    fout.write((char*)&ob,sizeof(ob));
    fout.close();
    fin.read((char*)&ob,sizeof(ob));
    fin.close();
}