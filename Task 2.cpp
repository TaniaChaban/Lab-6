#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
int main()
{
	srand(time(NULL));
    int n=0,m=0,a=0,b=0;
    int i,j;
    int countZero=0;
    cout<<"total number of lines"<<"\n";
    cin>>n;
	cout<<"total number of columns"<<"\n";
    cin>>m;
    cout<<"\n\n enter the interval limits a and b:\n";
    
    while (a>=b)
        {
           cin>>a;
           cin>>b;
           cout<<"\n a="<<a<<" b="<<b;
        }
    {
     int** array = new int*[n]; 
     cout<<"\n\n initial array :\n"; 
     bool zero [m];
     for (int i=0;i<n;i++)
	 array[i] = new int[m]; 
     cout<<"\n";
     {zero[i]=false; cout<<zero[i]<<"\t";}
     array[i][j]=rand()%(b-a+1)+a;
     cout<<array[i][j]<<"\t";
     for (i=0;i<m;i++)
                  { 
				    cout<<endl; 
                    for (j=0;j<n;j++) 
                    {cout<<array[i][j]<<"\t";
                    if (array[i][j]==0)   zero[i]=true;}
                    cout<<"flag=  "<<zero[i]<<"\t";
                   }
         cout<<endl<<endl<<"Massiv: "<<endl;
         cout<<endl;
         for (int i=0;i<m;i++)   
         cout<<zero[i]<<"\t";
         cout<<endl<<"number lines whithout 0 : "<<endl;
         for ( i=0;i<m;i++)
         if(zero[i]==true) cout<<endl<<i<<endl;
        
    }
	return 0;
}

