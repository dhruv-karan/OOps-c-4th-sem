#include<iostream>
#include<cmath>
using namespace std;
double f(double x)
{
    double a=1/(1+x*x);  
    return a;
}
int main()
{    cout.precision(4);        
    cout.setf(ios::fixed);
    int n,i;           
    double a,b,c,h,sum=0,integral;
    cout<<"\nEnter the limits of integration,\n\nInitial limit,a= ";
    cin>>a;
    cout<<"\nFinal limit, b=";             
    cin>>b;
    cout<<"\nEnter the no. of subintervals(IT SHOULD BE EVEN), \nn=";       
    cin>>n;
    double x[n+1],y[n+1];
    h=(b-a)/n;                       
    for (i=0;i<n+1;i++)
    {                        
        x[i]=a+i*h;
        y[i]=f(x[i]);
    }
    for (i=1;i<n;i+=2)
    {
        sum=sum+4.0*y[i];
    }
    for (i=2;i<n-1;i+=2)
    {
        sum=sum+2.0*y[i];               
    }
    integral=h/3.0*(y[0]+y[n]+sum);   
    cout<<"\nThe definite integral  is "<<integral<<"\n"<<endl;
    return 0;
}