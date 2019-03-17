#include <stdio.h>


int isvalid(char ch)
{
    return (isalpha(ch) || isdigit(ch));
}

int ispalin(char *s, int i, int j)
{
    if(i>j)
        return 1; // this must be palindromic

    if(s[i]==s[j])
        return ispalin(s, i+1, j-1); // try for next pair
    return 0; // else they are unequal, hence not a palindrome
}

int main()
{
    char str[100];
    gets(str);
    if(ispalin(str, 0, strlen(str)-1)==1)
        printf("palindromic\n");
    else
        printf("not palindromic\n");
    return 0;
}

