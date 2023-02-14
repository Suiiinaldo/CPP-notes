#include<iostream>
#include<fstream>
#define ll long long
using namespace std;
void getdata(string &name,ll &telephoneno)
{
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Telephone No. : ";
    cin>>telephoneno;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    ofstream fout("Employee.txt");
    ifstream fin("Employee.txt");
    string name;
    ll telephoneno ; int n;
    cout<<"Enter the Number of Entries\n";
    cin>>n;
    while(n-->0)
    {
        getdata(name,telephoneno);
        fout<<name<<" "<<telephoneno<<endl;
    }
    string target;
    cout<<"Enter the Name to be searched\n";
    cin>>target;int f=0;
    while(fin)
    {
        string line;int pos=-1;
        getline(fin,line);
        for(int i=0;i<line.length();i++)
        {
            if(line[i]==' ')
            {
                pos=i;
                break;
            }
        }
        string d=line.substr(0,pos);
        if(d==target)
        {
            cout<<"Found\n";
            cout<<"The Data are :\n";
            cout<<line<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"Not Found\n";
}