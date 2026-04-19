#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i=0;
    printf("Enter string: ");
    scanf("%s", str);
    while(str[i]!='\0'){
        if(isalpha(str[i])) printf("Letter: %c\n", str[i]);
        else if(isdigit(str[i])) printf("Digit: %c\n", str[i]);
        else printf("Symbol: %c\n", str[i]);
        i++;
    }
    return 0;
}