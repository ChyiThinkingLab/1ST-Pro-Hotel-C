#include <stdio.h>
#include <stdlib.h>	//使用system函数时加此命令行
#include <string.h>
#include<conio.h>	//使用getch函数时加此命令行

int dan=888,shuang=1888,tao=8888;//初始房间价格
int sdan=200,sshuang=600,stao=20;//初始房间数量
int Day;				//住宿天数
int num=0;				//客户数量

struct YHXX				//客户信息
{
    char ID[18];
    char name[10];
    char sex;			//性别
    int rooms;			//房间数
    char rooml;			//房间类型
    int rday[3];		//入住日期
    int sday;			//住宿时间
    long dingdanhao;	//订单号
};
struct YHXX yhxx[100];

void zhucaidan()		//主菜单
{

	printf("\n\t\t||====================================||");
	printf("\n\t\t||------------------------------------||");
	printf("\n\t\t||-------------- Welcome -------------||");
	printf("\n\t\t||--------- Hotel California ---------||");
	printf("\n\t\t||-------------- system --------------||");
	printf("\n\t\t||------------------------------------||");
	printf("\n\t\t||====================================||");
//	getch();	//等待输入一个字符，但字符不显示在屏幕上，也不等待回车符

	system("cls");	//清屏
	printf("\n");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|----------Please input(0-2)---------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|             1.用户客房管理         ||");
	printf("\n\t\t|             2.商户客房管理         ||");
	printf("\n\t\t|             0.退出系统             ||");
	printf("\n\t\t|------------------------------------||");
}

void caidan1()//客户管理菜单
{
    printf("\n");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|------------ 用户客房管理 ----------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1:登记入住           ||");
	printf("\n\t\t|               2:退房申请           ||");
	printf("\n\t\t|               3:客房状态           ||");
	printf("\n\t\t|------------------------------------||");
}
void caidan2()//商户管理菜单
{
    printf("\n");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|------------ 商户客房管理 ----------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1:房价更改           ||");
	printf("\n\t\t|               2:增加客房           ||");
	printf("\n\t\t|               3:减少客房           ||");
	printf("\n\t\t|------------------------------------||");
}

void D()//更改房价
{
    int x;
	char ch;
AAA:
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- 房价更改 ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1: 单人间            ||");
	printf("\n\t\t|               2: 标准间            ||");
	printf("\n\t\t|               3:总统套房           ||");
	printf("\n\t\t|------------------------------------||");
	printf("\t\t请输入房间类型和更改后价格: (中间用半角,区分)");
	scanf("%c,%d",&ch,&x);
	switch(ch)
	{
		case '1':dan=x;break;
		case '2':shuang=x;break;
		case '3':tao=x;break;
        default : goto AAA;
	}
	printf("\t\t更改后分别为:\n\t\t%d %d %d\n\t\t",dan,shuang,tao);
}
void E()//增加客房
{
    int x;
	char ch;
BBB:
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- 增加客房 ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1: 单人间            ||");
	printf("\n\t\t|               2: 标准间            ||");
	printf("\n\t\t|               3:总统套房           ||");
	printf("\n\t\t|------------------------------------||");
	printf("\t\t请输入房间类型和增加数量: (中间用半角,区分) ");
	scanf("%c,%d",&ch,&x);
	switch(ch)
	{
		case '1':sdan+=x;break;
		case '2':sshuang+=x;break;
		case '3':stao+=x;break;
        default : goto BBB;
	}
	printf("\t\t更改后分别为:%d %d %d\n\t\t",sdan,sshuang,stao);
}
void F()//减少客房
{
    int x;
	int sdan=200,sshuang=600,stao=20;
	char ch;
CCC:
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- 减少客房 ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1: 单人间            ||");
	printf("\n\t\t|               2: 标准间            ||");
	printf("\n\t\t|               3:总统套房           ||");
	printf("\n\t\t|------------------------------------||");
	printf("\t\t请输入房间类型和减少数量: (中间用半角,区分) ");
	scanf("%c,%d",&ch,&x);
	switch(ch)
	{
		case '1':sdan-=x;break;
		case '2':sshuang-=x;break;
		case '3':stao-=x;break;
        default : goto CCC;
	}
	printf("\t\t更改后分别为:%d %d %d\n\t\t",sdan,sshuang,stao);
}
void A()//入住客房
{
    char lroom;
    int sroom;
    int price=0; //价格
    printf("\t\t订房功能\n");
    DDD:
    printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- 入住客房 ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1: 单人间            ||");
	printf("\n\t\t|               2: 标准间            ||");
	printf("\n\t\t|               3:总统套房           ||");
	printf("\n\t\t|------------------------------------||");
    printf("\t\t请输入房间类型：");
    getchar();
    scanf("%c",&lroom);
    printf("\t\t数量：");
    scanf("%d",&sroom);
    switch(lroom)
    {
        case '1':price=sroom*dan;sdan-=sroom;break;
        case '2':price=sroom*shuang;sshuang-=sroom;break;
        case '3':price=sroom*tao;stao-=sroom;break;
        default:goto DDD;
    }
    if((lroom=='1'&&sroom<=sdan)||(lroom=='2'&&sroom<=sshuang)||(lroom=='3'&&sroom<=stao))
    {
		printf("\t\t请输入您的信息: \n");
		printf("\t\t姓名: ");
		scanf("%s",yhxx[num].name);
		getchar();
		printf("\t\t性别: (男：Y  女：X) :");
		scanf("%c",&yhxx[num].sex);
		printf("\t\t身份证ID: ");
		scanf("%s",yhxx[num].ID);
		printf("\t\t入住日期:(中间用半角,分隔) ");
		scanf("%d,%d,%d",&yhxx[num].rday[0],&yhxx[num].rday[1],&yhxx[num].rday[2]);
		printf("\t\t入住时间: ");
		scanf("%d",&yhxx[num].sday);
		printf("\t\t订单总额：%d\n",price*yhxx[num].sday);
		price=0;
		yhxx[num].rooms=sroom;
		yhxx[num].rooml=lroom;
		num++;
        printf("\t\t订购成功！\n");
    }
}
void B()//退房操作
{
    int i,j,t=0;
    char name1[10],ID1[18];
    printf("\t\t退房操作:\n");
    printf("\t\t请输入姓名: ");
    scanf("%s",name1);
    printf("\n\t\t请输入身份证号:");
    scanf("%s",ID1);
    for(i=0;i<num;i++)
    {
        if(strcmp(name1,yhxx[i].name)==0&&strcmp(ID1,yhxx[i].ID)==0)
        {
            for(j=i-1;i<num;j++,i++)
            {
				strcpy(yhxx[j].ID,yhxx[i].ID);
				strcpy(yhxx[j].name,yhxx[i].name);
				yhxx[j].sex=yhxx[i].sex;
				yhxx[j].rooms=yhxx[i].rooms;
				yhxx[j].rooml=yhxx[i].rooml;
				yhxx[j].sday=yhxx[i].sday;
				yhxx[j].rday[0]=yhxx[i].rday[0];
				yhxx[j].rday[1]=yhxx[i].rday[1];
				yhxx[j].rday[1]=yhxx[i].rday[1];
			}
			num--;
			t=1;
			break;
        }
        else printf("\t\t查询到无此用户!");
    }
    if(t==1)printf("\t\t退房成功！\n");
}
void C()//客房状态
{
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- 空余客房 ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|----------  单人间 :%d-------------||",sdan);
	printf("\n\t\t|----------  标准间 :%d-------------||",sshuang);
	printf("\n\t\t|---------- 总统套房:%d--------------||",stao);
	printf("\n\t\t|------------------------------------||");
}

void zhukongzhi()//主控制函数
{
    int x1,x2;
    rrr:
    zhucaidan();//首页菜单
    printf("\t\t请输入选项:");
    scanf("%d",&x1);
	if(x1==1)//客房经营管理模块
    {
        caidan1();//客房经营管理菜单
        printf("\t\t请输入选项:");
        scanf("%d",&x2);
        switch(x2)
        {
            case 1:A();break;//入住客房
            case 2:B();break;//退房操作
            case 3:C();break;//客房状态
        }
    }
    else if(x1==2)//房间管理模块
    {
        caidan2();//客房管理菜单
        printf("\t\t请输入选项:");
        scanf("%d",&x2);
        switch(x2)
        {
            case 1:D();break;//更改房价
            case 2:E();break;//增加客房
            case 3:F();break;//减少客房
        }
    }
    else goto rrr;//返回主菜单重新输入
}
int main()
{
    int x=0;
    do
    {
        zhukongzhi();//进入主控制函数;
        printf("\t\t--------是否需要继续?--------\n");
        printf("\t\t----回复: 1 (继续): 0 (结束)----\n\t\t请选择:");
        scanf("%d",&x);
    }while(x);
    return 0;
}
