
#include <iostream>
#include <string>
using namespace std;

class learn{
    public:
    float num1 = 4;
    void val () {
        std::cout << "i m from learn" << std::endl;
    };
    
};

class student : public learn {
    public:
    int num2 = 8;
    void use(){
        cout<< " using val defined in learn class  " << num1 << endl;
    };
};

class teacher : public student {
    public:
    void used(){
                cout<< "using num defined in student class " << num2 << endl;

    };
};

int  main(){
    teacher obj;
    obj.val();
     obj.use();
     obj.used();
}