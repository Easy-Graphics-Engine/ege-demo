/**
 *  Easy Graphics Engine (https://xege.org)
 *  ege 测试例程
 *
 *  程序说明:
 *      用于检测 ege 是否配置成功, 如果编译未通过或者运行后没
 *    看到图形, 则需要用户自行检查在配置过程和编译运行过程中,
 *    哪一个操作步骤出现问题导致没有成功。
 */

#include <graphics.h>                   // 包含EGE图形库头文件

int main()
{
    initgraph(640, 480);                // 初始化图形界面

    setcolor(EGERGB(0xFF, 0x0, 0x0));   // 设置绘画颜色为红色
    setbkcolor(WHITE);                  // 设置背景颜色为白色
    circle(320, 240, 100);              // 画圆

    getch();                            // 暂停，等待键盘按键

    closegraph();                       // 关闭图形界面

    return 0;
}
