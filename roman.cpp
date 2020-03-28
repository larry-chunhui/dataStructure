class Solution {
public:
int romanToInt(string s) {
int sum=0,val;
for(int i=0;i<s.size();i++)
{

    if(s[i]=='I')
    {
        val=1;
    }
    
    if (s[i] == 'V') 
    {
        val=5;
    } 
    if (s[i]== 'X') 
    {
        val=10;
    }
    if (s[i]== 'L') 
    {
        val=50;
    } 
    if (s[i] == 'C') 
    {
        val=100;
    } 
    if (s[i]== 'D') 
   {
        val=500;
    } 
    if (s[i]== 'M') 
   {
        val=1000;
    } 
    if (s[i]== 'I'&&s[i+1]=='V') 
   {
        val=4;
       i++;
    }
    if (s[i]== 'I'&&s[i+1]=='X') 
   {
        val=9;
       i++;
    }
    if (s[i]== 'X'&&s[i+1]=='L') 
   {
        val=40;
       i++;
    }
    if (s[i]=='X'&&s[i+1]=='C') 
   {
        val=90;
       i++;
    }
    if (s[i]== 'C'&&s[i+1]=='D') 
   {
        val=400;
       i++;
    }
        if (s[i]== 'C'&&s[i+1]=='M') 
   {
        val=900;
       i++;
    }
sum+=val;

}

return sum;
}
};


#include<iostream>
using namespace std;
int main()
{

    string m="M";	
    Solution sol;    // Creating an object
    cout <<sol.romanToInt(m)<< "\n";  // Calling function
    
    return 0;
}



