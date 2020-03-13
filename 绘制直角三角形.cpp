#include<iostream>
using namespace std;
int main() {
char a;　 
	int i,j,n;
	cout<<"请输入形状（数字）。"<<endl;
	cin>>a;
	cout<<"请输入层数。"<<endl;
	cin>>n;
	for (i=1; i<=n; ++i) {
		for (j=1; j<=i; ++j)
			cout<<a;
		cout<<endl;
	}
	return 0;
}

