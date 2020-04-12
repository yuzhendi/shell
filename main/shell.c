/*************************************************************************
	> File Name: shell.c
	> Author: yu zhen di
	> Mail: 1316215578@qq.com
	> Created Time: 2020年04月12日 星期日 19时10分24秒
 ************************************************************************/
 #include "../common/head.h"
 #include "../common/color.h"
 #include "../common/head.h"
#define SHELL "/bin/sh"


int main(){
   // out_head();
        system("clear");
    while(1) {
        out_head();
        char *comond = (char *)calloc(sizeof(char),50);
        int i = 0;
        while((comond[i++] = getchar()) != '\n');
        run(comond);
        free(comond);
        //system("clear");
        //memset(comond, 0, sizeof(comond));
    }
    system("clear");
    printf("Function is over!\n");
    return 0;
}
