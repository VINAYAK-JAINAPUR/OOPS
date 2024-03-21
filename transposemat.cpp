#include<iostream>
using namespace std;
int main()
{
 int a[2][2]={1,2,3,4};
 int b[2][2];
 cout<<"Original matrix: "<<endl;
  for(int i=0;i<2;i++)
 {
  for (int j=0;j<2;j++)
  {
     cout<<a[i][j]<<" ";
  }
  cout<<endl;
 }
 cout<<"Transpose matrix: "<<endl;
 for(int i=0;i<2;i++)
 {
  for (int j=0;j<2;j++)
  {
     b[i][j]=a[j][i];
     cout<<b[i][j]<<" ";
  }
  cout<<endl;
 }
 }
