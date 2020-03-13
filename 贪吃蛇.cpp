#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#define framex 5
#define framey 5
#define wide 20
#define high 20
int i,j,a[2];
void gotoxy(HANDLE hout,int x,int y){
    COORD pos;
    pos.X=x;
    pos.Y=y;
    SetConsoleCursorPosition(hout,pos);
}
void cover (HANDLE hout){
    gotoxy(hout,framex+wide,framey);
    printf("欢迎使用贪吃蛇游戏1.2");
    gotoxy(hout,framex+wide,framey+5);
    printf("开始游戏前请关闭中文输入法");
    gotoxy(hout,framex+wide*2,framey+20);
    printf( "游戏制作者：冬日暖阳"); 
    gotoxy(hout,framex+wide*2,framey+22);
    printf("制作时间：2020年2月"); 
    char a;
    a=getchar();
    system("cls");
} 
struct  Snake{
    int x[100];
    int y[100];
    int speed;
    int length;
    int count;
};
struct Food{
    int x;
    int y;
};
void makeframe(struct Snake snake){
    HANDLE hout=GetStdHandle(STD_OUTPUT_HANDLE);
    gotoxy(hout,framex+wide*2+5,framey);
    printf( "   贪吃蛇游戏"); 
    gotoxy(hout,framex+wide*2+5,framey+3);
    printf("使用方向键或wasd移动");
    gotoxy(hout,framex+wide*2+5,framey+5);
    printf("长按方向键可加速");
    gotoxy(hout,framex+wide*2+5,framey+7);
    printf("按任意键暂停,方向键继续");
    for(i=0;i<wide*2+1;i++){
        gotoxy(hout,framex+i,framey);
        printf("*");
    }
    for(i=0;i<wide*2+2;i++){
        gotoxy(hout,framex+i,framey+high);
        printf("*");
    }
    for(i=0;i<high;i++){
        gotoxy(hout,framex,framey+i);
        printf("*");
    }
    for(i=0;i<high;i++){
        gotoxy(hout,framex+wide*2+1,framey+i);
        printf("*");
    }
}
void infor(HANDLE hout,struct Snake* snake){
    gotoxy(hout,framex+wide*2+5,framey+15);
    printf("当前速度:%d",-snake->speed+500);
    gotoxy(hout,framex+wide*2+5,framey+17);
    printf("当前得分:%d",snake->count);
    gotoxy(hout,framex+wide*2+5,framey+19);
    printf("当前长度:%d",snake->length);
} 
void initsnake(struct Snake *snake){
    snake->x[0]=framex+2;
    snake->y[0]=framey+high/2;
    snake->count=0;
    snake->length=3;
    snake->speed=400;
    for(i=1;i<snake->length;i++){
        snake->x[i]=snake->x[i-1]+1;
        snake->y[i]=snake->y[i-1];
    }
}
void printsnake(HANDLE hout ,struct Snake *snake){
    for(i=0;i<snake->length;i++){
        gotoxy(hout,snake->x[i],snake->y[i]);
        if(i==snake->length-1) 
            printf("头");
        else if(i==0)
            printf("尾");
        else 
            printf("身"); 
    }
}
void movesnake(HANDLE hout,struct Snake *snake){
    gotoxy(hout,snake->x[0],snake->y[0]); 
    printf("  ");
    for(i=1;i<snake->length;i++){
        snake->x[i-1]=snake->x[i];
        snake->y[i-1]=snake->y[i];
    }
} 
void printfood (HANDLE hout,struct Snake *snake,struct Food* food){
    srand((unsigned)time(NULL));
    while(1){
        food->x=rand()%(wide-2)+1;
        food->y=rand()%(high-2)+1;
        if(food->x==0&&food->y==0)
            continue;
        food->x=2*food->x+framex;
        food->y+=framey;
        for(i=0;i<snake->length;i++){
            if(food->x==snake->x[i]&&food->y==snake->y[i])
                break;
        }
        if(i==snake->length){
            gotoxy(hout,food->x,food->y);
            printf("食");
            break;  
        }
    }

}
void eatfood(HANDLE hout,struct Snake * snake,struct Food *food){
    if(snake->x[snake->length-1]==food->x&&snake->y[snake->length-1]==food->y){ 
        snake->length++;
        for(i=snake->length-1;i>0;i--){
            snake->x[i]=snake->x[i-1];
            snake->y[i]=snake->y[i-1];
        }
        snake->x[0]=a[0];      
        snake->y[0]=a[1];
        printfood(hout,snake,food);
        snake->count++;
        if(snake->count%3==0)
            snake->speed-=50;
    }
}
int ifdead(struct Snake* snake){
    if(snake->x[snake->length-1]==framex)
        return 0;
    if(snake->x[snake->length-1]==framex+wide*2)
        return 0;
    if(snake->y[snake->length-1]==framey)
        return 0;
    if(snake->y[snake->length-1]==framey+high)
        return 0;
    for(i=0; i<snake->length-1; i++) 
        if( snake->x[snake->length-1]==snake->x[i] && snake->y[snake->length-1]==snake->y[i] ) 
            return 0;
    return 1;
}
int main(){
    unsigned char ch =77;
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    cover(hout);
    struct Snake s, *snake=&s;
    struct Food  f,  *food=&f;
    makeframe(*snake);
    initsnake(snake);
    printfood(hout,snake,food);
    Sleep(500);
    while(1){
        infor(hout,snake);
        a[0]=snake->x[0];
        a[1]=snake->y[0];
        j=0;
        if(kbhit()){ 
            ch=getch();
            if(kbhit()){
                Sleep(20);
                j=1;
            }
        }
        switch(ch){
            case'W':
            case 'w' :
            case 72:{
                movesnake(hout,snake);
                snake->y[snake->length-1]-=1;
                break;
            }
            case'S':
            case 's':
            case 80:{
                movesnake(hout,snake); 
                snake->y[snake->length-1]+=1;
                break;
            } 
            case'A':
            case 'a':
            case 75:{
                movesnake(hout,snake);
                snake->x[snake->length-1]-=2;
                break;
            }
            case'D':
            case 'd':
            case 77:{
                movesnake(hout,snake);
                snake->x[snake->length-1]+=2;
                break;
            }
        }
        eatfood(hout,snake,food);
        printsnake(hout,snake);
        if(ifdead(snake)==0||ch==27||snake->speed==0){
            gotoxy(hout,framex+wide/2,framey-2);
            if(snake->speed==0)
                printf("恭喜你通关了！！!");
            else
                printf("糟糕 T_T");
            break;
        }

        if(j==0)
            Sleep(snake->speed);
        else 
            Sleep(20);
    }
    Sleep(3000);
    system("cls");
    if(snake->speed==0) 
        printf("\n\n\n\n\n\t\t\t哈哈，你赢了\n\n\t\t\t你得到了满分：24\n\n\n");
    else 
        printf("\n\n\n\n\n\t\t\t哈哈，你输了\n\n\t\t\t你的最终得分是：%d\n\n\n",snake->count); 
    Sleep(3000);
    return 0; 
} 
