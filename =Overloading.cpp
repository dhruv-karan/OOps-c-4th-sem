#include <iostream>
#include <string>
using namespace std;

class equa {
    private:
    int a=4;
    public:
   
  void  increment(){
       
      cout<<"here a gonna increment"<<endl;
      a= a+1;
      cout<<a <<endl;
    };
   void decrement(){
        cout <<"here im gonna decrease" <<endl;
        a = a-1;
        cout<<a <<endl;
    };
};

int main(){
    
      cout << "intial value of a is 4"<< endl;
   
  equa obj1;
  obj1.increment();
   obj1.decrement();
   cout<<"here i used = in both function"<<endl;
   cout<<"for showing overloading"<<endl;
};