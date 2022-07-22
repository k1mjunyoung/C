#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int seed;
    int user_choice;
    int cpt_choice;
    int tmp = 0;
    int win = 0;
    int draw = 0;
    char *trans_user;
    char *trans_cpt;

    while (tmp < 1)
    {
        printf("[바위 = 1, 가위 = 2, 보 = 3] 당신의 선택은? ");
        scanf("%d", &user_choice);

        seed = (int)time(NULL);
        srand(seed);
        cpt_choice = rand()%3+1;

        if (user_choice == 1)
            trans_user = "바위";
        else if (user_choice == 2)
            trans_user = "가위";
        else if (user_choice == 3)
            trans_user = "보";

        if (cpt_choice == 1)
            trans_cpt = "바위";
        else if (cpt_choice == 2)
            trans_cpt = "가위";
        else if (cpt_choice == 3)
            trans_cpt = "보";

        if (user_choice - cpt_choice == -1)
        {
            printf("\n당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다!\n", trans_user, trans_cpt);
            win++;
        }
        else if (user_choice - cpt_choice == 0)
        {
            printf("\n당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", trans_user, trans_cpt);
            draw++;
        }
        else
        {
            printf("\n당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n\n", trans_user, trans_cpt);
            printf("게임의 결과: %d승 %d무\n", win, draw);
            tmp++;
        }
    }
    
    return 0;
}