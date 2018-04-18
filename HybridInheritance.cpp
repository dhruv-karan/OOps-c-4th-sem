#include <iostream>
#include <string>
using namespace std;

class student {
    public:
    string name;
    int rollno;
    int marks [];
    void setmarks(){
        string iname;
        int irollno;
        int mark;
        
        std::cout <<  " enter  the marks of study " << std::endl;
        for(int i =0; i < 5; i++ ){
            std::cin >> mark;
            marks[i] = mark;
        };
    };
};

class sports {
public:
int sportsmarks [] ;
void sportM(){
     int mark;
        std::cout <<  " enter  the marks of sports " << std::endl;
        for(int i = 0; i<5; i++){
          cin>> mark;
          sportsmarks[i] = mark;
        };
};

};

class result :  public student , public sports  {
    public:
    void report(){
        cout<<"the result is " <<endl;
        cout << " marks in studies are:   " ;
        for(int i=0 ; i<5; i++){
            cout<<marks[i] <<  " ";
        };
        
        cout<<endl << " marks in sports are :  ";
      for(int i=0 ; i<5; i++){
            cout<<sportsmarks[i] <<  " ";
        };
    };
};

int main(){
   result r1;
   r1.setmarks();
    r1.sportM();
   r1.report();
   return 0;
};