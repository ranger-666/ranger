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
	cout<<"迅捷英语小词典(兼小型计算机)"<<endl;
	cout<<"欢迎来到本应用程序页面，在这里，您可以--"<<endl;
	cout<<"进行小型的计算(￣▽￣)／"<<endl;
	cout<<"查一些常用的单词(〃'▽'〃)"<<endl;
	cout<<"以及……"<<endl;
	cout<<"神秘功能(°Д°)"<<endl;
	cout<<"怎么样，你准备好了吗(￣▽￣)~*"<<endl;
	cout<<"来自小捷的提示：输入任意键并按回车即可登录."<<endl;
	cin>>a;
	if (a==1) cout<<"登陆成功!"<<endl; 
    cout<<"词典："<<endl;cout<<"亲爱的用户，您可以输入一到七的数字，词典可以帮您翻译这是星期几。"<<endl;cin>>weekday;
	switch(weekday)
	{
		case 1:cout<<"Monday——周一"<<endl;break;
		case 2:cout<<"Tuesday——周二"<<endl;break;
		case 3:cout<<"Wednesday——周三"<<endl;break;
		case 4:cout<<"Thursday——周四"<<endl;break;
		case 5:cout<<"Friday——周五"<<endl;break;
		case 6:cout<<"Saturday——周六"<<endl;break;
		case 7:cout<<"Sunday——周天"<<endl;break;
		case 8:cout<<"哼￣へ￣隐藏功能被你发现了！"<<endl;cout<<"隐藏功能："<<endl; cout<<"输入０到９的一个数字，和层数，可以绘制一个直角三角形。"<<endl;cout<<"请输入形状（数字）。"<<endl;cin>>a2;cout<<"请输入层数。"<<endl;cin>>n2;
		for (i2=1; i2<=n2; ++i2) {
		for (j2=1; j2<=i2; ++j2)
			cout<<a2;
		cout<<endl;
	}  break; 
		default:cout<<"输入错误！╥﹏╥"<<endl;
	} 
}
