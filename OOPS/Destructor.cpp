#include<bits/stdc++.h>
using namespace std;

class customer
{
   string name;
   int *balance;
   
   public:

 customer()
 {
    name="4";
     cout<<"Constructor is "<<name<<endl;
 }


//Constructor order wise
customer(string name)
{
    // name="Akash";
    // balance=new int;
    // *balance=1000;
    // cout<<"constructor is callled"<<endl;
    this->name=name;
    cout<<"Constructor is "<<name<<endl;

}

//Destructor is reverse order
~customer()
{
    //delete the memory occupied dynamically when program ends
    // delete balance;
    //    cout<<"destructor is callled"<<endl;
    cout<<"Destructor is "<<name<<endl;
}

};

// void display()
// {
//     cout<<name<<" "<<balance<<" "<<endl;
// }

int main()
{
  customer A1("1"),A2("2"),A3("3");
  customer *A4=new customer;  //Object creation dynamically
  delete A4;

}