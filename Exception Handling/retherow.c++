#include<bits/stdc++.h>
using namespace std;
void test(int x)
{
    try
    {
        if(x==0)
            throw x;
        if(x==1)
            throw 'x';
        if(x==2)
            throw "zx";
    }
    catch(int x)
    {
        throw x;
    }
    catch(char x)
    {
        cout<<"Character Exception Caught in Test Blcok\n";
    }
    catch(const char *x)
    {
        cout<<"String Exception Caught in Test Block\n";
    }
}
int main()
{
    for(int i=0;i<3;i++)
    {
         try
        {
            test(i);
        }
        catch(int x)
        {
            cout<<"Exception Caught in Main Block\n";
        }
    }
    return 0;
}