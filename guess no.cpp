#include <iostream>
#include <math.h>
using namespace std; 
int main() {
int a=rand()%100;
int n; 


cout<<"enter no";
top:
cin>>n; 
if (n>a)
{
    cout<<"think smaller value ";
    goto top;
}
else if(n<a)
{cout<<"think larger value";
goto top; }
else if (n==a)
cout<<"you guessed the right number";
return 0; }