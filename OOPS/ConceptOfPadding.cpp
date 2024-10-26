#include<iostream>
using namespace std;

//Concept of PADDING
class a
{
    //0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 
    //c p p p a a a a b p  p  p  p  p  p  p  d  d  d  d  d  d  d  d 
    int a;
    char b;
    double d; //8 ke multiple me space allocate hoga jaise int me 4 ke multiple me hota hai
  
};

int main()
{
    a obj;

    cout<<sizeof(obj)<<" ";
     
}