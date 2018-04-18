
#include <iostream>
#include <string>
using namespace std;
class B ;
class A {
    private :
    int num1;
    public:
        void set(){
        cout << "enter the num for class A" <<endl;
        int inum1;
        std::cin >> inum1;
        num1 = inum1;
    };
    friend void compare(A ,B);
};

class B {
    private: 
    int num2;
    public:
    void set(){
        cout << "enter the num for class B" <<endl;
        int inum2;
        std::cin >> inum2;
        num2 = inum2;
    };
    friend void compare( A , B );
};

 void compare (A Aobj, B Bobj ){
   if (Aobj.num1 >Bobj.num2){
        cout << Aobj.num1 << " is  greater then " << Bobj.num2 <<endl;
   }
 
 else  {
         cout << Bobj.num2 << " is  greater then " <<  Aobj.num1 <<endl ;
   }
  
};

int main()
{
   A objA;
   B objB;
   objA.set();
   objB.set();
   compare(objA , objB);
    return 0;
};
