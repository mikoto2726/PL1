#include <stdio.h>

char *strstr(const char *haystack, const char *needle){
    if (*needle == '\0'){
        return (char *)haystack;
    }
    while (*haystack){
        const char *h = haystack;
        const char *n = needle;
        
        while (*h && *n && (*h == *n)){
            h++;
            n++;
        }

        if (*n == '\0'){
            return (char *)haystack;
        }
        haystack++;
    }
    return NULL;
}

int main(){
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    char *result = strstr(haystack, needle);

    if (result != NULL){
        printf("Needle foud at index: %ld\n", result - haystack);
    }
    else {
        printf("Needle not found.\n");
    }
    return 0;
}