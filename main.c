#include  <stdio.h>

#include  <string.h>

#define   MONTHS  12

#define   MAX_LEN  20           //�ַ�����󳤶�



int FindWord(char mws[][MAX_LEN],int n,char x[]);

int main(void)

{
int    pos1,pos2;
char   x[MAX_LEN];
char   monthsWords[][MAX_LEN] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
char   monthsAbbr[][MAX_LEN] = {"Jan.","Feb.","Mar.","Apr.","May.","Jun.","Jul.","Aug.","Sept.","Oct.","Nov.","Dec."};
char monthsChinese[][MAX_LEN] = {"Ԫ��Ԫ��","���´���","����ֲ��","��������","�����Ͷ�","���¶�ͯ","������Ϧ","��������","���¿�ѧ","ʮ�¹���","ʮһ�¹��","ʮ����ʥ��"};
printf("Please enter a string:\n");
scanf("%s", x);                 //��������ҵ��ַ���
/***************Begin**************/
//�˴�Ӧ�ú�������
pos1=FindWord(monthsWords,12,x);
pos2=FindWord(monthsAbbr,12,x);
/***************End***************/
if (pos1>=0)                //�ҵ���־Ϊ�棬˵���ҵ�
{

printf("%s: %s\n", x, monthsChinese[pos1]);

//printf("%s: %s\n", x, *(monthsChinese+pos1));

}
else if(pos2>=0)
{

printf("%s: %s\n", x, monthsChinese[pos2]);

//printf("%s: %s\n", x, *(monthsChinese+pos2));

}
else                        //�ҵ���־Ϊ�٣�˵��δ�ҵ�
{

printf("Not found!\n");

}
return 0;
}
//�ڵ��ʱ�����x�ַ��������ҵ���������λ�ã�λ�ô�0��ʼ��
//���Ҳ����򷵻�-1
int FindWord(char mws[][MAX_LEN],int n,char x[])
{
/***************Begin**************/
int i;
for(i=0;i<12;i++)
{
    if(x==mws[i])
    {
        return i;
    }

}
return -1;
/***************End***************/
}

