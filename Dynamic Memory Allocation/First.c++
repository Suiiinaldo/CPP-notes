#include<iostream>
using namespace std;
class abc
{
    public:
    int *arr;
    int sum;int size;
    abc(int size)
    {
        this->size=size;
        sum=0;
        arr=new int[size];
    }
    void add()
    {
        cout<<"Enter the Elements : \n";
        for(int i=0;i<size;i++)
        cin>>arr[i];
        for(int i=0;i<size;i++)
        sum+=arr[i];
        cout<<"Sum is : "<<sum<<endl;
    }
    ~abc()
    {
        delete arr;
    }
};
int main()
{
    int size;
    cout<<"Enter the Size"<<endl;
    cin>>size;
    abc ob(size);
    ob.add();
}