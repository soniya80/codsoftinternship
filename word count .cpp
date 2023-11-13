#include <iostream>
#include <string.h>
using namespace std; 
int main()
{
    char a[1000];
    cout<<"enter string "<<endl<<endl; 
    cin.get(a,1000);
    int count=1;
int i=0; 
while(i<strlen(a)){
    if(a[i]==32)
    count++;
    i++;
}
if(a[0]==32)
cout<<"no word present ";
else
cout<<count<<" words present ";
return 0;
}