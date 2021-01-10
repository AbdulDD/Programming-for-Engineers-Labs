# include <iostream>
using namespace std;
int main()
{ int x[4]={34,54,6,5};
  int y[4]={98,44,5,4};
  int z[1]={0};
  z[0]=y[2];
  y[2]=x[2];
  x[2]=z[0];
  cout<<"values for x"<<endl;
  for (int i=0; i<=3; i++)
  {cout<<x[i]<<endl;}
  cout<<"values for y"<<endl;
  for (int j=0; j<=3; j++)
  {cout<<y[j]<<endl;}
  
}
