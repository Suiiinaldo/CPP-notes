#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>ar[i];
    cout<<"Press 1 for insertion at a given index and at the end as well\n";
    cout<<"Press 2 for deletion of any value from the array\n";
    cout<<"Press 3 for finding the location of the elements in an array\n";
    cout<<"Press 4 for Displaying all the elements of the array\n";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            int index,value;
            cout<<"Enter the value to be inserted\n";
            cin>>value;
            cout<<"Enter the index at which you want to insert\n";
            cin>>index;
            int br[n+2];
            for(int i=0;i<n;i++)
            {
                if(i<index)
                br[i]=ar[i];
                else if(i==index)
                {
                    br[i]=value;
                    br[i+1]=ar[i];
                }
                else
                {
                    br[i+1]=ar[i];
                }
            }
            br[n+1]=value;
            cout<<"Elements are as follows after operation\n";
            for(int i=0;i<=n+1;i++)
            cout<<br[i]<<" ";
            cout<<endl;
            break;
        }
        case 2:
        {
            int br[n-1];
            int index;
            cout<<"Enter the index of which you want to delete the element\n";
            cin>>index;
            for(int i=0;i<n;i++)
            {
                if(i<index)
                br[i]=ar[i];
                else if(i==index)
                continue;
                else
                {
                    br[i-1]=ar[i];
                }
            }
            cout<<"Elements are as follows after operation\n";
            for(int i=0;i<n-1;i++)
            cout<<br[i]<<" ";
            cout<<endl;
            break;
        }
        case 3:
        {
            int value,pos=-1;
            cout<<"Enter the value you want to find\n";
            cin>>value;
            for(int i=0;i<n;i++)
            {
                if(ar[i]==value)
                {
                    pos=i;
                    break;
                }
            }
            if(pos==-1)
            cout<<"Not Found\n";
            else
            cout<<"Found at index "<<pos<<endl;
            break;
        }
        case 4:
        {
            cout<<"Elements are as follows\n";
            for(int i=0;i<n;i++)
            cout<<ar[i]<<" ";
            cout<<endl;
            break;
        }
        default: cout<<"Invalid Choice\n";
    }
    cout<<"Name: Prakhar Pratap Singh\nUID: 21BCS9783";
    return 0;
}