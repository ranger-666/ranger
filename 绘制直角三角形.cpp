#include<iostream>
using namespace std;
int main() {
char a;�� 
	int i,j,n;
	cout<<"��������״�����֣���"<<endl;
	cin>>a;
	cout<<"�����������"<<endl;
	cin>>n;
	for (i=1; i<=n; ++i) {
		for (j=1; j<=i; ++j)
			cout<<a;
		cout<<endl;
	}
	return 0;
}

