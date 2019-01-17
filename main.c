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
            scanf("%d",&x);
            scanf("%d",&y);

            arr[index].x=x;
            arr[index].y=y;

            index++;
            printf("aaa\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
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