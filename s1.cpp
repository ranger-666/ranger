#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	char st[200];
	char A,B;
	int i,n=0;
	while((st[n++]=getchar())!='\n');
	A=getchar();getchar();B=getchar();
	for (i=0;i<n;i++)
	  if (st[i]==A) cout<<B;
	  else cout<<st[i];
	cout<<endl;
	return 0;
}
