#include <stdio.h>
#include <stdlib.h>

int **s;
int m, n;

int user_similarity(int u1, int u2)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((s[u1][i] == 1) && (s[u2][i] == 1))
            count++;
    }
    return count;
}

void recommend_videos(int u)
{
    int *simil = (int *)malloc((m - 1) * sizeof(int));
    int *person = (int *)malloc((m - 1) * sizeof(int));
    int index = 0;

    for (int i = 0; i < m; i++)
    {
        if (i != u)
        {
            simil[index] = user_similarity(u, i);
            person[index] = i;
            index++;
        }
    }

    for (int i = 0; i < m - 2; i++)
    {
        for (int j = i + 1; j < m - 1; j++)
        {
            if (simil[j] > simil[i])
            {
                int temp = simil[j];
                simil[j] = simil[i];
                simil[i] = temp;

                int temp2 = person[j];
                person[j] = person[i];
                person[i] = temp2;
            }
        }
    }

    printf("Recommendations : ");

    // THERE MAY BE TWO USERS WHO HAVE SAME SIMILARITY WITH USER "U", IN THAT CASE IT IS RECOMMENDED TO ONE OF THE USER
    int count2 = 0;
    for (int i = 0; i < m - 1; i++)
    {
        count2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (((s[person[i]][j]) == 1) && (s[u][j] == 0))
            {
                printf("%d ", j);
                count2++;
            }
        }
        if (count2 != 0)
            return;
    }
    if (count2 == 0)
    {
        printf("No recommendations.");
    }
}

int main()
{
    printf("#members = ");
    scanf("%d", &m);
    printf("#videos = ");
    scanf("%d", &n);

    s = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        s[i] = (int *)malloc(n * sizeof(int));
    }

    printf("Enter data : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }

    int u1, u2;
    printf("Enter IDs of two users whose similarity need to be found : ");
    scanf("%d%d", &u1, &u2);
    int c = user_similarity(u1, u2);
    printf("Similarity : %d\n", c);

    int u;
    printf("Enter ID of user who needs to be recommended videos : ");
    scanf("%d", &u);
    recommend_videos(u);
}