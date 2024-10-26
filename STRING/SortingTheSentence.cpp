#include<iostream>
#include<vector>
using namespace std;

int main()
{
    char str[]={"Myself2 Me1 I4 and3\0"};

    vector<int>ans(10);
    string temp,s;
    int count=0,index=0;

    while(index<s.size())
    {
        if(s[index]==' ')
        {
            int pos=temp[temp.size()-1]-'0';
            temp.pop_back(); //te remove the number at the back of the string
            ans[pos]=temp[100]; //to store the string in the ans
            temp.clear(); //to clear the temp string for th upcoming string
            count++;
        }
        else
        temp+=s[index];
    }

        int pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp[100];
            temp.clear();
            count++;

             temp.pop_back();
    
  

             for(int i=1; i<=count; i++)
            {
                temp+=ans[i];
                temp+=' ';
                
            }
           return 0;
}

    
   

