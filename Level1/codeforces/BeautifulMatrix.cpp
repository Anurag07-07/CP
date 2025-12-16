#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int mat[5][5];
  int posx=-1;
  int posy = -1;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin>>mat[i][j];
      if (mat[i][j]==1)
      {
        posx = i;
        posy = j;
      }
      
    }
    
  }
  
  cout<<abs(posx-2)+abs(posy-2);

  return 0;
}
