//	functions of 2D array
//	1. to form array
//	nested funtion = print value
# include <iostream>
using namespace std;
int main()
{ int size1, size2;
	cout<<"enter the size of rows"<<endl;
	cin>>size1;
	cout<<"enter the size of colounms"<<endl;
	cin>>size2;
char x[size1][size2];
	int sizee=size1-1;
	int sizeee=size2-1;
	
	for (int i=0; i<=sizee; i++)
		{	int n=i+1;
		cout<<"row "<<n<<endl;
		for (int j=0; j<=sizeee; j++)
			{ 	int m=j+1;
				cout<<"colounm "<<m<<endl;
				cin>>x[i][j];
			}
		}

	
	cout<<"the values are"<<endl;
	for (int i=0; i<=sizee; i++)
		{
		for (int j=0; j<=sizeee; j++)
			{ cout<<x[i][j];
			}
			cout<<endl;
		}

}
