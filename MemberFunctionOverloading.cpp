#include <iostream>
#include <string>
using namespace std;

class volume {

  private:
  int length;
  int breath;
  int height;
  public:
 void calcvolume(float l){
      float volL =  l*l*l; 
      std::cout << volL << std::endl;
  };
  void calcvolume(int r){
    float volL = 3.14*r*r;
    cout <<volL<<endl;
  };
  void calcvolume(float l , float b , float h){
      float volL = l*b*h;
      cout<<volL<<endl;
  }
};

int main(){
    
    volume cube;
    volume cylinder;
    volume cubeoid;
    float l;
    cout<<"enter the length of cube for finding volume of cube" <<endl;
    std::cin >>l ;
    cube.calcvolume(l);
     int r ;
    cout <<"enter the the radius for finding volume of cylinder"<<endl;
    cin>>r;
    cylinder.calcvolume(r);
    float len ,b , h;
    cout<<"enter the value of length breath height for finding volume of cylinder "<<endl;
    cin>>len>>b>>h;
    cubeoid.calcvolume(len,b,h);
    return 0;
    
}