#include<stdlib.h>
#ifndef _STRINGLIB1_
#define _STRINGLIB1_
/*========================================================================
======================== function: string_cmp ============================
A function to compare if two strings have the same content (are equal)
@param str1: The first string to be compared  
@param str2: The second string to be compared
@return: It returns 0 if the two given string are equal
@return: It returns 1 if the first string is higher than the second one
@return: It returns -1 if the second string is lesser than the second one
==========================================================================*/
int string_cmp(char *str1, char *str2);

/*========================================================================
======================== function: string_ncmp ===========================
A function to compare if two strings have the same content (are equal)
@param str1: The first string to be compared  
@param str2: The second string to be compared
@param n: The number of bytes that will be compared
@return: It returns 0 if the two given string are equal
@return: It returns 1 if the first string is higher than the second one
@return: It returns -1 if the second string is lesser than the second one
==========================================================================*/
int string_ncmp(char *str1, char *str2, int n);
/*========================================================================
======================== function: string_length =========================
A function to get the size of a string
@param str: The inputted string to be measured
@return: It returns the length of the inputted string (int)
==========================================================================*/
int string_length(char *str);

/*========================================================================
======================== function: string_copy ===========================
A function to copy a string from a source to a destiny
@param dest: The destiny string that will be receive content from another one
@param src: The string source that will be copied
==========================================================================*/
void string_copy(char *dest, char *src);

/*========================================================================
======================== function: string_ncopy ==========================
A function to copy a string from a source to a destiny
@param dest: The destiny string that will be receive content from another one
@param src: The string source that will be copied
@param n: The number of bytes to be copied
==========================================================================*/
void string_ncopy(char *dest, char *src, int n);
/*========================================================================
===================== function: string_concat ============================
A function to concatenate two given strings
@param str1: First string, it'll be putted at the begining of the resultant string
@param str2: Second string, it'll be putted at the end of the resultant string
@return: A string that's the result of concatenation of second string
at the end of the first string
==========================================================================*/
char* string_concat(char *str1, char *str2);

/*========================================================================
===================== function: string_nconcat ===========================
A function to concatenate two given strings
@param str1: First string, it'll be putted at the begining of the resultant string
@param str2: Second string, it'll be putted at the end of the resultant string
@param n: The number of bytes of src that will be putted at the end of dest
@return: A string that's the result of concatenation of second string
at the end of the first string
==========================================================================*/
char* string_nconcat(char *dest, char *src, int n);

/*========================================================================
===================== function: string_init_cut ==========================
A function to cut a string from the begining until a given index (inclusive)
@param str: A string that will be cutted from the begining
@param index: a index to cut the inputted string
==========================================================================*/
void string_init_cut(char *str, int index);

/*========================================================================
===================== function: string_init_cut ==========================
A function to cut a string from a given index (inclusive) until it ends
@param str: A string that will be cutted from the begining
@param index: a index to cut the inputted string
==========================================================================*/
void string_end_cut(char *src, int index);


/*========================================================================
===================== function: substring_at_be ==========================
A function to get a substring through a begin index and a end index, given
a string
@param str: A source string
@param begin: An int that indicates the inital index of the substring (inclusive)
@param end: An int that indicates the end index of the substring (inclusive)
@return: It returns a substring that correspond the given indexes
==========================================================================*/
char* substring_at_be(char *str, int begin, int end);

/*========================================================================
===================== function: string_trim ==============================
A function to remove whitespaces from beginind and end from a string
@param: a source string
==========================================================================*/
void string_trim(char *src);
#endif