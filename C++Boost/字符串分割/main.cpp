//����strtokʵ��split
#include <string.h>
#include <stdio.h>

int main()
{
    char s[] = "Golden Global   View,disk * desk";
    const char* d = " ,*";
    char* p;
    p = strtok_s(s, d);
    while (p)
    {
        printf("%s\n", p);
        p = strtok(NULL, d);
    }

    return 0;
}