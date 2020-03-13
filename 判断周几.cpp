#include<iostream>
using namespace std;
int main() {
	int weekday;
	cout<<"请输入一到七的一个数字。";
	cin>>weekday;
	switch(weekday)
	{
		case 1:cout<<"Monday——周一"<<endl;break;
		case 2:cout<<"Tuesday——周二"<<endl;break;
		case 3:cout<<"Wednesday——周三"<<endl;break;
		case 4:cout<<"Thursday——周四"<<endl;break;
		case 5:cout<<"Friday——周五"<<endl;break;
		case 6:cout<<"Saturday——周六"<<endl;break;
		case 7:cout<<"Sunday——周天"<<endl;break;
		default:cout<<"输入错误！"<<endl;
	} 
}



