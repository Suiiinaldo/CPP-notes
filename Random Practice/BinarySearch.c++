#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the size of array\n";
    int n;
    cin>>n;
    int ar[n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int element;
    cout<<"Enter the element to be searched\n";
    cin>>element;
    int start=0,end=n,mid;
    while(start<end)
    {
        mid =(start+end)/2;
        if(ar[mid] == element)
        {
            cout<<"Found at index "<<mid<<endl;
            return 0;
        }
        else if(ar[mid]>element)
        end = mid - 1;
        else
        start = mid + 1;
    }
    cout<<"Not Found\n";
    return 0;
}
