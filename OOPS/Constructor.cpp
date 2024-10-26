#include<iostream>
using namespace std;

class customer
{
  string name;
  int acc_no;
  int balance; 
  int *roi;
  
  public:
   
   //default constructor
  customer() 
  {
    name="akash";
    acc_no=634874;
    balance=100000000;
    roi=new int[100];   //Constructor used for Initialize & Resource 
  }

  //Parametrized constructor
  /*customer(string name,int acc_no,int balance)
  {
    this->name=name;
    this->acc_no=acc_no;
    this->balance=balance;
  }*/

  //constructor overloading [if you see above customer funcn is called multiple time with same name but with different names]
  customer(string a,int b)
 {
  name=a;
  acc_no=b;
  balance=5687667;
 }

//Inline constructor
inline customer(string a,int b,int c): name(a),acc_no(b),balance(c)
{

}
  void display()
  {
    cout<<name<<" "<<acc_no<<" "<<balance<<endl;
  }

//Copy constructor
customer A4(customer &B)
{
   name=B.name;
   acc_no=B.acc_no;
   balance=B.balance;
}

};

int main(){
customer A1;
A1.display();
customer A2("akansha",4578,344982); //file open
A2.display();
customer A3("shikha",8372);
A3.display();
customer A4(A3);
A4.display();
customer A5;
A5=A3;
A5.display();
}