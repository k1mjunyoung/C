#include <stdio.h>

struct employee
{
    char name[20];
    char ID[14];
    int pay;
};

int main(void)
{
    struct employee emp[3];

    puts("[종업원 정보 입력]");

    for (int i = 0; i < 3; i++)
    {
        printf("종업원%d 이름: ", i+1);
        scanf("%s", emp[i].name);
        printf("종업원%d 주민등록번호: ", i+1);
        scanf("%s", emp[i].ID);
        printf("종업원%d 급여: ", i+1);
        scanf("%d", &emp[i].pay);
    }

    puts("");

    puts("[종업원 정보 출력]");

    for (int i = 0; i < 3; i++)
    {   
        printf("종업원%d 이름: %s\n", i+1, emp[i].name);
        printf("종업원%d 주민등록번호: %s\n", i+1, emp[i].ID);
        printf("종업원%d 급여: %d\n", i+1, emp[i].pay);
    }
    
    return 0;
}