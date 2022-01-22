#include <iostream>
using namespace std; 
void rish(int, int, int);
int main()
{
    int a, b, c;
    cout<<"Equation:\na*x^2+b*x+c=0\nEnter a-> b-> c->\n";
    cin>>a>>b>>c;
    return 0;
}
void rish(int a, int b, int c)
{
    float d, x1, x2;
    d=b*b-(4*a*c);
if (d>0)
{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
cout<<"x1="<<x1<<endl;
cout<<"x2="<<x2<<endl;
}
if (d==0)
{
x1=(-1)*b/2*a;
cout<<"x="<<x1<<endl;
}
if (d<0) cout<<"No roots!\n";
}