#include <stdio.h>
#include <stdlib.h>	//ʹ��system����ʱ�Ӵ�������
#include <string.h>
#include<conio.h>	//ʹ��getch����ʱ�Ӵ�������

int dan=888,shuang=1888,tao=8888;//��ʼ����۸�
int sdan=200,sshuang=600,stao=20;//��ʼ��������
int Day;				//ס������
int num=0;				//�ͻ�����

struct YHXX				//�ͻ���Ϣ
{
    char ID[18];
    char name[10];
    char sex;			//�Ա�
    int rooms;			//������
    char rooml;			//��������
    int rday[3];		//��ס����
    int sday;			//ס��ʱ��
    long dingdanhao;	//������
};
struct YHXX yhxx[100];

void zhucaidan()		//���˵�
{

	printf("\n\t\t||====================================||");
	printf("\n\t\t||------------------------------------||");
	printf("\n\t\t||-------------- Welcome -------------||");
	printf("\n\t\t||--------- Hotel California ---------||");
	printf("\n\t\t||-------------- system --------------||");
	printf("\n\t\t||------------------------------------||");
	printf("\n\t\t||====================================||");
//	getch();	//�ȴ�����һ���ַ������ַ�����ʾ����Ļ�ϣ�Ҳ���ȴ��س���

	system("cls");	//����
	printf("\n");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|----------Please input(0-2)---------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|             1.�û��ͷ�����         ||");
	printf("\n\t\t|             2.�̻��ͷ�����         ||");
	printf("\n\t\t|             0.�˳�ϵͳ             ||");
	printf("\n\t\t|------------------------------------||");
}

void caidan1()//�ͻ�����˵�
{
    printf("\n");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|------------ �û��ͷ����� ----------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1:�Ǽ���ס           ||");
	printf("\n\t\t|               2:�˷�����           ||");
	printf("\n\t\t|               3:�ͷ�״̬           ||");
	printf("\n\t\t|------------------------------------||");
}
void caidan2()//�̻�����˵�
{
    printf("\n");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|------------ �̻��ͷ����� ----------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1:���۸���           ||");
	printf("\n\t\t|               2:���ӿͷ�           ||");
	printf("\n\t\t|               3:���ٿͷ�           ||");
	printf("\n\t\t|------------------------------------||");
}

void D()//���ķ���
{
    int x;
	char ch;
AAA:
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- ���۸��� ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1: ���˼�            ||");
	printf("\n\t\t|               2: ��׼��            ||");
	printf("\n\t\t|               3:��ͳ�׷�           ||");
	printf("\n\t\t|------------------------------------||");
	printf("\t\t�����뷿�����ͺ͸��ĺ�۸�: (�м��ð��,����)");
	scanf("%c,%d",&ch,&x);
	switch(ch)
	{
		case '1':dan=x;break;
		case '2':shuang=x;break;
		case '3':tao=x;break;
        default : goto AAA;
	}
	printf("\t\t���ĺ�ֱ�Ϊ:\n\t\t%d %d %d\n\t\t",dan,shuang,tao);
}
void E()//���ӿͷ�
{
    int x;
	char ch;
BBB:
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- ���ӿͷ� ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1: ���˼�            ||");
	printf("\n\t\t|               2: ��׼��            ||");
	printf("\n\t\t|               3:��ͳ�׷�           ||");
	printf("\n\t\t|------------------------------------||");
	printf("\t\t�����뷿�����ͺ���������: (�м��ð��,����) ");
	scanf("%c,%d",&ch,&x);
	switch(ch)
	{
		case '1':sdan+=x;break;
		case '2':sshuang+=x;break;
		case '3':stao+=x;break;
        default : goto BBB;
	}
	printf("\t\t���ĺ�ֱ�Ϊ:%d %d %d\n\t\t",sdan,sshuang,stao);
}
void F()//���ٿͷ�
{
    int x;
	int sdan=200,sshuang=600,stao=20;
	char ch;
CCC:
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- ���ٿͷ� ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1: ���˼�            ||");
	printf("\n\t\t|               2: ��׼��            ||");
	printf("\n\t\t|               3:��ͳ�׷�           ||");
	printf("\n\t\t|------------------------------------||");
	printf("\t\t�����뷿�����ͺͼ�������: (�м��ð��,����) ");
	scanf("%c,%d",&ch,&x);
	switch(ch)
	{
		case '1':sdan-=x;break;
		case '2':sshuang-=x;break;
		case '3':stao-=x;break;
        default : goto CCC;
	}
	printf("\t\t���ĺ�ֱ�Ϊ:%d %d %d\n\t\t",sdan,sshuang,stao);
}
void A()//��ס�ͷ�
{
    char lroom;
    int sroom;
    int price=0; //�۸�
    printf("\t\t��������\n");
    DDD:
    printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- ��ס�ͷ� ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|               1: ���˼�            ||");
	printf("\n\t\t|               2: ��׼��            ||");
	printf("\n\t\t|               3:��ͳ�׷�           ||");
	printf("\n\t\t|------------------------------------||");
    printf("\t\t�����뷿�����ͣ�");
    getchar();
    scanf("%c",&lroom);
    printf("\t\t������");
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
		printf("\t\t������������Ϣ: \n");
		printf("\t\t����: ");
		scanf("%s",yhxx[num].name);
		getchar();
		printf("\t\t�Ա�: (�У�Y  Ů��X) :");
		scanf("%c",&yhxx[num].sex);
		printf("\t\t���֤ID: ");
		scanf("%s",yhxx[num].ID);
		printf("\t\t��ס����:(�м��ð��,�ָ�) ");
		scanf("%d,%d,%d",&yhxx[num].rday[0],&yhxx[num].rday[1],&yhxx[num].rday[2]);
		printf("\t\t��סʱ��: ");
		scanf("%d",&yhxx[num].sday);
		printf("\t\t�����ܶ%d\n",price*yhxx[num].sday);
		price=0;
		yhxx[num].rooms=sroom;
		yhxx[num].rooml=lroom;
		num++;
        printf("\t\t�����ɹ���\n");
    }
}
void B()//�˷�����
{
    int i,j,t=0;
    char name1[10],ID1[18];
    printf("\t\t�˷�����:\n");
    printf("\t\t����������: ");
    scanf("%s",name1);
    printf("\n\t\t���������֤��:");
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
        else printf("\t\t��ѯ���޴��û�!");
    }
    if(t==1)printf("\t\t�˷��ɹ���\n");
}
void C()//�ͷ�״̬
{
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------------- ����ͷ� ------------||");
	printf("\n\t\t|------------------------------------||");
	printf("\n\t\t|-------  ���˼� :%d---------||",sdan);
	printf("\n\t\t|-------  ��׼�� :%d---------||",sshuang);
	printf("\n\t\t|------- ��ͳ�׷�:%d---------||",stao);
	printf("\n\t\t|------------------------------------||");
}

void zhukongzhi()//�����ƺ���
{
    int x1,x2;
    rrr:
    zhucaidan();//��ҳ�˵�
    printf("\t\t������ѡ��:");
    scanf("%d",&x1);
	if(x1==1)//�ͷ���Ӫ����ģ��
    {
        caidan1();//�ͷ���Ӫ����˵�
        printf("\t\t������ѡ��:");
        scanf("%d",&x2);
        switch(x2)
        {
            case 1:A();break;//��ס�ͷ�
            case 2:B();break;//�˷�����
            case 3:C();break;//�ͷ�״̬
        }
    }
    else if(x1==2)//�������ģ��
    {
        caidan2();//�ͷ�����˵�
        printf("\t\t������ѡ��:");
        scanf("%d",&x2);
        switch(x2)
        {
            case 1:D();break;//���ķ���
            case 2:E();break;//���ӿͷ�
            case 3:F();break;//���ٿͷ�
        }
    }
    else goto rrr;//�������˵���������
}
int main()
{
    int x=0;
    do
    {
        zhukongzhi();//���������ƺ���;
        printf("\t\t--------�Ƿ���Ҫ����?--------\n");
        printf("\t\t----�ظ�: 1 (����): 0 (����)----\n\t\t��ѡ��:");
        scanf("%d",&x);
    }while(x);
    return 0;
}
