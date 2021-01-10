# include <iostream>
using namespace std;
int main()
{ 	int size;
	int array[size];
	cout<<"enter array size"<<endl;
	cin>>size;
	cout<<"enter value of array"<<endl;
	
	for (int i=0; i<=size; i++)
		{ 	cin>>array[i];
		}
	
	cout<<"values of array decleared"<<endl;
	for (int i; i<=size; i++)
		{ cout<<array[i]<<endl;
		}	
	
	
	
}
