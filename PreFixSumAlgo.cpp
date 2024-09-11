// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int  findThePrefixSum(vector<int>ayush,int l,int r)
{
  if (l==0)
  {
      return ayush[0];
      
  }
  else
  {
      return ayush[r]-ayush[l-1];   
  }
}
int main() {
  vector<int>ayush;
  ayush={3,6,2,8,9,2};
  vector<int>prakash(6);
  prakash[0]=ayush[0];
  for(int i=1;i<ayush.size();i++)
  {
      
      prakash[i]=prakash[i-1]+ayush[i];
  }
  cout<<"The sum is:"<<findThePrefixSum(prakash,0,0)<<endl;
  for(int i=0;i<prakash.size();i++)
  {
      cout<<prakash[i]<<endl;
  }
    return 0;
}
