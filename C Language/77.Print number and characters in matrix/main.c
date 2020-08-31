// Enter number of Rows and Columns: 4 5
// a	b	c	d	e
// 1	2	3	4	5
// a	b	c	d	e
// 1	2	3	4	5


#include <stdio.h>

void pattern(int row, int col) {
    if(row == 0 || col == 0) {
        printf("Invalid Input.");
    }
    row = row < 0 ? -row : row;
    col = col < 0 ? -col : col;
    
    int totalEle = row * col, cnt = 1, currEle = 97, isChar = 1, tempCol = 1;
    while(cnt <= totalEle) {
        if(isChar) {
            printf("%c", currEle);
        } else {
            printf("%d", currEle);
        }
        if(tempCol == col) {
            printf("\n");
            isChar = !isChar;
            tempCol = 1;
            if(isChar) {
                currEle = 97;
            } else {
                currEle =    1;
            }
        } else {
            printf("\t");
            tempCol++;
            currEle++;
        }
        cnt++;
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