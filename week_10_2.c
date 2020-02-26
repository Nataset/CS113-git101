#include <stdio.h>
#include <ctype.h>

int main () {
    //*******ctpe.h**********
    //-------------character Library---------
    // isdigit('char') return 0,1 ตัวเลข
    // isalpha('char') return 0,1 ตัวอักศร
    // isalnum('char') return 0,1 ตัวอักศรและตัวเลข
    // isxdigit('char') return 0,1 ตัวเลขฐาน 16
    // islower('char') return 0,1 
    // isupper('char') return 0,1
    // tolower('char') return char
    // toupper('char') return char

    // ตัวอักขระพิเศษ 
    //isspace('char') return 0,1
    //iscntrl('char') return 0,1 ตรวจสอบ control char

    
    //*********stdlib.h*********** 
    //---------------String-Conversion Functions-----------
    //strtod(const char* nPtr, char **endPtr) Convert Str --> Double
    //strtol(const char* nPtr, char **endPtr, int base) Str --> Long
    //strtoul(const char* nPtr, char **endPtr, int base) Str --> unsigned long
    
    //*********stdio.h***********
    //---------------String input/output Library-----------
   
   //char* fgets(char* s, int n, FILE* stream) 
    //  input char from the specified stream into the array s until a newline or end-of-file
    //  Ex: fgets(sentence, size, stdin);
    
    //int getchar(void);
    //  inputs the next charracter from the standard input and returns it as an integer
    //  Ex: char sentence[SIZE]; int i = 0, c;
    //      while ((i < SIZE - 1) && (c = getchar()) != '\n')
    //          sentence[i++] = c;
    //      sentence[i] = '\0';
    //      printf("[%s]\n", sentence);

    //int puts(const char* s);
    //  prints the string s followed by a newline character.
    //  returns a non-zero int if successful, or EOF if an error occurs
    //  Ex: char sentence[SIZE];
    //      puts("Enter a line of text:");
    //      fgets(sentence, SIZE, stdin);
    //      puts(sentence);

    //***********string.h**********
    //---------String-Handling Library----------
    
    //char* strcpy(char* s1, const char* s2);
    //  Copies string s2 into array s1
    //  The value of s1 is returned
    //  Ex: char x[] = "Happy Birthday to You";
    //      char y[25];
    //      printf("%s\n", strcpy(y, x));
    //      printf("%s\n", y);

    //char* strncpy(char* s1, const char* s2, size_t n);
    //  Copies at most n charracters of string s2 into aaray s1 and returns s1.
    // Ex: char x[] = "Happy Birthday to You";
    //     char y[25], z[15];
    //     strncpy(z, x, 15 - 1); \0 ไม่ถูก copy
    //     z[15 - 1] = '\0';
    //     printf("%s\n", z);

    //char* strcat(char* s1,const char* s2);
    //  Appends string s2 to array s1
    //  the first char of s2 overwrites the terminating null character (\0) of s1
    //  the value of s1 is returned
    //  Ex: char s1[20] = "Happy ";
    //      char s2[] = "New Year";
    //      printf("strcat(s1, s2) = '%s'\n", strcat(s1, s2));
    //      printf("s1 = '%s'\n", s1);
    //char* strncat(char* s1, const char* s2, size_t n);
    //  same as upper function but appends at most n charracters of string s2 to s1
    //  Ex: char s1[20] = "Happy New year";
    //      char s3[] = "I'm ";
    //      printf("strncat(s3, s1, 6) = '%s'\n", strncat(s3, s1, 6));
    //      printf("s3 = '%s'\n", s3);
    
    //-----------String-Handling Library Comparison Functions------------
    //int strcmp(const char* s1, const char* s2);
    //  Compares the string s1 with the string s2
    //  Returns 0 if s1 is equals to s2
    //  Returns greater than 0 if s1 is greater than s2
    //  Returns less than 0 if s1 is less than s2
    //  Ex: const char *s1 = "Happy New Year";
    //      const char *s2 = "Happy New Year";
    //      const char *s3 = "Happy Holidays";
    //      printf("strcmp(s1, s2)" = %d\n", strcmp (s1, s2));
    //      printf("strcmp(s2, s3)" = %d\n", strcmp (s2, s3));
    //      printf("strcmp(s3, s1)" = %d\n", strcmp (s3, s1));

    //int strncmp(const char* s1, const char* s2, size_t n);
    //  Compares up to n characters of the string s1 with the string s2
    //  Returns 0 if s1 is equals to s2
    //  Returns greater than 0 if s1 is greater than s2
    //  Returns less than 0 if s1 is less than s2
    // Ex: const char *s1 = "Happy New Year";
    //     const char *s3 = "Happy Holidays";
    //     printf("strncmp(s1, s3, 6) = %d\n", strncmp(s1, s3, 6));
    //     printf("strncmp(s1, s3, 7) = %d\n", strncmp(s1, s3, 7));
    //     printf("strncmp(s3, s1, 7) = %d\n", strncmp(s3, s1, 7));

    //-----------String-Handling Library Search Functions-----------
    //char* strchr(const char* s, int c);
    //  Locates the first occurrence of character c in string s
    //  if c is found, a pointer to c in s is returned
    //  Otherwise, a NULL pointer is returned
    //  Ex: const char* string = "This is a test";
    //      char c1 = 'a';
    //      char c2 = 'z';
    //      if (strchr(string, c1) != NULL)
    //          printf("'c' was found in \"%s\".\n", c1, string);
    //      if (strchr(string, c2) == NULL)
    //          printf("'%c' was not found in \"%s"\".\n", c2, string);
    //  
    //  Ex: const char* string = "This is a test";
    //      char c1 = 'a';
    //      printf("%s\n", strchr(string, c1)); 

    //char* strrchr(const char* s, int c);
    //  Locates the last occurrence of character c in string s
    //  If c is found, a pointer to c in s is returned
    //  Otherwise,a NULL pointer is returned
    //  Ex: const char* string = "This is a test";
    //  char c1 = 's';
    //  printf("%s\n", strchr(string, c1));
    //  printf("%s\n", strrchr(string, c1));

    //char* strstr(const char* s1, const char* s2);
    //  Locates the first occurrence of string s2 in string s1
    //  If the string is found, a pointer to string in s1 is returned
    //  Otherwise, a NULL pointer is returned
    //  Ex: const char* string = "This is a test sentence";
    //      const char* search = "test";
    //      if (strstr(string, search) != NULL)
    //          printf("'%s' was found in '%s'.\n", search, string);
    //      printf("%s\n", strstr(stromg, search));

    //-----------String-Handling Library Other Functions----------
    //size_t strlen(const char* s);
    //  Determines the length of string s
    //  The number of characters preceding the terminating null character is returned
    //  Ex: const char* s1 = "abcdeghijklmnopqrstuvwxyz";
    //  const char* s2 = "four";
    //  printf("The length of '%s' is %d\n", s1, strlen(s1));
    //  printf("The length of '%s' is %d\n", s2, strlen(s2));

    //char* strerror(int errornum);
    //  Maps errornum into a full text string in a compiler- and locale-specific manner
    //  A pointer to the string is returned
    //  Error numbers are defined in errno.h
    //  Ex: printf("%s\n", strerror(0));
    //      printf("%s\n", strerror(1));
    //      printf("%s\n", strerror(2));
    //      printf("%s\n", strerror(-1));    

             
