#include <stdio.h>
struct Point
{
    int x;
    int y;
};
int main()
{
    int index = 0;
    struct Point arr[100];
    printf("huanyingjinrutingchexitong\n");

    while (1)
    {
        printf("1---\n");
        printf("2---\n");
        printf("3---\n");
        printf("4---\n");
        printf("5---\n");

        printf("qingxuanzexiangyinggongneng\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("aaa\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;

            index++;
            printf("aaa\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 2)
        {
            printf("bbb\n");
            if (index > 0)
            {
                index--;
                printf("bbb\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else
            {
                printf("bbb\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }
        if (code == 3)
        {
            printf("ccc\n");
            for (int i = 0; i < index; i++)
            {
                printf("%d (%d %d)\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("ccc\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("fff\n");
            break;
        }
    }

    return 0;
}