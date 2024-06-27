#include <stdio.h>
#include <string.h>

int find_substring_index(const char *string, const char *substring) {
    char *ptr = strstr(string, substring);
    if (ptr != NULL) {
        return ptr - string;
    } else {
        return -1;
    }
}


int find_char_index(const char *string, char character) {
    int i;
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == character) {
            return i;
        }
    }
    return -1;
}

int main() {
    char input_string[] = "hi hellow world computer";
    char substring[] = "hello";
    char charter = 'c';

    int index_substring = find_substring_index(input_string, substring);
    int index_charter = find_char_index(input_string, charter);

    printf("Index of '%s' in the input string: %d\n", substring, index_substring);
    printf("Index of '%c' in the input string: %d\n", charter, index_charter);

    return 0;
}

