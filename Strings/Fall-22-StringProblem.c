#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];
    char str3[50];

    strcpy(str1, "Beautiful ");
    strcpy(str2, "Bangladesh");

    int len;

    len = strlen(str1);
    printf("strlen (str1) : %d\n", len);

    strcpy(str3, str2);
    printf("strcpy( str 3, str2): %s\n", str3);

    strncpy(str3, str2, 5);
    printf("strncpy( str1, str2,5): %s\n", str3);

    strcat(str1, str2);
    printf("strcat( str1, str2): %s\n", str1);

    strncat(str1, str2, 3);
    printf("strncat( str1, str2,3): %s\n", str1);

    return 0;
}

/* Output:

strlen (str1) : 10
strcpy( str 3, str2): Bangladesh
strncpy( str1, str2,5): Bangladesh
strcat( str1, str2): Beautiful Bangladesh
strncat( str1, str2,3): Beautiful BangladeshBan

*/