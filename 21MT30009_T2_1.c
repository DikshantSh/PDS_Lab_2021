#include <stdio.h>
#include <math.h>

struct point
{
    float x;
    float y;
};

float calculate_distance(struct point a, struct point b)
{
    float d = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
    return d;
}

int main()
{
    struct point p[10];
    int n;
    printf("Enter no. of points (2 to 10) : ");
    scanf("%d", &n);

    printf("Enter (x,y) coordinates of the points : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f%f", &p[i].x, &p[i].y);
    }

    float min = sqrt(pow((p[0].x - p[1].x), 2) + pow((p[0].y - p[1].y), 2)); //Initialising as dits between first two points
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            float dist = calculate_distance(p[i], p[j]);
            if (dist <= min)
            {
                min = dist;
            }
        }
    }

    printf("Minimum inter-point distance = %f", min);
}