#include<iostream>
using namespace std;
class shapes
{
public:
    int volume(int a);
    double volume(double f1);
    int volume(int h,int r);
};
int shapes ::volume(int a)
{
    int ans;
    ans=a*a*a;
    cout<<ans<<endl;
    return(-1);
}
double shapes ::volume(double f1)
{
    double ans;
    ans=(4/3)*(3.14)*(f1*f1*f1);
    cout<<ans<<endl;
    return(-1);
}
int shapes ::volume(int h, int r)
{
    int ans;
    ans=(3.14)*r*r*h;
    cout<<ans<<endl;
    return(-1);
}
int main()
{
    int a,h,r;
    double f1;
    shapes n;
    cout<<"enter the side of the cube"<<endl;
    cin>>a;
    cout<<"enter the radius of the sphere"<<endl;
    cin>>f1;
    cout<<"enter the height and the radius of the cylinder"<<endl;
    cin>>r>>h;
     cout<<"the volumes are:"<<endl;
    n.volume(a);
    n.volume(f1);
    n.volume(r,h);
    return 0;
}