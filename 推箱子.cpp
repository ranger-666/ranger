#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
using namespace std;
#define R 10 
#define C 10
int map[R][C] = { 0 };
int map1[10][10] = {
{ 0,0,1,1,1,0,0,0 },
{ 0,0,1,3,1,0,0,0 },
{ 0,0,1,0,1,1,1,1 },
{ 1,1,1,0,0,4,3,1 },
{ 1,3,4,4,0,1,1,1 },
{ 1,1,1,5,4,1,0,0 },
{ 0,0,0,1,3,1,0,0 },
{ 0,0,0,1,1,1,0,0 }
};
int map2[R][C]={
{1,1,1,1,1,0,0,0,0,0},
{1,5,0,0,1,0,0,0,0,0},
{1,0,4,4,1,0,1,1,1,0},
{1,0,4,0,1,0,1,3,1,0},
{1,1,1,0,1,1,1,3,1,0},
{0,1,1,0,0,0,0,3,1,0},
{0,1,0,0,0,1,0,0,1,0},
{0,1,0,0,0,1,1,1,1,0},
{0,1,1,1,1,1,0,0,0,0}
};
int map3[R][C]={
{ 0,0,0,1,1,1,1,1,1,1 },
{ 0,0,1,1,0,0,1,0,5,1 },
{ 0,0,1,0,0,0,1,0,0,1 },
{ 0,0,1,4,0,4,0,4,0,1 },
{ 0,0,1,0,4,1,1,0,0,1 },
{ 1,1,1,0,4,0,1,0,1,1 },
{ 1,3,3,3,3,3,0,0,1,0 },
{ 1,1,1,1,1,1,1,1,1,0 },
};
void Game_Menu();       
void Game_description();   
int DrawMap();              
void Move();                
int finish();    
void setmap(int n);  
void color(int m);   
BOOL flag = true;   
int pass=1;
int main(int argc, char** argv) 
{
 char c;
 Game_Menu();
 c = getch();
 setmap(pass);
 switch(c)
 {
  case 'Q':
  case 'q':
   return 0;
  case 'S':
  case 's':
   while (flag)                
   {
    system("cls");
    Game_description();
    DrawMap();
    Move();
    if(finish())
    {
     system("cls");
     DrawMap();
     printf("��Ϸʤ��!\n");
     system("pause"); 
     pass++;
     setmap(pass);
    }
   }
   break;
 }
}
void Game_Menu()   
{
 system("cls");
 cout << "/************************************\\\n";
 cout << "*                                    *\n";
 cout << "*            �� �� С �� Ϸ          *\n";
 cout << "*               �� �� ��             *\n";
 cout << "*         1.�� S �� s �� �� ʼ       *\n";
 cout << "*         2.�� Q �� q �� �� ��       *\n";
 cout << "*                                    *\n";
 cout << "\\***********************************/\n";
 _getch();
}
void Game_description()
{
 cout << "/************************************\\\n";
 cout << "*                                    *\n";
 cout << "*              �� �� �� ʾ           *\n";
 cout << "*        �������ƣ�  W   w   ��      *\n";
 cout << "*        �������ƣ�  S   s   ��      *\n";
 cout << "*        �������ƣ�  A   a   ��      *\n";
 cout << "*        �������ƣ�  D   d   ��      *\n";
 cout << "*                                    *\n";
 cout << "*        ��    ����  Q   q           *\n";
 cout << "*                                    *\n";
 cout << "*                                    *\n";
 cout << "\\***********************************/\n";
}
int DrawMap()  
{
 cout<<"�ؿ���"<<pass<<endl; 
 for (int i = 0; i < R; i++)
 {
  for (int j = 0; j < C; j++)
  {
   switch (map[i][j])
   {
   case 0:
    color(0xF);
    cout << "  ";  
    break;
   case 1:
    color(8);
    cout << "��";
    break;
   case 3:
    color(0xE);
    cout << "��";
    break;
   case 4:
    color(4);
    cout << "��";
    break;
   case 5:
    color(3);
    cout << "��"; 
    break;
   case 7:     
    color(6);   
    cout << "��";
    break;
   case 8:     
    color(3);
    cout << "��";
    break;
   default:
    break;
   }
  }
  cout << '\n';
 }
 return 0;
}
void Move()
{
 int r,c; 
 for(int i=0;i<R;i++)
 {
  for(int j=0;j<C;j++)
  {
   if(map[i][j]==5||map[i][j]==8)
   {
    r=i;
    c=j;
   }
  }
 }
 cout<<"����ǰ������Ϊ��("<<r<<","<<c<<")"<<endl;
 int ch;
 ch=_getch();
 switch(ch)
 {
  case 'W':
  case 'w':
  case 72:
   if(map[r-1][c]==0||map[r-1][c]==3)
   {
    map[r-1][c]+=5;
    map[r][c]-=5;
   } 
   else if(map[r-1][c]==4||map[r-1][c]==7)
   {
    if(map[r-2][c]==0||map[r-2][c]==3)
    { 
     map[r-2][c]+=4;
     map[r-1][c]+=1;
     map[r][c]-=5;
    }
   }
   break;
  case 'S':
  case 's':
  case 80:
   if(map[r+1][c]==0||map[r+1][c]==3)
   {
    map[r+1][c]+=5;
    map[r][c]-=5;
   }
   else if(map[r+1][c]==4||map[r+1][c]==7)
   {
    if(map[r+2][c]==0||map[r+2][c]==3)
    {
     map[r+2][c]+=4;
     map[r+1][c]+=1;
     map[r][c]-=5;
    }
   }
   break;
  case 'A':
  case 'a':
  case 75:
   if(map[r][c-1]==0||map[r][c-1]==3)
   {
    map[r][c-1]+=5;
    map[r][c]-=5;
   }
   else if(map[r][c-1]==4||map[r][c-1]==7)
   {
    if(map[r][c-2]==0||map[r][c-2]==3)
    {
     map[r][c-2]+=4;
     map[r][c-1]+=1;
     map[r][c]-=5;
    }
   }
   break;
  case 'D':
  case 'd':
  case 77:
   if(map[r][c+1]==0||map[r][c+1]==3)
   {
    map[r][c+1]+=5;
    map[r][c]-=5;
   }
   else if(map[r][c+1]==4||map[r][c+1]==7)
   {
    if(map[r][c+2]==0||map[r][c+2]==3)
    {
     map[r][c+2]+=4;
     map[r][c+1]+=1;
     map[r][c]-=5; 
    }
   }
   break; 
  case 'Q':
  case 'q':
   flag=false;
  default:
   break;
 }
}
int finish()
{
 for (int i=0;i<R;i++) 
 {
  for (int j=0;j<C;j++) 
  {
   if (map[i][j] == 4)
   {
    return 0;
   } 
  }
 }
 return 1;
} 
void setmap(int n){
 if (n == 1) {
  memcpy(map, map1, sizeof(map1));
 }
 if (n == 2) {
  memcpy(map, map2, sizeof(map2));
 }
 if (n == 3) {
  memcpy(map, map3, sizeof(map3));
 }
}
void color(int m) 
{
 HANDLE consolehend;
 consolehend = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(consolehend, m);
}
