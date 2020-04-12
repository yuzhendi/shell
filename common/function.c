/*************************************************************************
	> File Name: function.c
	> Author: yu zhen di
	> Mail: 1316215578@qq.com
	> Created Time: 2020年04月12日 星期日 19时34分29秒
 ************************************************************************/

#include "./head.h"
#include "./color.h"
#define SHELL "/bin/sh"
void out_head() {
    char arr[50] = {0};
    getcwd(arr, sizeof(arr));
    int len = strlen(arr);
    while(arr[len - 1] != '/') {
        //获取最后一层目录
        len--;
    }
    char host_name[20] = {0};
    printf("["GREEN"yuzhendi@localhost"NONE"%s]$ ",arr+len);
    //GetComputerName(host_name, sizeof(host_name));
    //printf(GREEN"[%s"NONE"@localhost%s]$",host_name,arr[len]);
}
void run(char *comond) {
    pid_t pid;
    if( (pid = fork()) < 0) {
        perror("fork");
        return;
    }
    if(pid == 0) {
        //子进程
        execl(SHELL, "sh", "-c", comond,(char *)0);
    }
    wait(NULL);

}
