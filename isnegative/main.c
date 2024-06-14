#include <stdio.h>
void IsNegative( int a){
    if (a < 0 ){
        printf("T\n");
    }else if (a > 0){
        printf("F\n");
    }else {
        printf("F\n");
    }
    
}
int main(){
    IsNegative(1);
	IsNegative(0);
	IsNegative(-1);
    return 0;
}