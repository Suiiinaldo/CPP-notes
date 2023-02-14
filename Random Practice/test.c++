#include <iostream>
using namespace std;

int main() {
  string my_string;
  cin>>my_string;
  //add code below this line
//   if(my_string.size()%2!=0)
//   {
    for(int i=0;i<my_string.size()/2;i++)
    {
      if(i<my_string.size()/2)
      {
        cout<<my_string[i];
      }
    }
    cout<<endl;
    for(int i=my_string.size()/2;i<my_string.size();i++)
    cout<<my_string[i];
    cout<<endl;
//   }
  //add code above this line
  
  return 0;
  
}