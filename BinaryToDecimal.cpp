/*convert binary to decimal*/ 
#include <iostream>
#include <cmath>
using namespace std;

/*Declare options*/
chrOption1 = '1';
chrOption2 = '2';
/*Request their option*/
cout<<"Please choose your conversion";
cin>> chrOption;
/*Create condition 1*/
if (ChrOption = chrOption1;)
{/*function prototype*/ 
int convert(long long);
/*Option 1*/
int main() {
  long long n;
  cout << "Enter a binary number: ";
  cin >> n;
  cout << n << " in binary = " << convert(n) << " in decimal";
  return 0;
}

/*function definition*/
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;}
}
/*Decimal To Binary*/ 
/*Option 2*/ 
/*Create Condition 2*/
else if (chrOption = chrOption2;)
{
  int main()  
{  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}
}  