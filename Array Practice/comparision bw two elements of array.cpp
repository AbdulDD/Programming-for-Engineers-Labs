// comparision between the any two elements of array
# include <iostream>
using namespace std;
int main()
{ int a, b,c;
cout<<"enter 1st num of array"<<endl;
cin>>a;
cout<<"enter 2nd num of array"<<endl;
cin>>b;
cout<<"enter 3rd num of array"<<endl;
cin>>c;
 int x[3]={a,b,c};

  if (x[0]<x[1])
    { if (x[2]<x[1])
        { cout<<x[1]<<" is the greatest."<<endl;
		   }
	  else
	    { if (x[1]<x[2])
	         { cout<<x[2]<<" is the greatest."<<endl;
			 }
		}
	      }
  else
    {
	  if (x[0]>x[1])
      { if (x[2]<x[0])
        { cout<<x[0]<<" is the greatest."<<endl;
		   }

		}
	      }
	 
  
    if  (x[0]<x[1])
     { cout<<x[1]<<" is the greatest."<<endl;}

}
