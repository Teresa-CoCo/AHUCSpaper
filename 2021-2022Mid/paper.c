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
            //return 0;
            
            
            

        }
        
    }
    

}

//2.求200以内素数(根据之前personal项目改编,可能功能冗余了)

int isPrime(int num) {
    if (num <= 1) {
        return 0;  // 不是素数
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;  // 不是素数
        }
    }

    return 1;  // 是素数
}

void sushu()
{
    int num = 0;
    //printf("请输入一个整数");
    //
    //scanf("%d",&num);
    //int num = 0;
    int i=0;
    for ( i = 0; i < 200; i++)
    {
        num++;
        if (isPrime(num))
        {
            printf("%d\n",num);
        }
    }
    
    
    
    

}

//3.统计各分数段人数
void tongji()
{
    int chengji;
    int i=0;
    int one=0;
    int two=0;
    int three=0;
    int four=0;
    int five=0;
    for ( i = 0; i < 50; i++)
    {
        printf("请输入第%d个数据",i);
        scanf("%d",&chengji);
        switch (chengji)
        {
        case 90 ... 100:
            one++;
            break;
        case 80 ... 89:
            two++;
            break;
        case 70 ... 79:    
            three++;
            break;
        case 60 ... 69:    
            four++;
            break;
        case 0 ... 59:
            five++;
            break;
        
        default:
            printf("您输入的有错误。\n");
            break;
        }  
        printf("当前90分以上%d人，80-89%d人，70-79%d人，60-69%d人，低于60分%d人\n",one,two,three,four,five);
    }
    
}

//4.统计大小写英文字母，空格，数字，其他字符的数量


void amount()
{
    char input[114];
    int daxie=0;
    int xiaoxie=0;
    int kongge=0;
    int shuzi=0;
    int qita=0;


    printf("请输入一行字符\n");
    fgets(input,sizeof(input),stdin);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >='A' && input[i] <= 'Z')
        {
            daxie++;
        }
        else if (input[i] >='a' && input[i] <='z')
        {
            xiaoxie++;
        }
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
    printf("经统计，有大写字母%d，小写字母%d个，数字%d个，空格%d个，其他字符%d个",daxie,xiaoxie,shuzi,kongge,qita);

    

    
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
    sushu();
    printf("\n");
    tongji();
    printf("\n");
    fflush(stdin);//确保缓冲区无空格导致出错，若分开运行无需此行
    amount();
    printf("21-22期中试卷全部结束！");
    Sleep(300);



}