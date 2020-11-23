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
#include<stdio.h>
int check_sys()
{
    int a=1;
    return *(char*)&a;//返回1为小端，返回0为大端
}
int main()
{
    int ret=check_sys();
    if(ret==0)
        printf("大端\n");
    if(ret==1)
        printf("小端\n");
    return 0;
}

