#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;cin>>t;
  while (t--)
  {
    string w;cin>>w;
    
    if (w.length()<=10)
    {
      cout<<w<<endl;
    }else{
      string ans = "";
      ans = ans+w[0]+to_string(w.length()-2)+w[w.length()-1];
      cout<<ans<<endl;
    }
  }
  return 0;
}