# include <iostream>
using namespace std;
int main()
{ char x[2][2];
	for (int i=0; i<=2; i++)
		{ for (int j=0; j<=2; j++)
			{ cin>>x[i][j];
			}
		}
	
	for (int i=0; i<=2; i++)
		{ for (int j=0; j<=2; j++)
			{ cout<<x[i][j];
			}
		}
	cout<<endl;


}
