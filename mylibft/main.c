#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
        char *word1="atomsaaaaa",*word2="atoms";

        if (strncmp(word1,word2,5)==0)
                printf("strncmp result.\n");
        if (memcmp(word1,word2,5)==0)
                printf("memcmp result.\n");
        if (strcmp(word1,word2)==0)
                printf("strcmp result.\n");
}