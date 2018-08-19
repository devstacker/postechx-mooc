#include<stdio.h>

int main(void) {
    int i, stuNum, stuID, csed101;
    char grade;
    float total = 0;
    printf("----컴퓨터공학 입문 성적----\n");
    printf("수강 인원을 입력하세요: ");
    scanf("%d", &stuNum);

    for(i=0; i < stuNum; i++){
        printf("학번과 점수를 순서대로 입력해주세요: ");
        scanf("%d %d", &stuID, &csed101);
        total += csed101;
        if (csed101 >= 90)
            grade = 'A';
        else if (csed101 >= 80)
            grade = 'B';
        else if (csed101 >= 70)
            grade = 'C';
        else if (csed101 >= 60)
            grade = 'D';
        else
            grade = 'F';
        printf("학번: %d, 학점: %d\n", stuID, csed101);
    }
    printf("과목 평균: %5.2f\n", total/stuNum);
    return 0;
}