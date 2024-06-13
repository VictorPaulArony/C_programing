#include <stdio.h>
int main(){
    char a = 'a';
    for (a = 'a';a<= 'z';a++){
        if (a%2 == 0) {
            printf("%c",a -('a' - 'A'));
        }else {
            printf("%c", a);
        }
    }
    printf("\n");
    for (a= 'a';a<= 'z';a++){
        if (a%2 != 0){
            printf("%c", a-('a'- 'A'));
        }else {
            printf("%c", a);
        }
    }
    printf("\n");
}