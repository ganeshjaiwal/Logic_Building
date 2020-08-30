// Enter number: 5
// 2	4	6	8	10	

#include <stdio.h>

void pattern(int no) {
    if(no == 0) {
        printf("Invalid Input.");
    }
    no = no < 0 ? -no : no;
    int cnt = 0, incrt = 0;
    while(cnt < no) {
        printf("%d\t", cnt+2+incrt);
        cnt ++;
        incrt++;
    }
}

int main()
{
    int uNo;
    printf("Enter number: ");
    scanf("%d", &uNo);
    pattern(uNo);
    return 0;
}
