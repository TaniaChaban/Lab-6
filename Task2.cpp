#include<iostream>
#include <conio.h>
using namespace std;
 
void Discount(int m)
{
 if( m>=1000 && m<=2000 )
 {
  std::cout << "Discount 5%, you pay for it - " << m * 0.95<<std::endl;
 }
 else if ( m >=2000 && m<=5000 )
 {
  std::cout << "Discount 10%, you pay for it - " << m * 0.90 << std::endl;
 }
 else
 {
  std::cout << "You pay for all - " <<m<< std::endl;
 }
}
 
 
int main()
{
 setlocale(0, "");
 
 int money;
 
 std::cin >> money;
 
 Discount(money);
 
 return 0;
}

