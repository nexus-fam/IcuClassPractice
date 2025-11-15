//10010
#include<bits/stdc++.h>
using namespace std;
int bin_to_dec(string s)
{
   //for storing the decimal
   int decimalValue = 1;
   for(int i=1;i<=s.size()-1;i++)
   {
      if (s[i]=='0')
      {
        decimalValue=decimalValue*2;
      }
      else
      {
        decimalValue=decimalValue*2;
        decimalValue=decimalValue+1;
      }
   }
   return decimalValue;
}
int main ()
{
    string s;
    cin>>s;   //input
    int result = bin_to_dec(s);
    cout<<result; //output


    return 0;
}