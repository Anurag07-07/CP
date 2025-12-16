#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;cin>>s;
  transform(s.begin(),s.end(),s.begin(),::tolower);

  int freq[26]={0};
  for (int i = 0; i < s.length(); i++)
  {
    freq[s[i]-'a']++;
  }

  int count = 0;
  for(int num:freq){
    if (num>=1) count++;
  }

  if (count%2==0)
  {
    cout<<"CHAT WITH HER!";
  }else{
    cout<<"IGNORE HIM!";
  }
  
  

  return 0;
}
