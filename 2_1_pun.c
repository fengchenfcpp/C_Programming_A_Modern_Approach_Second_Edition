/***************************************
 * compile to 1 execution file: 
 * 
 * gcc -o .\2_1_pun.exe .\2_1_pun.c
 * gcc –O –Wall –W –pedantic –std=c99 –o .\2_1_pun.exe .\2_1_pun.c
 * 
 * –Wall
使编译器在检测到可能的错误时生成警告消息。（–W后面可以加上具体的警告代码，-Wall表示“所有的–W选项”。）为了获得最好的效果，该选项应与–O选项结合使用。–W
除了–Wall生成的警告消息外，还需要针对具体情况的额外警告消息。
 * –pedantic
根据C标准的要求生成警告消息。这样可以避免在程序中使用非标准特性。
 * –ansi
禁用GCC的非标准C特性，并启用一些不太常用的标准特性。
 * –std=c89或–std=c99
指明使用哪个版本的C编译器来检查程序
 ***************************************/

#include <stdio.h>
#include <wchar.h>

int main(void)
{
    printf("To C, or not to C: that is the question. This is fcpp. MBCS testing:Failed\n");
    return 0;
}