#include<cstdio>
#include<ctime>
#include<iostream> 
int main(void)
{
time_t t;
t=time(&t);
printf("����ʼʱ��:%s\n",ctime(&t));
}
