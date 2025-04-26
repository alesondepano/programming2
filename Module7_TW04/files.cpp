#include <cstdio>
#include <cstring>
#include <string>

using namespace std;
int main()
{
    int c;
    char filename[] = "D:\\WORK\\Samples\\2T2425\\CCS0007_TW04\\Module_7\\";
    strcat(filename, "file.txt");
    FILE *fp;
    fp = fopen(filename, "a");
    char str[] = "Joseph Calleja";
    if (fp)
    {
        for (int i = 0; i < strlen(str); i++)
            putc(str[i], fp);
        
        putc('\n', fp);
    }
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp)
    {
        while ((c = getc(fp)) != EOF)
            putchar(c);
        fclose(fp);
    }
}
