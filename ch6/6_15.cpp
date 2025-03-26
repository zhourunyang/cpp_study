#include<iostream> 
#include<cstring>
using namespace std; 
void fun(char *str)
{ char a[100],*s=str;
int i=0;
while(*s)
 { if('0'<=*s&&*s<='9')
 { a[i++]='-';
 a[i++]=*s;
 } 
 else a[i++]=*s;
 s++;
 } 
a[i]='\0'; 
strcpy(s,a);
}

int main()
{ char s[80]="A1B23C"; 
fun(s);
 cout<<s<<endl; 
 return 0; 
}