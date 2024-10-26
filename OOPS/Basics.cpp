#include<iostream>
using namespace std;

//SAME AS STRUCTURES in C--> user define datatype

class Student
{
    public: //ACCESS MODIFIER
    string name;
    int roll_no;
    string grade;
    int age;
};

//Function Getter &Setter
// public:
 /*void setname(string S)
 {
     if(S.size()==0)
     {
         cout<<"Invalid name: ";
         return;
     }
     name=S;
 }
 int getrollno()
 {
     return rollno;
 }

 string getgrade(int pin)
 {
     if(pin==123)
     return grade;

     return " ";
 };*/


int main()
{
Student *S=new Student;
(*S).name="AAKASH";
(*S).roll_no=23207;
(*S).grade="A+";
(*S).age=01;


cout<<S->name<<" ";
cout<<S->roll_no<<" ";
cout<<S->grade<<" ";
cout<<S->age<<" ";




 /*s1.name="AAKASH YADAV";
 s1.rollno=23207;
 s1.grade="A1";

//setter & getter
 S1.setname("");
 S1.setrollno(07);
 S1.setgrade("A+");

 cout<<S1.getrollno()<<endl;
 cout<<S1.getgrade(1234)<<endl;*/

}