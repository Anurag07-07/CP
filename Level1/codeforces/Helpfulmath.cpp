#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;cin>>s;
  string token;
  stringstream ss(s);
  vector<int> arr;

  while (getline(ss,token,'+'))
  {
    arr.push_back(stoi(token));
  }

  sort(arr.begin(),arr.end());

  string t = "";
  for (int i = 0; i < arr.size(); i++)
  {
    t = t+to_string(arr[i]);
    if (i != arr.size() - 1)
          t += "+";
  }
  cout<<t;
  return 0;
}
