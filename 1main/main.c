#include<stdio.h>

#if 0
//int main(int aa)
//int main(char *aa) //first parameter of 'main' (argument count) must be of type 'int'
//int main(int aa, int bb) //second parameter of 'main' (argument array) must be of type 'char **'
//int main(int argc, char *argv[])
#endif

int main(int argc, char **argv)
{

    int i;
    printf("\nTotal %d arguments\n",argc);
    for(i = 0; i < argc ; i++)
//    for(i = 0; i <= argc; i++) //字符串arav[i](i=1,...argc-1)表式第 i 个程序参数，标准C 要求argv[argc]是个null指针
//    for(i = 0; i < argc; i++)
    {
        printf("\nArgument argv[%d]  = %s \n",i, argv[i]);
    }
    //main函数返回值类型必须为int，通过return语句
    //把程序的退出状态“告诉”操作系统
    return 0;
}
