#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	char t[21],cname[11][21];
	int a,b;
	int weekday;
	int secret;
	int i2,j2,n2,a2;
	cout<<"Ѹ��Ӣ��С�ʵ�(��С�ͼ����)"<<endl;
	cout<<"��ӭ������Ӧ�ó���ҳ�棬�����������--"<<endl;
	cout<<"����С�͵ļ���(������)��"<<endl;
	cout<<"��һЩ���õĵ���(��'��'��)"<<endl;
	cout<<"�Լ�����"<<endl;
	cout<<"���ع���(�㧥��)"<<endl;
	cout<<"��ô������׼��������(������)~*"<<endl;
	cout<<"����С�ݵ���ʾ����������������س����ɵ�¼."<<endl;
	cin>>a;
	if (a==1) cout<<"��½�ɹ�!"<<endl; 
    cout<<"�ʵ䣺"<<endl;cout<<"�װ����û�������������һ���ߵ����֣��ʵ���԰��������������ڼ���"<<endl;cin>>weekday;
	switch(weekday)
	{
		case 1:cout<<"Monday������һ"<<endl;break;
		case 2:cout<<"Tuesday�����ܶ�"<<endl;break;
		case 3:cout<<"Wednesday��������"<<endl;break;
		case 4:cout<<"Thursday��������"<<endl;break;
		case 5:cout<<"Friday��������"<<endl;break;
		case 6:cout<<"Saturday��������"<<endl;break;
		case 7:cout<<"Sunday��������"<<endl;break;
		case 8:cout<<"�ߣ��أ����ع��ܱ��㷢���ˣ�"<<endl;cout<<"���ع��ܣ�"<<endl; cout<<"���룰������һ�����֣��Ͳ��������Ի���һ��ֱ�������Ρ�"<<endl;cout<<"��������״�����֣���"<<endl;cin>>a2;cout<<"�����������"<<endl;cin>>n2;
		for (i2=1; i2<=n2; ++i2) {
		for (j2=1; j2<=i2; ++j2)
			cout<<a2;
		cout<<endl;
	}  break; 
		default:cout<<"������󣡨i�n�i"<<endl;
	} 
}
