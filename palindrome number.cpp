#include <iostream>
using namespace std;

int main() {

  int n, rev=0,rem,org;

  cout << "Enter an integer: ";
  cin >> n;
  n=org;
  while(n != 0) 
  {
    rem= n % 10;
    rev = rev* 10 + rem;
    n=n/10;
  }
  if(rev==org)
  {
  	cout<<"this number is a palindrome number..";
  }
  else
  {
  	cout<<"this is not a palindrome number ..";
  }
  return 0;
}
