#include <iostream>
#include <string>
using namespace std;

class operatoroverload{
    public:
    void add(){
      cout<<"enter the value of a nad b " << endl;
      int a,b;
      std::cin >> a>>b;
      int sum = a+b;
      cout<<"here + adding a and b and giving " << sum << endl;
    };
    void concat(){
        cout <<"enter the  2 string " <<endl;
        string a , b;
        cin>> a>>b;
        string res = a+b; 
        cout<<"here + is concating 2 string and result into " << res;
    };
};

int main(){
    operatoroverload dhruv;
    dhruv.add();
    dhruv.concat();
};