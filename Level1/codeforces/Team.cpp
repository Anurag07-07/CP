#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int min = 0; 
  int t;cin>>t;
  while (t--)
  {
    int count = 0;
    int a,b,c;cin>>a>>b>>c;
    if (a==1) count++;
    if (b==1) count++;
    if (c==1) count++;
    if (count>=2) min++;
  }
  cout<<min;
  
  return 0;
}
