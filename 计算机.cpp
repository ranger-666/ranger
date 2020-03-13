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
			} else cout<<"Divided by zero! ³ýÊýÎªÁã!"<<endl;
			break;
		default:
			cout<<"îóÛ÷óíóóóÄîàØ»¹ÄªmØ…ú{ð¯â³õô õ õÍÅñ½¹Ò½õá¡Ã±ú‡ÃáÂÝîä×ÏÌ´éÒÙßÒ±ÌúË®¾§ÙçÃ±ð¦»¨´äÈ¹¾ð»ê¶áÆÇæ³æÃôÁíLî¦ïÉîáêªÅÄ÷Â»§Êà²»ó¼ñçñê·¶ó»·ÉÒv´¹ó™Ãáì¼îàóÒ÷Ò÷ÑõùéÒÍÕâ¡â¥ÅþÉáÍ¯×Ó½ð¶µ¶´ÙîôÉ¹ÄÓvóöÇúØ´ð·ÒÄ "<<endl;
	}
}
