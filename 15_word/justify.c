/***************************************
 * Formats a file of text 
 * 
 * compile all resource to 1 execution file:
 * gcc -o .\justify .\justify.c .\line.c .\word.c
 * 
 * run program:
 * .\justify.exe
 * 
 * run program and output result to a file quote
 * justify.exe > quote
 ***************************************/

#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 50

int main(void)
{
    char word[MAX_WORD_LEN+2];
    int word_len;

    clear_line();

    for (;;)
    {
        read_word(word, MAX_WORD_LEN+1);
        word_len = strlen(word);
        if (word_len == 0)
        {
            flush_line();
            return 0;
        }
        if (word_len > MAX_WORD_LEN)
            word[MAX_WORD_LEN] = '*';
        if (word_len + 1 > space_remaining())
        {
            write_line();
            clear_line();
        }
        add_word(word);
    }

}