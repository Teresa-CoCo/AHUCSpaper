#include<stdio.h>
#include<windows.h>

void onepointone()
{
    int a=2,b=2,m,n;//赋值
    m=a++;//m为a，a为a增加1
    n=++b;//b增加1，n为b增加1
    printf("%d,%d,%d,%d",m,n,a,b);//2,3,3,3(错误应该为2333)
    return 0;

}

void onepointtwo()
{
    int a=3;
    int i;
    void ss();
    for ( i = 1; i < a; i++)
    {
        ss();
        return 0;
    }
    
}
void ss()
{
    static int a =1;
    a*=a+2;
    printf("%d\n",a);
}//输出3

void onepointthree()
{
    int c;
    while ((c=getchar()!='\n'))
    {
        switch (c-'a')
        {
        case 0:
        case 1:putchar(c+2);break;
        case 2:putchar(c+3);break;
        

        
        default:putchar(c+1);
            break;
        }
        return 0;
    }//dcgfg
    
}



//onepointfour 与 onepointfive 为指针 暂空不做




int main()
{
    onepointone();
    onepointtwo();
    onepointthree();



}