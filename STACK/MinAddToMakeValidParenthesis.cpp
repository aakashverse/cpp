#include<bits/stdc++.h>
using namespace std;

/*int validparanthesis(char c[],int n)
{
    // BRUTE FORCE METHOD//
    int countOpen=0,countClosed=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]=='(')
        countOpen++;

        else
        countClosed++;
    }
    return abs(countOpen-countClosed);
}*/

int validparenthesis(char c[],int n)
{
    //BY STACK//
    stack<char>st;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]=='(')
        st.push(c[i]);

        else{
            if(st.empty())
            count++;

            else
            st.pop();
        }
    }
    return count;
}

int main()
{
     char c[6]={'(',')','(',')',')',')'};
    //cout<<validparanthesis(c,6)<<endl;
    
    cout<<validparenthesis(c,6);

}