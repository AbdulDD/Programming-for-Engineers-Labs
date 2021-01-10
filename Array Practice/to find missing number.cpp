// to find missing term.(array)
# include <iostream>
using namespace std;
int main()
{ int sum=0; int i;
  int x[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,28,29,30}; int actual_sum=465;
  for(int i=0; i<=29; i++)
     sum=sum+x[i];
     int a=actual_sum-sum;
	 { cout<<sum<<endl;
	 cout<<"the missing number is "<<a<<endl;
	   
	 }

}
