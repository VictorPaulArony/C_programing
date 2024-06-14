#include <stdio.h>
int main(int i,int j,int k){
    for (i = 0 ; i<= 7;i++) {
        for(j = i+1 ;j <= 8;j++){
            for (k = j+1; k <= 9;k++) {
                printf("%d%d%d", i, j , k);
                if (i != 7 || j != 8 || k != 9){
                      printf(" , ");
                }
              
            }
        }
    }
    printf("\n");
}




/*
Write a function that prints, in ascending order and on a single line:
 all unique combinations of three different digits so that, 
 the first digit is lower than the second, and the second is lower than the third.
These combinations are separated by a comma and a space.

This is the incomplete output :

$ go run . | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 689, 789$
$
000 or 999 are not valid combinations because the digits are not different.

987 should not be shown because the first digit is not less than the second.
*/