#include <stdio.h>
#include <stdlib.h>

int main()
{

        char color[20];
        char pluralNoun[20];
        char celebF[20];
        char celebL[20];

        printf("Enter a color: ");
        scanf("%s", color);

        printf("Enter a plural-noun: ");
        scanf("%s", pluralNoun);

        printf("Enter a celebrity name: ");
        scanf("%s%s", celebF, celebL);

        printf("Roses are %s\n", color);
        printf("%s are Blue\n", pluralNoun);
        printf("I love %s%s\n", celebF, celebL);

        return 0;
}
