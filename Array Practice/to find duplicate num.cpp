// to find duplicate term.(array)
# include <iostream>
using namespace std;
int main()
{ int sum=0; int i;
  int x[31]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,13,20,21,22,23,24,25,26,27,28,29,30}; int n=465;
  for(int i=0; i<=30; i++)
     sum=sum+x[i];
     int a=sum-n;
	 { cout<<sum<<endl;
	 	cout<<"the duplicate term"<<endl;
	   cout<<a<<endl;
	 }

}
