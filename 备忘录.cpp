#include<cstdio>
#include<ctime>
#include<iostream> 
int main(void)
{
time_t t;
t=time(&t);
printf("程序开始时间:%s\n",ctime(&t));
}
