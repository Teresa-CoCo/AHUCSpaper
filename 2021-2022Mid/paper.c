#include<stdio.h>
#include<windows.h>

//part one
//1.
void partonequeone()
{
    int i=7,j=5,k=3,m,n;//初始化变量
    printf("%d,%d\n",i>j>k,i>j&&j>k);//输出1：0(True),输出2：1（False）
    m=i--;//后置自减（先把i赋给m，后自减一）
    n=--j;//前置自减(先减1后赋值)
    printf("%d,%d,%d,%d\n",i,j,m,n);//打印i，j， m，n，
}


//2.

void partonequetwo()
{
    int x=123,n;
    if (x>=10000)   
    {
        n=5;
    }
    else if (x >1000)
    {
        n=4;
    }
    else if (x>=100)
    {
        n=3;
    }
    else if (x>=10)
    {
        n=2;
    }
    else
    {
        n=1;
    }
    printf("x=%d,n=%d\n",x,n);//太简单了，不解释了
    
    
    
    
}
//解释不全
void partonequethree()
{
    int c;
    while ((c=getchar())!='\n')\\循环检测当输入为回车结束检测
    {
        switch (c-'a')//c（变量）的ASCII-a的ASCII
        {
        case 0://跳过（不输出）
        case 1:putchar(c+1);//差一位：输出下一个字母
        case 2:putchar(c+2);break;//差两位：输出下下个字母
        default:putchar(c+3);//其他情况：输出下下下个字母
            break;//跳出循环
        }
    }
    
}//假设输入为abd3《回车》
//第一步：a，差0，case 0：跳过
// 第二步：b，差1，输出c
// 第三步：d，差3，输出g





int main(void)
{
    partonequeone();
    partonequetwo();
    partonequethree();

}