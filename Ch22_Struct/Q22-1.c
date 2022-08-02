#include <stdio.h>

struct employee
{
    char name[20];
    char ID[14];
    int pay;
};

int main(void)
{
    struct employee emp;

    printf("종업원 이름: ");
    scanf("%s", emp.name);
    printf("주민등록번호: ");
    scanf("%s", emp.ID);
    printf("급여: ");
    scanf("%d", &emp.pay);

    puts("");

    puts("[종업원 정보]");
    printf("이름: %s\n", emp.name);
    printf("주민등록번호: %s\n", emp.ID);
    printf("급여: %d\n", emp.pay);
    
    return 0;
}
