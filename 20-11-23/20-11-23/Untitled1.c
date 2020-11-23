//#include <stdio.h>
//#include <stdlib.h>
//
////int main()
////{
////    int a=20;
////    int b=-10;
////    return 0;
////}
////
//int mian()
//{
//    1-1;
//    //00000000000000000000001
//    //11111111111111111111111
//    //100000000000000000000000
//    //1+(-1)
//    //00000000000000000000001
//    //10000000000000000000001
//    //10000000000000000000010
//}
//#include<stdio.h>
//int check_sys()
//{
//    int a=1;
//    return *(char*)&a;//返回1为小端，返回0为大端
//}
//int main()
//{
//    int ret=check_sys();
//    if(ret==0)
//        printf("大端\n");
//    if(ret==1)
//        printf("小端\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a= -1;//11111111
//    signed char b= -1;//11111111
//    unsigned char c= -1;//11111111
//    printf("%d %d %d",a,b,c);
//    return 0;
//}
#include<stdio.h>
//int main()
//{
//    char a = -128;
//    //1000000000000000000000010000000
//    //1111111111111111111111101111111
//    //1111111111111111111111110000000
//    //10000000
//    //1111111111111111111111110000000
//    //%d-打印十进制的有符号数字
//    //%u-打印十进制的无符号数字
//    printf("%u",a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a=128;
//    printf("%u\n",a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i= -20;
//    unsigned int j=10;
//    printf("%d\n",i+j);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    ruturn 0;
//}
//#include<stdio.h>
//int main()
//{
//    unsigned int i;
//    for(i=9;i>=0;i--)
//    {
//        printf("%u",i);
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    char a[1000];
    int i;
    for(i=0;i<1000;i++)
    {
        a[i]=-1-i;
    }
    printf("%d",strlen(a));
    return 0;
}
