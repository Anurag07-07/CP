// #include<bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int arr[] = {1,2,1};

//   int n = sizeof(arr)/sizeof(arr[0]);
  
//   int ans[2*n];
//   for (int i = 0; i < n; i++)
//   {
//     ans[i] = ans[n+i] = arr[i];
//   }

//   for (int i = 0; i < 2*n; i++)
//   {
//     cout<<ans[i]<<" ";
//   }
  
   
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  vector<int>  arr = {2,0,2,1,1,0};
  int j = 0;
  int i = 0;
  int k = arr.size()-1;

  while (j<k)
  {
    if (arr[j] == 0)
    {
      swap(arr[i],arr[j]);
      i++;j++;
    }
    if (arr[j]==1)
    {
      j++;
    }else{
      swap(arr[j],arr[k]);
      k--;
    }
  }
  

  return 0;
}
