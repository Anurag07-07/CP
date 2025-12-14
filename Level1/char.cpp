#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  char c;cin>>c;
  if (c>= 'a' && c<= 'z')
  {
    cout<<(char)(c-32)<<endl;
  }else{
    cout<<(char)(c+32)<<endl;
  }
  
  return 0;
}
