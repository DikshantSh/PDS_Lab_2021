#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter s1 : ");
    gets(s1);

    printf("Enter s2 : ");
    gets(s2);

    char s[200];

    int i = 0, j = 0, l = 0;int c1=0,c2=0;

    while ((s1[i] != '\0') || (s2[j] != '\0'))
    {
        while (s1[i] != '\0')
        {
            if (s1[i] != ' ')
            {
                s[l] = s1[i];
                l++;
                i++;
            }
            else if (s1[i] == ' ')
            {
                s[l] = s1[i];
                l++;
                i++;
                break;
            }
        }
        if ((s1[i] == '\0')&&(c1==0))
        {
            s[l] = ' ';
            l++;c1++;
        }
        while (s2[j] != '\0')
        {
            if (s2[j] != ' ')
            {
                s[l] = s2[j];
                l++;
                j++;
            }
            else if (s2[j] == ' ')
            {
                s[l] = s2[j];
                l++;
                j++;
                break;
            }
        }
        if ((s2[j] == '\0')&&(c2==0))
        {
            s[l] = ' ';
            l++;c2++;
        }
    }
    s[l] = '\0';
    printf("%s", s);
}