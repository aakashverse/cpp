#include<bits/stdc++.h>
using namespace std;
//Starters 142-D(4)  Q3//
/*NOte-->here cuting is considered from the center this means odd no of slices can not be possible*/
int chefpizzaslice(int X)
{
     //if slices are odd-->equal division is not possible & we cannot count smaller pieces
    if(X%2!=0)
    {
    cout<<"number of slices must be even"<<endl;
    return -1;
    }

    //int smallpieces=0;
    //pizza equal part me divide hoga-->jab X 2 ki powers me hoga
    if((X&(X-1))!=0)
    {
        //X ke nearest 2 ki pow nikalna h
        int powof2=pow(2,(int)log2(X));
        return 2*(X-powof2);   //2 ko multiply krna padega since question is made while considering 2 which is 2^1 nhi to pow -1 kro//
    }   
}
int main()
{
    int X;
    cout<<"Enter the number of pizza slices: ";
    cin>>X;

    cout<<chefpizzaslice(X)<<endl;
}