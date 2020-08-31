// Enter number of Rows and Columns: 4 5
// 2	4	6	8	10	12
// 1	3	5	7	9	11
// 2	4	6	8	10	12
// 1	3	5	7	9	11

#include <stdio.h>

void pattern(int row, int col) {
    if(row == 0 || col == 0) {
        printf("Invalid Input.");
    }
    row = row < 0 ? -row : row;
    col = col < 0 ? -col : col;
    col++;
    int totalEle = row * col;
    int cnt = 1, currEle = 2;
    while(cnt <= totalEle) {
        printf("%d", currEle);
        if(cnt % col == 0) {
            printf("\n");
            cnt++;
            currEle += 2;
            if(currEle % 2 == 0) {
                currEle = 1;
            } else {
                currEle = 2;
            }
        } else {
            printf("\t");
            cnt++;
            currEle += 2;
        }
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
