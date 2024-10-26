#include<iostream>
using namespace std;

class Human
{
    string Religion,color;
    public:
    string name;
    int age,weight;
};

class student:protected Human
{
    private:
    int roll_number,fees;

    public:

    student(string name,int age,int weight,int roll_number,int fees)
    {
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<fees<<endl;
    }
};

class Teacher:public Human
{
     int salary,id;
};

int main()
{
  student A("Akash",10,47,23207,300);
    A.display();
    Teacher B;
    B.name="Gudu";
}