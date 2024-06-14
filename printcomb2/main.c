#include <stdio.h>
int main(int i, int j, int k ,int l){
    for (i=0;i<=9;i++){
        for (j = 0; j <= 9;j++){
            for(k = 0; k <=9; k++){
                for (l = 0;l<= 9;l++){
                    if (i > k || (i == k && j >= l)) {
						continue;
					}
                        printf("%d%d ",i,j);
                        printf("%d%d",k,l);
                        if (!(i ==9 && j == 8 && k == 9 && l == 9)) {
                            printf(", ");
                        }
                }
            }
        }
    }
    printf("\n");
}

/*
$ go run . | cat -e
00 01, 00 02, 00 03, ..., 00 98, 00 99, 01 02, 01 03, ..., 97 98, 97 99, 98 99$
$
*/