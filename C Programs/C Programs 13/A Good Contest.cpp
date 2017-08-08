#include <cstdio>
#define MAX_SIZE 10 + 2

int main()
{
    int no_of_users, good_contest = false;
    scanf("%d", &no_of_users);

    while(no_of_users--)
    {
        char name[MAX_SIZE];
        int before_score, after_score;
        scanf("%s %d %d", name, &before_score, &after_score);

        if(before_score >= 2400 && after_score > before_score)
            good_contest = true;
    }

    printf(good_contest ? "YES\n" : "NO\n");
    return 0;
}
