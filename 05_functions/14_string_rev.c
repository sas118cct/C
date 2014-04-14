#include <stdio.h>
#include <string.h>
 
void reverse(char [], int, int);
int main()
{
    char str1[20];
    int size;
 
    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}
 
void reverse(char str1[], int num, int size)
{
    char path;
    path = str1[num];
    str1[num] = str1[size - num];
    str1[size - num] = path;
    if (num == size / 2)
    {
        return;
    }
    reverse(str1, num + 1, size);
}
