#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
using namespace std;

template <class t>
class bubble
{
t a[25];
public:
void get(int);
void sort(int);
void display(int);
};

template <class t>
void bubble <t>::get(int n)
{
int i;
cout<<"Enter the array elements:\n";
for(i=0; i<n;i++)
cin>>a[i];
}

template <class t>
void bubble <t>::display(int n)
{
int i;
cout<<"\nThe sorted array is\n";
for(i=0;i<n;i++)
cout<<a[i]<<setw(10);
}

template <class t>
void bubble <t>::sort(int n)
{
int i,j;
t temp;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}

int main()
{
int n,ch;
while(1)
{
cout<<"\n\n----BUBBLE SORT TEMPLATES----\n";
cout<<"\nEnter your choice\n1.Integer\n2.Floating Point\n3.Character\n4.Exit\n\n";
cin>>ch;

switch(ch)
{
         case 1:
              {
              cout<<"\n### Integer Sortmenu ###\n\n";
              bubble<int> b1;
              cout<<"Enter the size of array:\n";
              cin>>n;
              b1.get(n);
              b1.sort(n);
              b1.display(n);
              break;
              };
              case 2:
                   {
                   cout<<"\n### Floating Point SortMenu ###\n\n";
                   bubble<float> b2;
                   cout<<"Enter the size of array:\n";
                   cin>>n;
                   b2.get(n);
                   b2.sort(n);
                   b2.display(n);   
                   break;
                   };
                   case 3:
                        {
                        cout<<"\n### Character SortMenu ###\n\n";
                        bubble<char> b3;        
                        cout<<"Enter the size of array:\n";
                        cin>>n;  
                        b3.get(n);
                        b3.sort(n);
                        b3.display(n);
                        break;
                        };
                        case 4:
                             {
                             cout<<"<Program terminating>";
                             exit(0);
                             };
                        default:
                                cout<<"Invalid Choice try again!\n";
                                return 0;
                                
                                }
                                }    
getch();
}