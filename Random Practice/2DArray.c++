#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the Double Dimension array\n";
    int n;
    cin>>n;
    int ar[n][n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    cout<<"Press 1 for printing the upper matrix\n";
    cout<<"Press 2 for printing the lower matrix\n";
    int choice;
    cin>>choice;
    if(choice == 2)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j<i)
                {
                    cout<<ar[i][j]<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
    else if (choice == 1)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i<j)
                {
                    cout<<ar[i][j]<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Invalid Choice\n";
    }
}