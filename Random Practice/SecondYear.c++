#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of the Array\n";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the Elements of the Array\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the Element to be inserted\n";
    int z;
    cin>>z;
    cout<<"Press 1 for Insertion at the Beginning\n";
    cout<<"Press 2 for Insertion at the End\n";
    cout<<"Press 3 for Insertion at the Middle\n";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            for(int i=n;i>0;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[0]=z;
            cout<<"The Elements are as follows\n";
            for(int i=0;i<n+1;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }
        case 2:
        {
            arr[n]=z;
            cout<<"The Elements are as follows\n";
            for(int i=0;i<n+1;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }
        case 3:
        {
            int pos=n/2;
            for(int i=n;i>pos;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[pos]=z;
            cout<<"The Elements are as follows\n";
            for(int i=0;i<n+1;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid Choice\n";
        }
    }
}