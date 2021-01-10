# include <iostream>
using namespace std;
int main()
{ int x[4]={3,8,6,5};
  int y[4]={9,0,8,7};
  int z[4]={0,0,0,0};
  
  for (int i=0; i<4; i++)
 {
   z[i]=y[i];
   y[i]=x[i];
   x[i]=z[i];
 }
   cout<<"values for x"<<endl;
 for (int i=4; i>=0; i--)
     { cout<<x[i]<<endl;}
     
    cout<<"values for y"<<endl;
 for (int i=0; i<4; i++)
     { cout<<y[i]<<endl;}
}
