//	largest num in row

# include <iostream>
using namespace std;

void largest();
void smallest();
int main()
{ 
int y;
cin>>y;
	switch (y)
		{	 case 1: largest(); break;
			 case 2: smallest(); break;
		}
		



}

void smallest()
{ int x[3][4]={{9,5,65,32},{2,45,65},{56,89,65,4}};
	int t,u;

	int i=0;
			t=0, u=0;
			for (int j=0; j<=3; j++)
				{ if (x[t][u]>x[i][j])
					u++;
				}	cout<<"samallest "<<x[t][u];




}


void largest()
{ int x[3][4]={{9,5,65,32},{2,45,65},{56,89,65,4}};
	int t,u;

	int i=0;
			t=0, u=0;
			for (int j=0; j<=3; j++)
				{ if (x[t][u]<x[i][j])
					u++;
				}	cout<<"largest "<<x[t][u];



}

