#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getSpaceIdx(char user[])
{
    int idx = 0;

    for (int i = 0; i < strlen(user); i++)
    {
        if (user[i] != 32)
        {
            idx ++;
        }
        else
            break;
    }
    
    return idx;
}

int CompareName(char name1[], char name2[])
{
    int idx1 = getSpaceIdx(name1);
    int idx2 = getSpaceIdx(name2);

    if (idx1 != idx2)
        return 0;
    else
        return !strncmp(name1, name2, idx1);
}

int CompareAge(char name1[], char name2[])
{
    int idx1 = getSpaceIdx(name1);
    int idx2 = getSpaceIdx(name2);
    int age1, age2;

    age1 = atoi(&name1[idx1+1]);
    age2 = atoi(&name2[idx2+1]);

    if (age1 == age2)
        return 1;
    else
        return 0;
}

int main(void)
{
    char user1[20];
    char user2[20];

    printf("첫번째 유저의 이름과 나이: ");
    fgets(user1, sizeof(user1), stdin);
    user1[strlen(user1)-1] = 0;
    
    printf("두번째 유저의 이름과 나이: ");
    fgets(user2, sizeof(user2), stdin);
    user2[strlen(user2)-1] = 0;

    if (CompareName(user1, user2))
        puts("이름이 같습니다.");
    else
        puts("이름이 같지 않습니다.");
    
    if (CompareAge(user1, user2))
        puts("나이가 같습니다.");
    else
        puts("나이가 같지 않습니다.");

    return 0;
}

// 로컬변수의 포인터는 동적 생성한게 아니라면 외부로 전달하지 말 것.