#include <iostream>
#include <conio.h>
using namespace std;

 
class account
{

private:
int amount;
  
string name;
  
int accountnum;

public:
void makeaccount ()
  {
    
cout << "enter name account number  and amount " << endl;
    
int iamount;
    
string iname;
    
int iaccountname;
    
std::cin >> iname >> iaccountname >> iamount;
    
amount = iamount;
    
name = iname;
    
accountnum = iaccountname;
    
cout << "the account details " << endl << name << endl << accountnum <<
      endl << amount << endl;
  
};
  
void depositmoney ()
  {
    
cout << "enter the amount to add" << endl;
    
int iamount;
    
cin >> iamount;
    
amount = amount + iamount;
  
};
  
void checkandwithdraw ()
  {
    
cout << "current account balace is " << amount << endl;
    
cout << "amount to be widthdrawn" << endl;
    
int iamount;
    
cin >> iamount;
  
};
  
void display ()
  {
    
cout << name << " account containe " << amount << " rs " << endl;
  
};

 
};


 
int
main ()
{
  
int i;
  
account dhruv;
  
dhruv.makeaccount ();
  
dhruv.depositmoney ();
  
dhruv.checkandwithdraw ();
  
dhruv.display ();
  
return 0;

};
