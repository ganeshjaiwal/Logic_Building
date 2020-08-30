// Enter number of Rows and Columns: 5 5 
// 1	2	3	4	5	
// 1	2	3	4	5	
// 1	2	3	4	5	
// 1	2	3	4	5	
// 1	2	3	4	5	


#include <stdio.h>

void pattern(int row, int col) {
    if(row == 0 || col == 0) {
        printf("Invalid Input.");
    }
    row = row < 0 ? -row : row;
    col = col < 0 ? -col : col;
    
    int totalEle = row * col;
    int cnt = 1, currEle = 1;
    while(cnt <= totalEle) {
        printf("%d\t", currEle);
        if(cnt % col == 0) {
            printf("\n");
            currEle = 1;
        } else {
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
