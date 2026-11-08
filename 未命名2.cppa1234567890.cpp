#include <stdio.h>
#include <windows.h>

int main(void) {
    system("cls");
    system("title 系统提示");

    const char *panda[] = {
        "   _____    ",
        "  /     \\   ",
        " | o   o |  ",
        " |   ^   |  ",
        "  \\_____/   ",
        "    | |     ",
        "  __| |__   ",
        " /       \\  ",
        "|         | ",
        " \\_______/  ",
        "            ",
        " Hello, Panda! ",
        NULL
    };
    
    // 重点：这里必须有 \n 换行！
    for (int i = 0; panda[i] != NULL; i++) {
        printf("%s\n", panda[i]);
    }
    
    Sleep(3000);
    return 0;
}
