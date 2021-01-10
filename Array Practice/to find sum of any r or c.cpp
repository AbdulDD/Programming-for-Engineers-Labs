//	 to find the sum of any row

# include <iostream>
using namespace std;

void sum1();
void mul1();
void sum2();
void mul2();

int main()
{ 	int x;
	cin>>x;
	switch(x)
		{
			case 1: sum1(); break;
			case 2: sum2(); break;
			case 3: mul1(); break;
			case 4: mul2(); break;
		}



}

void sum1()
{ int x[2][2]= {{1,2},{6,7}}, sum=0;
	for (int i=0; i<=0; i++)
		{ for (int j=0; j<=1; j++)
			{ sum=sum+x[i][j];
			} cout<<sum<<endl;
		}

}

void mul1()
{ int x[2][2]= {{1,2},{6,7}}, sum=1;
	for (int i=0; i<=0; i++)
		{ for (int j=0; j<=1; j++)
			{ sum=sum*x[i][j];
			} cout<<sum<<endl;
		}

}


void mul2()
{ int x[2][2]= {{1,2},{6,7}}, sum=1;
	for (int i=0; i<=1; i++)
		{ for (int j=0; j<=0; j++)
			{ sum=sum*x[i][j];
			} 
		} cout<<sum<<endl;
}

void sum2()
{ int x[2][2]= {{1,2},{6,7}}, sum=0;
	for (int i=0; i<=1; i++)
		{ for (int j=0; j<=0; j++)
			{ sum=sum+x[i][j];
			} 
		} cout<<sum<<endl;
}
