// Enter number: 5
// 1	*	2	*	3	*	4	*	5	*	

#include <stdio.h>

void pattern(int no) {
    if(no == 0) {
        printf("Invalid Input.");
    }
    no = no < 0 ? -no : no;
    int cnt = 1;
    while(cnt <= no) {
        printf("%d\t*\t", cnt);
        cnt++;
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
