#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, count = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str); // read the string until newline character
    
    len = strlen(str);
    
    for (i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    
    printf("The number of vowels in the string is: %d", count);
    
    return 0;
}
