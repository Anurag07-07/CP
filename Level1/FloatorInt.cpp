#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  float n;cin>>n;
  //Create an integer
  int n1 = n;
  //Create a float point number
  float n2 = n-n1;
  if (n2==0)
  {
    cout<<"int "<<n1;
  }else{
    cout<<fixed<<setprecision(3);
    cout<<"float "<<n1<<" "<<n2;
  }
  
  return 0;
}
