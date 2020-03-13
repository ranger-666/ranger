#include<cstdio>
#include<cmath>
int prime(int x);
int main() {
	int n;
	scanf("%d",&n);
	if (prime(n))
		printf("%s\n","是质数");
	else
		printf("%s\n","不是质数");
}
int prime(int x) {
	int j;
	if (x==2) return 1;
	j=2;
	while(j<=sqrt(x)&&x%j!=0) j++;
	if (x%j==0) return 0;
	else return 1;
}
