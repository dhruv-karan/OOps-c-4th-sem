
#include <iostream>
#include <string>
using namespace std;

class Time{
float hour;
float minute;

public:
 void set( float ihour , float iminute ){
    hour = ihour ;
    minute = iminute;
 };
 void sum(Time ob1 , Time ob2){
     float addH , addM ;
     addH = ob1.hour + ob2.hour;
     addM = ob1.minute + ob2.minute;
     hour = addH;
     minute = addM;
      };
 void  display(){
        cout <<"total hours: " << hour <<endl <<"total minutes : " << minute <<endl;
    };

};

int main(){
    float min1,min2;
    float hour1, hour2;
    Time ob1;
     Time ob2;
     cout <<"enter the hour and minute of both the object"<<endl;
     std::cin >> hour1 >>min1 >> hour2 >> min2;
      ob1.set(hour1,min1);
      ob2.set(hour2,min2);
      ob1.sum(ob1 , ob2);
       ob1.display();
      return 0;
      
};