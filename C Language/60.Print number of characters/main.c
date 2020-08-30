// Enter number: 5
// A	B	C	D	E	

#include <stdio.h>

void pattern(int no) {
    if(no == 0) {
        printf("Invalid Input.");
    }
    no = no < 0 ? -no : no;
    
    int initChar = 65, cnt = 0;
    while(cnt < no) {
        printf("%c\t", initChar);
        cnt++;
        initChar++;
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
