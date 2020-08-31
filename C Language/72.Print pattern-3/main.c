// Enter number of Rows and Columns: 4 5
// A	A	A	A	A
// B	B	B	B	B
// C	C	C	C	C
// D	D	D	D	D


#include <stdio.h>

void pattern(int row, int col) {
    if(row == 0 || col == 0) {
        printf("Invalid Input.");
    }
    row = row < 0 ? -row : row;
    col = col < 0 ? -col : col;
    
    int totalEle = row * col;
    int cnt = 1, currEle = 65;
    while(cnt <= totalEle) {
        printf("%c", currEle);
        if(cnt % col == 0) {
            printf("\n");
            currEle++;
        } else {
            printf("\t");
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
