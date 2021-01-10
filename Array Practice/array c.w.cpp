# include <iostream>
using namespace std;
int main()
{ int x[10]={5,3,19,8,2,10,13,17,1,4};
  for (int i=0; i<=9; i++)
      { 
      for (int j=0; j<=9; j++)
      { int y; 
	  y=x[i];
        x[i]=x[j];
        x[j]=x[i];
        
	  } cout<<x[j]<<endl;
      }


}
