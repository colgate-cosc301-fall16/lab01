#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*
 * L1: Intro to C and Makefiles
 * COSC 301, Operating Systems, Fall 2016
 * Team: TODO
 */

/*
 * Remove all whitespace characters (space, tab, or newline) from a string.
 * @param s the string whose whitespace characters should be removed
 */
void removewhitespace(char s[]) {
    // TODO
}

/*
 * Convert a C string to a Pascal string.
 * @param s the string to convert
 */
bool c2pascal(char s[]) {
    // TODO
    return true;
}

/*
 * Convert a Pascal string to a Cl string.
 * @param s the string to convert
 */
void pascal2c(char s[]) {
    // TODO
}

/*
 * Invoke functions and compare with expected results.
 */
int main() {
    // Remove whitespace tests
    char stringA[] = "a b";
    removewhitespace(stringA);
    if (strcmp("ab",stringA) != 0) {
        printf("A) Incorrect: should be 'ab' not '%s'\n", stringA);
    } else {
        printf("A) Correct\n");
    }

    char stringB[] = "de f  g   h  i jk";
    removewhitespace(stringB);
    if (strcmp("defghijk",stringB) != 0) {
        printf("B) Incorrect: should be 'defghijk' not '%s'\n",stringB);
    } else {
        printf("B) Correct\n");
    }

    char stringC[] = "x\ty\nz";
    removewhitespace(stringC);
    if (strcmp("xyz",stringC) != 0) {
        printf("C) Incorrect: should be 'xyz' not '%s'\n",stringC);
    } else {
        printf("C) Correct\n");
    }

    // Convert C string to Pascal string tests
    char stringD[] = "This is a very long C string that cannot be converted into a Pascal string, becuase the length of this string is longer than we can store in a single byte. This limitation of Pascal is silly. Thank goodness we are learning C this semester so you can use longer strings.";
    if (c2pascal(stringD) != false) {
        printf("D) Incorrect: should return false\n");
    } else {
        printf("D) Correct\n");
    }

    char stringE[] = "This is 26 characters long";
    if (c2pascal(stringE) != true) {
        printf("E) Incorrect: should return true\n");
    } else if (stringE[0] != 26) {
        printf("E) Incorrect: stored length should be 26 not %d\n", stringE[0]);
    } else if (memcmp("This is 26 characters long", stringE+1, 27) != 0) {
        printf("E) Incorrect: string should be 'This is 27 characters long'\n");
    } else {
        printf("E) Correct\n");
    }

    // Convert to Pascal string to C string tests
    char stringF[] = "I'm a 25 character string";
    c2pascal(stringF);
    pascal2c(stringF);
    if (strlen(stringF) != 25) {
        printf("F) Incorect: should be 25, not %lu, characters long\n", 
                strlen(stringF));
    } else if (memcmp("I'm a 25 character string", stringF, 26) != 0) {
        printf("F) Incorrect: string should be 'I'm a 25 character string'\n");
    } else {
        printf("F) Correct\n");
    }
}
