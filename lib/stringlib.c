#include "../include/stringlib.h"


int string_cmp(char *str1, char *str2) {
    int i = 0;
    while(str1[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] > str2[i] ? 1 : -1;
        }
        else i++;
    }
    return 0;     
}

int string_length(char *str) {
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

void string_copy(char *dest, char *src) {
    int index = 0;
    
    while((dest[index] = src[index]) != '\0') {
        index++;
    }

    dest[index] = '\0';

}

char* string_concat(char *str1, char *str2) {
    int length1 = string_length(str1);
    int length2 = string_length(str2);
    int n_length = length1 + length2;
    char *concat = (char*) calloc(n_length, sizeof(char));

    int i = 0;
    
    while((concat[i] = str1[i]) != '\0') {
        i++;
    }
    
    i = 0;
    
    while((concat[length1 + i] = str2[i]) != '\0') {
        i++;
    }

    concat[n_length] = '\0';

    return concat;
}

void string_init_cut(char *str, int index) {
    int new_begin_index = index +1;
    int new_length = string_length(str) - new_begin_index;

    char *new_str = (char *) calloc(new_length, sizeof(char));
    int i = 0;
    while((new_str[i] = str[new_begin_index]) != '\0') {
        i++;
        new_begin_index++;
    }
    new_str[i] = '\0';

    string_copy(str, new_str);
    free(new_str);
}

void string_end_cut(char *src, int index) {
    src[index] = '\0';
}

char* substring_at_be(char *str, int begin, int end) {
    int length = end - begin + 1;
    char *sub = (char*) calloc(length, sizeof(char));

    int i = 0;
    while(i < length) {
        sub[i] = str[i+begin];
        i++;
    }
    sub[i] = '\0';
    
    return sub;
}

char* string_nconcat(char *dest, char *src, int n) {
    int length = string_length(dest) + n;
    char *new_str = (char *) calloc(length, sizeof(char));
    int i = 0;

    while((new_str[i] = dest[i]) != '\0') {
        i++;
    }
    int j = i;
    for(i = 0; i < n; i++) {
        new_str[j+i] = src[i];
    }
    new_str[j+i] = '\0';

    return new_str;
}

void string_ncopy(char *dest, char *src, int n) {
    int i;

    for(i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    dest[n] = '\0';    
}

int string_ncmp(char *str1, char *str2, int n) {
     int i = 0;
    while(str1[i] != '\0' && i < n) {
        if (str1[i] != str2[i]) {
            return str1[i] > str2[i] ? 1 : -1;
        }
        else i++;
    }
    return 0;  

}

void string_trim(char *src) {
    int length = string_length(src);
    char *new_str = (char*) calloc(length, sizeof(char));
    int i = 0;
    
    while(src[i] != '\0' && (src[i] == ' ' || src[i] == '\t' || src[i] == '\n')) {
        i++;
    }
    string_init_cut(src, (i-1));
    length = string_length(src);
    i = length -1;
    while((src[i] == ' ' || src[i] == '\t' || src[i] == '\n')) {
        i--;
    }
    src[i + 1] = '\0';
}