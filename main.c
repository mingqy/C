#include  <stdio.h>

#include  <string.h>

#define   MONTHS  12

#define   MAX_LEN  20           //字符串最大长度



int FindWord(char mws[][MAX_LEN],int n,char x[]);

int main(void)

{
int    pos1,pos2;
char   x[MAX_LEN];
char   monthsWords[][MAX_LEN] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
char   monthsAbbr[][MAX_LEN] = {"Jan.","Feb.","Mar.","Apr.","May.","Jun.","Jul.","Aug.","Sept.","Oct.","Nov.","Dec."};
char monthsChinese[][MAX_LEN] = {"元月元旦","二月春节","三月植树","四月清明","五月劳动","六月儿童","七月七夕","八月中秋","九月开学","十月国庆","十一月光棍","十二月圣诞"};
printf("Please enter a string:\n");
scanf("%s", x);                 //输入待查找的字符串
/***************Begin**************/
//此处应用函数调用
pos1=FindWord(monthsWords,12,x);
pos2=FindWord(monthsAbbr,12,x);
/***************End***************/
if (pos1>=0)                //找到标志为真，说明找到
{

printf("%s: %s\n", x, monthsChinese[pos1]);

//printf("%s: %s\n", x, *(monthsChinese+pos1));

}
else if(pos2>=0)
{

printf("%s: %s\n", x, monthsChinese[pos2]);

//printf("%s: %s\n", x, *(monthsChinese+pos2));

}
else                        //找到标志为假，说明未找到
{

printf("Not found!\n");

}
return 0;
}
//在单词表中找x字符串，若找到，返回其位置（位置从0开始）
//若找不到则返回-1
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

