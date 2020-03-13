#include<iostream>
using namespace std;
int gcd(int,int);
int main(){
	int m,n;
	cin>>m>>n;
	cout<<"最大公因数是"<<gcd(m,n)<<endl;
	return 0;
}
int gcd(int m,int n){
	return n==0? m:gcd(n,m%n);
}
