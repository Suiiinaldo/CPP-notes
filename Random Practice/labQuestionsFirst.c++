#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of Array\n";
    cin>>n;
    cout<<"Enter the Elements of Array\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"The Elements are : \n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}