#include <cstdio>
#include <cstring>

#define max(a, b) (a > b ? a : b)

int main()
{
    int number_of_paintings, number_of_painters;
    scanf("%d %d", &number_of_paintings, &number_of_painters);

    int time[number_of_paintings + 1][number_of_painters + 1];
    for(int i = 1; i <= number_of_paintings; i++)
        for(int j = 1; j <= number_of_painters; j++)
            scanf("%d", &time[i][j]);

    int time_for[number_of_paintings + 1][number_of_painters + 1];
    memset(time_for, 0, sizeof(time_for));

    for(int painter_i = 1; painter_i <= number_of_painters; painter_i++)
    {
        for(int painting = 1; painting <= number_of_paintings; painting++)
        {
            time_for[painting][painter_i] = max(time_for[painting - 1][painter_i], time_for[painting][painter_i - 1]) +
                                            time[painting][painter_i];
        }
    }

    int all_painters = number_of_painters;

    for(int i = 1; i <= number_of_paintings; i++)
        printf("%d ", time_for[i][all_painters]);

    return 0;
}
