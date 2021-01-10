//Consider the following declaration: (2)
//int list[] = {3, 8, 10, 13, 6, 11};
//a. Write a C++ code that will output the value stored in each component of list.
//b. Write a C++ code that will set the values of the first five components of
//list as follows: The value of the ith component is the value of the ith component minus three times the value of the (i+1)th component.

# include <iostream>
using namespace std;
int main()
{ 	int list[]={3,8,10,13,6,11}, i;
	for ( i=0; i<=5; i++)
		{ cout<<list[i]<<" "<<endl;
		}
	for (i=0; i<=4; i++)
		{ list[i]=list[i+1];
		}
	for (i=0; i<=4; i++)
		{ cout<<list[i]<<" ";
		}


	
}
