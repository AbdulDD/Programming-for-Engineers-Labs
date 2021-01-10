// to find intersection of two sorted arrays 
# include <iostream>
using namespace std;
int main()
{ 	int size, size1, m, n;
	cout<<"enter size of arrays"<<endl; 
	cin>>size1;
	
	int x[size1];
	int y[size1];
	cout<<"enter values of arrays, note atleast 1 value should be same."<<endl;
	cout<<"for array 1"<<endl;
	size=size1-1;
	for (int n=0; n<=size; n++)
		{ 	cin>>x[n];	
		}
	cout<<"for array 2"<<endl;	
	for (int n=0; n<=size; n++)
		{ 	cin>>y[n];	
		}
	
	cout<<"values for array 1 are "<<endl;
	for (int p=0; p<=size; p++)
		{ cout<<x[p]<<" ";
		}
	
	cout<<"\n"<<"values for array 2 are "<<endl;
	for (int p=0; p<=size; p++)
		{ cout<<y[p]<<" ";
		}
	
	cout<<"\n"<<"intersection"<<endl;
	for (int i=0; i<=size; i++)
		{ for (int j=0; j<=size; j++)
			{ if (x[i]==y[j])
				{ cout<<x[i];
				}
			}
		
		}	
}
