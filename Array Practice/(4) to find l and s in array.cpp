// to find largest and smallest num by if condition
# include <iostream>
using namespace std;
int main()



{ 
int x[6]={3,6,87,43,4,77};

int t=0;

		for(int j=0; j<=5; j++)
		{
			
			if(x[t]<x[j])	
				t++;	
				
		}
		
	
	
	cout<<x[t];

}

