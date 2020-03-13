#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a[11][11];
	a[1][1]=1;
	int rownumber;
	cout<<"Please write a number(row).";
	cin>>rownumber;
	for (int i=2;i<=rownumber;++i){
		a[i][1]=1; a[i][i]=1;
		for (int j=2;j<=i-1;++j)
		 a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for (int i=1;i<=rownumber;++i){
		if (i!=10) cout<<setw(30-3*i)<<"";
		for (int j=1;j<=i;++j) cout<<setw(6)<<a[i][j];
		cout<<endl;
	}
}
