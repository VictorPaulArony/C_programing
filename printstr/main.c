#include <stdio.h>
void print(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
   // printf("\n");

}

int main(){
    char str[100] ;
    printf("ENTER STRING: ");
    //scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    printf("Printing one by one the characters of the string:\n");
    print(str);
    return 0 ;
}

//Write a function that prints one by one the characters of a string on the screen.