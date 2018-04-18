
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
    void display(){
        // std::cout <<" new int of A is "<< num1 << std::endl;
    }
    friend void swap(A ,B);
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
      void display(){
        // std::cout << "new int of B is"<< num2 << std::endl;
    };
    friend void swap( A , B );
};

 void swap (A Aobj, B Bobj ){
   int c = Aobj.num1 ;
   Aobj.num1 = Bobj.num2;
   Bobj.num2 = c;
   cout << " new value of A is" <<   Aobj.num1 << endl <<  " new value of B is" << c ;
   ;
};

int main()
{
   A objA;
   B objB;
   objA.set();
   objB.set();
   swap(objA , objB);
   objA.display();
   objB.display();
    return 0;
};
