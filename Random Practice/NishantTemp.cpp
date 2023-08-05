#include<iostream>
using namespace std;
#define pi 3.14
class Circle{
    public:
    float radius;
    Circle (){
        radius = 0.0;
    }
    void getRadius()
    {
        cout<<"Enter the Radius\n";
        cin>>radius;
    }
    void area(){
        cout << "Area of circle is : ";
        cout << pi*radius*radius << endl;
    }
    void perimeter(){
        cout << "Perimeter of circle is : ";
        cout << 2*pi*radius << endl;
    }
};

int main(){
    Circle cirArr[5];
    for(int i =0;i<5;i++)
    {
        cirArr[i].getRadius();
        cirArr[i].area();
    }
    return 0;
}