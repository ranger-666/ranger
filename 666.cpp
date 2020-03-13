#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<conio.h>
int main(int argc,char *argv[])
{
HANDLE hOut;
hOut=GetStdHandle(STD_OUTPUT_HANDLE);
int i;
for(i=1;i<255;i++)
{
SetConsoleTextAttribute(hOut,i);
printf("%3d\t",i);
 } 
 printf("\n");
 SetConsoleTextAttribute(hOut,0x0007);
 printf("ÑÝÊ¾½áÊø\n");
} 
