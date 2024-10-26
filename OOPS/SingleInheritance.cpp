#include<iostream>
using namespace std;

 class Human
 {
    protected:
    string name;
    int age;

    public:
    void work()
    {
      cout<<"I am working"<<endl;
    }
 };
   
   //Single Inheritance
   class Student:public Human
   {
    int roll_no,fees;

    public:
    Student(string name,int age,int roll_no,int fees)
    {
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        this->fees=fees;
    }

    void display()
{
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
}
 };

int main()
{
   Student A1("Akash",18,23207,99);
   A1.display();
}