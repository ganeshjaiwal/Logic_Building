// Enter number of Rows and Columns: 4 5
// A	B	C	D	E
// a	b	c	d	e
// A	B	C	D	E
// a	b	c	d	e


#include <stdio.h>

void pattern(int row, int col) {
    if(row == 0 || col == 0) {
        printf("Invalid Input.");
    }
    row = row < 0 ? -row : row;
    col = col < 0 ? -col : col;
    
    int totalEle = row * col;
    int cnt = 1, currEle = 65, isCap = 1;
    while(cnt <= totalEle) {
        printf("%c", currEle);
        if(cnt % col == 0) {
            printf("\n");
            isCap = !isCap;
            if(isCap) {
                currEle = 65;   
            } else {
                currEle = 97;
            }
        } else {
            printf("\t");
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
