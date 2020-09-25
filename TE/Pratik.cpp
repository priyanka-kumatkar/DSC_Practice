#include<bits/stdc++.h>         
using namespace std;
int Splits(string Str0)
{
   int count_L=0,count_R, split=0;
   int Distinct=0;
   map<char, int> char_map1;
   map<char, int> char_map2;

    for(int i=0;i<Str0.length();i++)
    {
       if(char_map1[ Str0[i] ] == 0)
        {
           Distinct++;
        }
          char_map1[ Str0[i] ]++;
    }
         count_R=Distinct;
    for(int i=0;i<Str0.length();i++)
    {
       if(char_map2[ Str0[i] ] == 0)
        {
           count_L++;
           char_map2[ Str0[i] ] = 1;
        }
           char_map1[ Str0[i] ]--;
        if(char_map1[ Str0[i] ] == 0)
        {
           count_R--;
        }

        if(count_L == count_R)
              split++;
           
    }
       return split;
}
int main()                                                  // reference taken from hemant's code
{
    string Str0;
       cout<<"Enter the String : ";
       cin>>Str0;

      int count = Splits(Str0);
       cout<<"No. of possible splits are : "<<count<<endl;

}