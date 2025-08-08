#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, len;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Remove trailing newline (if any)
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    // Reverse the string in-place
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
