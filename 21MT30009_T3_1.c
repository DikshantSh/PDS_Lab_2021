#include <stdio.h>
#include <string.h>

typedef struct wordsent
{
    char word[20];
    int sent_core;

} wordsent;

wordsent comp[9];

float sentiment(char *s)
{

    char words[20][100];
    int index1 = 0, index2 = 0;
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            if(s[i-1]==' ')
            {
                continue;
            }
            words[index1][index2] = '\0';
            index2 = 0;
            index1++;
            count++;
        }
        else if (s[i] == '.')
        {
            words[index1][index2] = '\0';
            count++;
        }
        else
        {
            words[index1][index2] = s[i];
            index2++;
        }
    }
    words[index1][index2]='\0';
    count++;

    // for (int i = 0; i < count; i++)
    // {
    //     printf("%s\n",words[i]);
    // }

    float sum=0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (strcmp(words[i], comp[j].word) == 0)
            {
                sum = sum + comp[j].sent_core;
                break;

            }
        }
    }

    // printf("\n%f%d",sum,count);

    return (sum /count);
}

int main()
{

    strcpy(comp[0].word, "good");
    comp[0].sent_core = 3;
    strcpy(comp[1].word, "excellent");
    comp[1].sent_core = 5;
    strcpy(comp[2].word, "happy");
    comp[2].sent_core = 3;
    strcpy(comp[3].word, "delicious");
    comp[3].sent_core = 4;
    strcpy(comp[4].word, "fine");
    comp[4].sent_core = 2;
    strcpy(comp[5].word, "bad");
    comp[5].sent_core = -2;
    strcpy(comp[6].word, "poor");
    comp[6].sent_core = -3;
    strcpy(comp[7].word, "worst");
    comp[7].sent_core = -5;
    strcpy(comp[8].word, "irritating");
    comp[8].sent_core = -2;

printf("Enter a string : ");
    char s[250];
    gets(s);

    float score = sentiment(s);
    printf("Sentiment score : %f", score);
}