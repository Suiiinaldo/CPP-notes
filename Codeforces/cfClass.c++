#include<iostream>
using namespace std;
class sum
{
    public:
    int sum=0;
    public:
    void add()
    {
        for(int i=1;i<=100;i++)
            if(i%2!=0)
            sum+=i;
    }
    void display()
    {
        cout<<"sum = "<<sum<<"\n";
    }
};
int main()
{
    sum s1;
    s1.add();
    s1.display();
}