#include <iostream>
#include <string>
using namespace std;

 
class rectangle{
    private:
    float len;
    float brt;
   public:
    rectangle(){
       std::cout << "hey ! this is default constructer gen in const overloading" << std::endl;
   };
   rectangle(float l , float b){
       len = l;
       brt  = b;
       cout<<"the are of rectangle "<<len*brt;
   };

   
};

int main(){
    rectangle dhruv;
    cout<<"enter the value of length and breath for finding area"<<endl;
      float lent , brth;
    cin>>lent>>brth;
    rectangle dhruv1(lent,brth);
return 0;
}


