#include<iostream>
using namespace std;
class abc
{
    public:
    int size;int *arr;
    int *even,*odd;
    int k,n;
    abc(int size)
    {
        this->size=size;
        arr=new int[size];
        odd=new int[size];
        even=new int[size];
        k=n=0;
    }
    void get()
    {
        cout<<"Enter the Elements\n";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            if(arr[i]%2)
                odd[k++]=arr[i];
            else
                even[n++]=arr[i];
        }
    }
    void show()
    {
        cout<<"Even Elements are :\n";
        for(int i=0;i<n;i++)
            cout<<even[i]<<" ";cout<<endl;
        cout<<"Odd Elements are :\n";
        for(int i=0;i<k;i++)
            cout<<odd[i]<<" ";cout<<endl;
    }
    ~abc()
    {
        delete arr;
        delete odd;
        delete even;
    }
};
int main()
{
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    abc ob(n);
    ob.get();
    ob.show();
}