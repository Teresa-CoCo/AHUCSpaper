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
//3.
void partonequethree()
{
    int c;
    while ((c=getchar())!='\n')//循环检测当输入为回车结束检测
    {
        switch (c-'a')//c（变量）的ASCII-a的ASCII
        {
        case 0://跳过（不输出）
        case 1:putchar(c+1);//差一位：输出下一个字母
        case 2:putchar(c+2);break;//差两位：输出下下个字母，跳出循环
        default:putchar(c+3);//其他情况：输出下下下个字母
            break;//跳出循环
        }
    }
    
}
//要点：如果 case 语句块中没有 break 语句时，匹配成功后，从当前 case 开始，后续所有 case 的值都会输出。
//假设输入为abd3《回车》
//第一步：a，差0，case 0：无break，case 1：输出b 无break case2：输出c，有break（bc）
// 第二步：b，case1，差1，输出c，无break，case2，输出d，break（cd）
// 第三步：d，差3，输出g，有break（d）
//第四步：3 ，差好多，case 2，加3，3+3=6，输出6，有break


//4.
void partonequefour()
{
    int i,j,n=1;//初始化变量
    for ( i = 1; i <= 4; i++)//循环3次
    {
        for ( j = 1; j <= 4; j++,n++)//循环3次
        {
            if (i==3 && j==1)//永远不会成立
            {
                break;
            }
            printf("%d\t",i*j);//打印i×g
            if (n%4==0)//如果n/4能除开
            {
                printf("\n");//换行
            }
            
            
        }
        
    }
    //return 0;
}

//Part 2.程序分析题
//1.求1，2，3...20的阶乘

void parttwoqueone()
{
    double s=0,t=1;
    int n;
    for ( n = 1; n <21 ; n++)
    {
        t =t*n;
        //填写
        s=s+t;//将结果累加进s

        //填写
    }
    printf("%e",s);
    //return 0;
    

}
//2.求回文数
void parttwoquetwo()
{
    int g,s,q,w,x;
    scanf("%d",&x);
    w=x/10000;
    q=(x%10000)/1000;
    s=(x%100)/10;
    g=x%10;
    if (g==w || s==q)
    {
        printf("这个数字是回文数");
    }
    else
    {
        printf("这个数字不是回文数");
    }
    
}

//程序设计题
//1.题干见word

void jibaoguo()
{
    int chang,kuan,gao,zhongliang,money;
    printf("请输入包裹的长宽高尺寸(长 宽 高 （单位为cm）)\n");
    scanf("%d %d %d",&chang,&kuan,&gao);
    if (chang >100 || kuan >100 || gao >100)
    {
        printf("不予邮寄，原因：超过1米尺寸限制\n");
    }
    else
    {
        printf("请输入包裹的重量（单位为kg）\n");
        scanf("%d",&zhongliang);
        if (zhongliang>30)
        {
            printf("重量不符合标准，不予邮寄\n");
        }
        else
        {
            if (zhongliang<10)
            {
                money= 1 + zhongliang * 0.8;

                
            }
            else if (zhongliang>=10 && zhongliang <20)
            {
                money=1+zhongliang*0.75;
            }
            else if (zhongliang>=20 && zhongliang <30)
            {
                money = 1+zhongliang*0.7;
            }
            printf("经计算，所需邮费为：%2d",money);
            return 0;
            
            
            

        }
        
    }
    

}

int main(void)
{
    SetConsoleOutputCP(65001);
    partonequeone();
    partonequetwo();
    partonequethree();
    printf("\n");
    partonequefour();
    printf("\n");
    parttwoqueone();
    printf("\n");
    parttwoquetwo();
    printf("\n");
    jibaoguo();
    printf("\n");


}