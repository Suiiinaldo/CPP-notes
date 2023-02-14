#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    cout<<"------------------MENU------------------"<<endl;
    cout<<" Type 1 for read a file                 "<<endl;
    cout<<" Type 2 for writing a file              "<<endl;
    cout<<" Type 3 for appending a file            "<<endl;
    cout<<" Type 4 for modifying a file            "<<endl;
    int a;
    cin>>a;
    switch(a)
    {
        case 1:
        {
            string line;
            ifstream fin;
            fin.open("Data.txt");
            if(!fin)
            {
                cout<<"No File Exist\n";
            }
            else
            {
                cout<<"UID       Name"<<endl;
                while(fin)
                {
                    getline(fin,line);
                    cout<<line<<endl;
                }
            }
            fin.close();
            fin.clear();
            break;
        }
        case 2:
        {
            string name;
            string UID;
            ofstream fout;
            ifstream fin;
            fout.open("Data.txt",ios::ate);
            fin.open("Data.txt");
            if(!fin)
            {
                cout<<"No File Exists to be modified"<<endl;
            }
            else
            {
                cout<<"Enter the Number of Entries"<<endl;
                int n;
                cin>>n;
                while(n-->0)
                {
                    cout<<"Enter UID"<<endl;
                    cin>>UID;
                    cout<<"Enter Name"<<endl;
                    cin>>name;
                    fout<<UID<<" "<<name<<endl;
                }
                fout.close();
                fin.close();
                fin.clear();
            }
            break;
        }
        case 3:
        {
            ofstream fout;
            ifstream fin;
            fin.open("Data.txt");
            if(!fin)
            {
                cout<<"No File Exist"<<endl;
            }
            else
            {
                string uidd;
                fout.open("Data.txt",ios::app);
                int n;
                cout<<"Enter the number of Entries"<<endl;
                cin>>n;
                while(n--)
                {
                    string uidd,name;
                    cout<<"Enter the UID"<<endl;
                    cin>>uidd;
                    cout<<"Enter the Name"<<endl;
                    cin>>name;
                    fout<<uidd<<" "<<name<<endl;
                }
                fout.close();
                fin.close();
                fin.clear();
            }
            break;
        }
        case 4:
        {
            ofstream fout;
            ifstream fin;
            fin.open("Data.txt");
            fout.open("Data.txt",ios:: ate);
            if(!fin)
            cout<<"No File Exist\n";
            else
            {
                string newUid,newName;
                fout.seekp(0);
                cout<<"Enter New UID\n";
                cin>>newUid;
                cout<<"Enter New Name\n";
                cin>>newName;
                fout<<newUid;
                fout.seekp(10);
                fout<<newName;
            }
            fout.close();
            fin.clear();
            fin.close();
            break;
        }
        default:cout<<"Invalid Choice"<<endl;
    }
}