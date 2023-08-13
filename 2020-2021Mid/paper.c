#include<stdio.h>
#include<windows.h>

//一.程序阅读题

//1.switch 与自增

void partonefirst()
{
    int a=1,b=1,c=1;//initial a,b,c = 1
    switch (a)//read a(1)
    {
    case 0:
        a++;b++;break;
    case 1://a =1
        b++;//b=2
    case 2://no break continue to run
        c--;break; //c-1=0
    }
    printf("%d,%d,%d",a,b,c);//a=1 b=2 c=0
}
//2.循环与条件的考察
void partonesec()
{
    int x=1,i=1;
    for (;x < 30; i++)//why use ";"
    {
        if (x>=8)//i=cycle times,x=answer
        {
            break;
        }
        if (x%2!=0)
        {
            x+=3;
            continue;
        }
        x -=1;
        
    }
    printf("x=%d,i=%d\n",x,i);
}
//x=8，i=6
//3.自增的考察
void partonethird()
{
    int i,j,m,n;
    i=8;
    j=10;
    m=++i;//m=9,i=9(增加完赋值双方)
    n=j++;//n=11,j=10（j+1，n为j）
    printf("%d,%d,%d,%d\n",i,j,m,n);
}
//9,10,8,11(9,11,9,10)

//二.程序分析题
//1.水仙花数(考察条件，运算)
void shuixianhua()
{
    int m;
    int a=0,b=0,c=0;
    for ( m = 100; m < 1000; m++)
    {
        c=m/100;
        b=(m/10)%10;
        a=(m%10);
        if(m==c*c*c+b*b*b+a*a*a)
        {
            printf("%d\n",m);
        }
    }
    
}

void funxi()
{
    int n;
    for ( n = 100; n <=200; n++)
    {
        if (n%3==0)
        {
            continue;/* code */
        }
        printf("%d",n);
        
    }
    printf("\n");
    
}
//打印出200以内”不“能被3整除的数字


//三.程序设计题

//1.百鸡问题
void problembaiji()
{
    int gongji,muji,xiaoji;
    // 100=5*gongji+3*muji+xiaoji;
    // gongji+muji+3*xiaoji=100;//解方程方法明显无法实现
    //使用遍历
    for ( gongji = 0; gongji <= 20; gongji++)//从公鸡为0开始判断，以后自增1
    {
        for ( muji = 0; muji <= 33; muji++)//母鸡从0开始判断，以后自增1
        {
            xiaoji=100-5*gongji-3*muji;//定义剩余鸡的个数
            if (xiaoji >= 0 && xiaoji %3 ==0)//排除掉小鸡为0的情况，判断鸡的个数除以3是否为整数（使能够一块钱）
            {
                printf("公鸡%d，母鸡%d，小鸡%d\n",gongji,muji,xiaoji);//若是则打印可能性
            }
            
        }
        
    }
}//忘了个括号导致一直编译不成功（（（（（
//2.解开方程组

///
void funcsjeidj()
{
    int shuru,jieguo;
    printf("请输入x值\n");
    scanf("%d",&shuru);
    if (shuru<1)
    {
        jieguo=shuru;
    }
    else if (shuru>=1 || shuru<=10)
    {
        jieguo=2*shuru-1;
    }
    else if (shuru>10)
    {
        jieguo=3*shuru-11;
    }
    printf("经计算，y为%d",jieguo);
}

//3.统计中英文字母，空格，数字，其他字符。（是不是非常熟悉）
//注意不能直接抄明年的代码，多了中文统计，少了大小写统计（


void amount()
{
    char input[114];
    int daxie=0;
    int zimu=0;
    int xiaoxie=0;
    int kongge=0;
    int shuzi=0;
    int qita=0;


    printf("请输入一行字符\n");
    fgets(input,sizeof(input),stdin);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isalpha(input[i]))
        {
            zimu++;
        }
        // else if (input[i] >='a' && input[i] <='z')
        // {
        //     xiaoxie++;
        // }
        else if (input[i] ==' ')
        {
            kongge++;
        }
        else if (input[i] >='0' && input[i] <= '9')
        {
            shuzi++;
        }
        else
        {
            qita++;
        }
        
        
        
        
    }
    printf("经统计，有字母%d个，数字%d个，空格%d个，其他字符%d个\n",zimu,shuzi,kongge,qita);

    

    
}

//4.数列求和(使用数组，貌似有错误)



void shulie()
{
    //int shuzu[22];
    double fenmu[22];
    double fenzi[22];
    double sum = 0;
    int i;

    fenmu[0] = 1.0;
    fenzi[0] = 2.0;

    for (i = 0; i <= 20; i++)
    {
        fenmu[i + 1] = fenzi[i];
        fenzi[i + 1] = fenmu[i] + fenzi[i];
        //shuzu[i + 1] = fenzi[i + 1] / fenmu[i + 1];
        sum += fenzi[i]/fenmu[i];
    }

    // for (i = 1; i <= 20; i++)
    // {
    //     sum += shuzu[i];
    // }

    printf("%.2lf\n", sum);
}
//34.28
//4.第二种解法

void calculateSum()
{
    int i;
    double fenzi = 2;  // 分子
    double fenmu = 1;  // 分母
    double sum = 0;  // 总和

    for (i = 0; i < 20; i++)
    {
        sum += fenzi / fenmu;
        double temp = fenzi;
        fenzi = fenzi + fenmu;
        fenmu = temp;
    }

    printf("数列前20项之和为: %.2lf\n", sum);
}

//32.66

int main()
{
    SetConsoleOutputCP(65001);
    partonefirst();
    printf("\n");
    partonesec();
    partonethird();
    shuixianhua();
    funxi();
    problembaiji();
    funcsjeidj();
    fflush(stdin);//确保缓冲区无空格导致出错，若分开运行无需此行
    amount();
    shulie();
    calculateSum();
}