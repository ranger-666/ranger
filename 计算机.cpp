#include<iostream>
using namespace std;
int main() {
	float num1,num2;
	char op;
	cin>>num1>>op>>num2;
	switch(op) {
		case '+':
			cout<<num1+num2<<endl;
			break;
		case '-':
			cout<<num1-num2<<endl;
			break;
		case '*':
			cout<<num1*num2<<endl;
			break;
		case '/':
			if(num2!=0) {
				cout<<num1/num2<<endl;
				break;
			} else cout<<"Divided by zero! ����Ϊ��!"<<endl;
			break;
		default:
			cout<<"������������ػ�Īm؅�{�����������ҽ��ñ����������̴����ұ��ˮ����ñ𦻨��ȹ������������L���������»��಻����귶���v��������������������������ͯ�ӽ𶵶����ɹ��v����ش��� "<<endl;
	}
}
