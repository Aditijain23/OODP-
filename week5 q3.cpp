#include <iostream>
using namespace std;

class Area
{
public:
    void output(int l, int b)
    {
        cin>>l>>b;
       
        cout<<"Area of Rectangle is = "<<l*b<<endl;
    }

    void output(int a)
    {
        cin>>a;
        cout<<"Area of Square is = "<<a*a<< endl;
    }
};

int main()
{
    Area obj;
    int l,b,a;
    obj.output(l,b);
    obj.output(a);
}
