# include <iostream>
using namespace std;
int main()
{ int size, y, a, u, t;
	cout<<"enter the size"<<endl;
	cin>>size;
	y=size-1;
  int x[y];
  	cout<<"enter the values"<<endl;
  	for (int i=0; i<=y; i++)
  		{	cin>>x[i];
		}
	system ("CLS");
	cout<<"the given values are "<<endl;
	for  (int j=0; j<=y; j++)
		{	cout<<x[j]<<" ";
		}
	cout<<"enter 1 for asending sorted order"<<endl;
	cin>>u;
	system ("CLS");
	for (a=0; a<=y; a++)
		{ for (int b=0; b<=y; b++)
				{ if (x[a]<x[b])
					{ 	int ch=0;
						ch=x[a];
						x[a]=x[b];
						x[b]=ch;
					}
				}
		}
	cout<<"\n"<<"the sorted values are"<<endl;
	for (a=0; a<=y; a++)
		{ cout<<x[a]<<" ";
		}
	
	cout<<"enter 2 for asending sorted order"<<endl;
	cin>>t;
	system ("CLS");	
	
		for (a=0; a<=y; a++)
		{ for (int b=0; b<=y; b++)
				{ if (x[a]>x[b])
					{ 	int ch=0;
						ch=x[a];
						x[a]=x[b];
						x[b]=ch;
					}
				}
		}
	cout<<"\n"<<"the sorted values are"<<endl;
	for (a=0; a<=y; a++)
		{ cout<<x[a]<<" ";
		}



}
