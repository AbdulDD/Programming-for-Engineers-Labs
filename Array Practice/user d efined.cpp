// user defined array.
// in function return is not possible so you have to cout(return) in fun and call it in main fun simply. (e.g array())
# include <iostream>
using namespace std;
int array1();
int array2();
int main()
{ int x,y,d;
   cout<<"enter 1 for array 1 and 2 for array 2"<<endl;
  cin>>d;
        switch(d)
        { case 1 : array2(); break;     
          case 2 : array1(); break;
		}
}


int array1()
{ int x[5]={1,23,45,65,6};
  for (int i=0; i<=4; i++)
  cout<<x[i]<<endl;
}

int array2()
{ int x[7]={1,23,45,65,6,45,6};
  for (int i=0; i<=4; i++)
  cout<<x[i]<<endl;
}
