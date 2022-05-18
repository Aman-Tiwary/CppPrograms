#include <iostream>
using namespace std;
#define flag 5
#define add(a,b) a+b
int main()
{
  int a=45,b=26;
  #if flag>4 
  cout <<"Value of flag is greater than 4"<<endl;
  #else
  cout<<"Value of flag is less than or equal to 4"<< endl;
  #endif
  cout<<"Sum of the numbers is "<<add(a,b)<<endl;
  cout<<"Program completed"<<endl;
  return 0;
}