/*************************************************************************
	> File Name: test.c
	> Author: yu zhen di
	> Mail: 1316215578@qq.com
	> Created Time: 2020年04月12日 星期日 20时55分45秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define SHELL "/bin/sh"

int main() {
    execl(SHELL,"sh","-c","cd",NULL);
    return 0;
}
