 // header file
  # include <iostream>
  using namespace std;
 
 
 // prototype
 void display();
 void decending();
 void aecending();
 void search();
 void maximum_num();
 void miimum_num();
 
 
 // main function
 int main()
 { int size;
 int array[size];
   cout<<"enter array size"<<endl;
 	cin>>size;
   
   cout<<"enter the values of array"<<endl;
   for (int i=0; i<=size; i++)
   		{ cin>>array[i];
		   }
	cout<<"array values are here"<<endl;
   for (int i=0; i<=size; i++)
   		{ cout<<array[i]<<endl;
		   }
		   
		   display();
	cout<<"array values are here"<<endl;
   for (int i=size; i>=0; i--)
   		{ cout<<array[i]<<endl;
		   }
}


// display
 void display()
 { int size;
 int array[size];
 for (int i=0; i<=size; i++)
 		cout<<array[i];
 
 
 
 }
  
