#include <stdio.h>
int StrLen(const char *d) {
    int count = 0;
    while (*d){
    if (*d != '0' )
    {
        count++;
    }
    d++;
    }
    return count;
}
int main() {
    char str[] = "Hello World!";
    int length = StrLen(str);
    printf("The length of the string \"%s\" is %d.\n", str, length);
    return 0;
}
