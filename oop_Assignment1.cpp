#include <bits/stdc++.h>
using namespace std;
int fact(int n){
  if(n>1)
   return n*fact(n-1);
   else
     return 1;
}
string isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());

    if (S == P) {
        return "String is palindrome";
    }
    else {
        return "String is not palindrome";
    }
}
int main(){
  int n;
  cout<<"Factorial of a number:\n";
  cout<<"Enter any number: ";
  cin>>n;
  int f=fact(n);
  cout<<"Factorial of "<<n<<" is "<<f;
  cout<<"\n*****************************************\n";
  cout<<"TO check Palindrome or not\n";
  string S ;
  cout<<"Enter a string: ";
  cin>>S;
  cout << isPalindrome(S);

  return 0;
}
