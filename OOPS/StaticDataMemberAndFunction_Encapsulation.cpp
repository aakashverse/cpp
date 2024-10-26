#include<bits/stdc++.h>
using namespace std;
//const keyword homework 
 class customer
 {
    string name;
    int balance,acc_no;
    static int total_customer;
    static int total_balance;
    public:

    customer(string a,int b,int c)
    {
        name=a;
        balance=b;
        acc_no=c;
        total_customer++;
        total_balance+=balance;
    }

//static member function
static void acceStatic()
{
    cout<<"total number of customers: "<<total_customer<<endl;
    cout<<"Total Balance: "<<total_balance<<endl;
}

void deposit(int amount)
{
  if(amount>0)
  {
  balance+=amount;
  total_balance+=amount;
  }
}

void withdraw(int amount)
{
    if(amount<=balance && amount>0)
    {
        balance-=amount;
        total_balance-=amount;
    }
}
    void display()
 {
    cout<<name<<" "<<balance<<" "<<acc_no<<" "<<total_customer<<endl;
 }

 void display_total()
 {
    cout<<total_customer<<endl;
 }

 };
 

 int customer::total_customer=0;
  int customer::total_balance=0;

int main()
{
    customer A1("Akash",1000,123);
     customer A2("Guddu",2000,434);
    // A1.display();
    customer A3("Tom",3000,644);
    // A2.display();
    // A2.display_total();
    // A3.display();
   A1.deposit(2000);
   A2.withdraw(1000);
   customer::acceStatic();


}