// Enter number: 4
// 4	#	3	#	2	#	1	#	

#include <stdio.h>

void pattern(int no) {
    if(no == 0) {
        printf("Invalid Input.");
    }
    no = no < 0 ? -no : no;
    
    while(no > 0) {
        printf("%d\t#\t", no);
        no--;
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
