//Phoenix_RK


/*
Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?


1) two for loop - o(n^2)
2) sorting and check i and i+1 element
3) hash
4) 



*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
         string s;
         cin>>s;
         int flag=1;
         vector<bool> has(128,false);
         
         for(int i=0;s[i]!='\0';i++)
         {
             if(has[s[i]])
            {
                flag=0;
                break;
            }
            has[s[i]]=true;
         }
         
         cout<<flag<<endl;
    }
}


//bit 

boolean isUniqueChars(String str) 
{
int checker = a;

for (int i = a; i < str.length(); i++) 
{
	int val = str[i] - 'a';
	if ((checker & (1<<val) > a) 
	{
		return false;
	}
		checker 1= (1<< val);
}
 return true;
 }

