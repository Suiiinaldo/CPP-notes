#include<iostream>
#define PI 3.14567
using namespace std;
class circle
{
    int r;double area;
    public:
    circle()
    {
        int n;
        cout<<"Enter the radius"<<endl;
        cin>>n;
        area=PI*n*n;
        cout<<"Area = "<<area<<endl;
    }
    circle(int a)
    {
        r=a;
        area=PI*r*r;
        cout<<"Area = "<<area<<endl;
    }
    ~circle()
    {
        cout<<"Destructor invoked "<<endl;
    }
};
int main()
{
    cout<<"21BCS9783_Prakhar Pratap Singh"<<endl;
    circle ob;
    cout<<endl<<"Area of the circle with radius 3"<<endl;
    circle obj(3);
}