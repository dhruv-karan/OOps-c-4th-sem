#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    string name;
    int  rollnumber;
    int marks[];
    public:
   void getData(){
        int irollnumber;
        string iname;
        cout<<"enter the rollnumber and name"<<endl;
        cin>> irollnumber >> iname ;
        rollnumber = irollnumber;
        name = iname;
        cout <<rollnumber <<endl <<name << endl;
     };
     void getmarks(){
          cout<<"enter 5 subject marks";
        for(int i =0; i<5; i++){
            int mark;
            cin>> mark;
            marks[i] = mark;
        };
        for(int i=0; i<5 ; i++){
            cout<<marks[i] <<endl;
        };
     }
    void percentage(){
        int sum = 0;
        for(int i=0; i<5;i++){
         sum =   sum + marks[i];
        };
         cout<<"the percentage is" <<(sum/5)<<"%";
    } 
};

int main()
{
    Student dhruv;
    dhruv.getData();
    dhruv.getmarks();
    dhruv.percentage();
    return 0;
};
