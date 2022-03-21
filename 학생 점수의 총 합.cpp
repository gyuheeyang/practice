#include<stdio.h>

int main()
{
	int score[5][2]; //5는 학생의 수를 의미 2는 수학 점수와 영어 점수를 의미  
	int total[2] = { 0, };
	int i;
	for (i = 0; i < 5; i++)
	{
		
		printf("%d번 학생의 수학, 영어 점수: ", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);
	}
	
	for (i = 0;i < 5; i++)
	{
		total[0] += score[i][0]; //수학 점수만 저장 
		total[1] += score[i][1]; //영어 점수만 저장  
	}

	printf("\n\n5명의 수학 점수 합계: %d\n", total[0]); 
	printf("5명의 영어 점수 합계: %d", total[1]); 
	return 0; 
}
