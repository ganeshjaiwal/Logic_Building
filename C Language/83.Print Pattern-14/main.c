// Enter number of Rows and Columns: 6 4
// *	*	*	*	
// *	@	@	*	
// *	@	@	*	
// *	@	@	*	
// *	@	@	*	
// *	*	*	*	

#include <stdio.h>

void pattern(int row, int col) {
    if(row == 0 || col == 0) {
        printf("Invalid Input");
    }
    row = row < 0 ? -row : row;
    col = col < 0 ? -col : col;
    
    int i = 0, j = 0;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if((i == 0 || j == 0)) {
                printf("*\t");
                continue;
            }
            if (i == row - 1 || j == col - 1) {
                printf("*\t");
                continue;
            }
            printf("@\t");
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