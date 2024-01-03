#include <stdio.h>
#include <string.h>

struct word
{
    char value[1000];
    int num;
};

int checkDX(char a[1000]){
    int l = 0, h = strlen(a) - 1;

    while (h>=l){
        if (a[l] != a[h]) return 0;
        l++;
        h--;
    }

    return 1;
}

main() {
	struct word listwords[1000];
	char a[1000];
    int cnt = 0;
    int maxValue = 0;

    while (scanf("%s", a) != EOF)
    {
        

        if (checkDX(a) == 0) continue;

        int ok = 1;
        for (int i = 1; i <= cnt; i++)
            if (strcmp(listwords[i].value, a) == 0)
            {
                ok = 0;
                listwords[i].num++;

                break;
            }

        if (ok == 1)
        {
            cnt++;
            strcpy(listwords[cnt].value, a);
            listwords[cnt].num = 1;

            if (strlen(listwords[cnt].value) > maxValue)
                maxValue = strlen(listwords[cnt].value);
        }
    }

    for(int i=1; i<=cnt; i++)
        if (strlen(listwords[i].value) == maxValue){
            printf("%s %d\n", listwords[i].value, listwords[i].num);
        }
}

