#include<stdio.h>

int main(){
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int total = 0;
	int i, j; 
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0 || i == 2 || j == 0 || j == 2) {
                total += array[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien cua ma tran 3x3: %d\n", total);
	
	return 0; 
} 
