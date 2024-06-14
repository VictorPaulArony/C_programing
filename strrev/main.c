#include <stdio.h>
#include <string.h>
void strrev(char str[]){
    int i = 0, j = 0;
    int l = strlen(str)-1;

      // Find the actual end of the string (ignoring the newline character from fgets)
    if (str[l] == ' ') {
        l--;
    }
    for (i= 0,j= l;i<j ; i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j]= temp;
        
    }
}
int main(){
    char str[100];
    printf("ENTER A STETMENT: \n");
    fgets(str, sizeof(str), stdin);
    printf("REVERSED STETMENT: ");
    strrev(str);
    printf("%s\n", str);
    return 0;
}