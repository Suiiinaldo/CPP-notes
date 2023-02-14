#include <iostream>
using namespace std;
class A
{
    int x;
    public:
    class B
    {
        
        public:
        int y;
        void get()
        {
            A obj;
            cout<<"Intitalise Member of A\n";
            cin>>obj.x;
            cout<<"Initilaise Member of B\n";
            cin>>y;
        }
        void put()
        {
            A obj;
            cout<<obj.x<<endl;
            cout<<y;
        }
    }hell;
    void display()
    {
        cout<<x<<" "<<hell.y<<endl;
    }
};
int main()
{
    A::B obj;
    A ob;
    obj.get();
    obj.put();
    ob.display();
    return 0;
}