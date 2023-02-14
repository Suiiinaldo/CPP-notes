#include<iostream>
using namespace std;
class a
{
    public:
    int x;
    void getno()
    {
        cout<<"Enter the Number for the first object"<<endl;
        cin>>x;
    }
    void display()
    {
        cout<<"The Number of First Object is "<<endl;
        cout<<x<<endl;
    }
};
class b : public a
{
    int y;int pro;
    public:
    void getnoq()
    {
        cout<<"Enter the Number for the Second object"<<endl;
        cin>>y;
    }
    void displayq()
    {
        cout<<"The Number of Second Object is "<<endl;
        cout<<y<<endl;
    }
    void multiply()
    {
        pro=x*y;
        cout<<"The product of two Number is "<<endl<<pro<<endl;
    }
    /*void displaypro()
    {
        cout<<"The product of two Number is "<<endl<<pro<<endl;
    }*/
};
int main()
{
    b obj;
    obj.getno();
    obj.display();
    obj.getnoq();
    obj.displayq();
    obj.multiply();
   // obj.displaypro();
}