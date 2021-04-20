#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
 
int main()
{
    int n,m;
int temp = 0;
int sum = 0;
cout << "The number of elements nXm: \n";
cin >> n >> m;
int * pArr = new int[n];
int ** pMatr = new int *[n];
cout << "The number of elements nXm: \n";
int * pArr = new int[m];
int ** pMatr = new int *[m];
for (int i = 0; i < n; i++)
for (int i = 0; i < m; i++)


    {
        pMatr[i] = new int[n];
        for (int j = 0; j < n; j++)
        pMatr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cout << i << " " << "line" << " " << j << " " << "column" << " :";
            cin >> pMatr[i][j];
        }
        pArr[i] = pMatr[i][i];
    }
    
    cout << "res Array: ";
    for (int i = 0; i < n; i++)
    for (int i = 0; i < m; i++)
    {
 
        cout << pArr[i] << " ";
        sum += pArr[i] ;
    }
    cout << "summ Array: " << sum << endl ;
    for (int i = 0; i < n; i++)
    for (int i = 0; i < m; i++)
    delete[]pMatr[i];
delete[]pMatr;
}

