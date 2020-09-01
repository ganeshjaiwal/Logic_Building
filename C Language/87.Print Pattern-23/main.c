// Enter number of Rows and Columns: 5 5
// $	*	*	*	*	
// #	$	*	*	*	
// #	#	$	*	*	
// #	#	#	$	*	
// #	#	#	#	$	

#include <stdio.h>

void pattern(int row, int col) {
    if(row == 0 || col == 0) {
        printf("Invalid Input");
    }
    row = row < 0 ? -row : row;
    col = col < 0 ? -col : col;
    
     if(row != col) {
        row = row < col ? row : col;
        col = row;
    }
    
    int i = 0, j = 0;
    for(i = 1; i <= row; i++) {
        for(j = 1; j <= col; j++) {
            if(i == j) {
                printf("$\t");
                continue;
            }
            if(i > j) {
                printf("#\t");
                continue;
            }
            if(i < j) {
                printf("*\t");
                continue;
            }
        }
        printf("\n");
    }
}

int main()
{
    int uRow = 0, uCol = 0;
    printf("Enter number of Rows and Columns: ");
    scanf("%d%d", &uRow, &uCol);
    pattern(uRow, uCol);
    return 0;
}
