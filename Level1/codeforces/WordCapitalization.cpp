#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;cin>>s;
  char c = s[0];
  if (c>='A' && c<='Z')
  {
    cout<<s;
  }else{
    s[0] = toupper(s[0]);
    cout<<s;
  }
  return 0;
}
