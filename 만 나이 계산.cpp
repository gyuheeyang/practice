#include<stdio.h>
int main()
{
	int today =220315;
	int birthday;
	
	printf("주민번호 앞자리 입력: ");
	scanf("%d", &birthday); 
	
	// 일반 나이 계산하기
	int today_year = (today/ 10000) + 100 ;
	int birth_year = birthday/ 10000;
	int year_dif = today_year - birth_year;
	
	//일반 나이 
	int kor_age = year_dif + 1; //일반 나이  

	//month, date 구하기
	int today_mmdd = today-(today/10000)*10000;
	int birth_mmdd = birthday -(birthday/10000)*10000;
		
	//만나이 구하기
	int real_age; //만 나이  
	 
	if (birth_mmdd <= today_mmdd)
	{
		real_age = year_dif +1; 
	}
	else 
	{
		real_age = year_dif ;
	}
	
	printf("오늘 (2022년 3월 15일)기준 나이는 %d세 만 나이는  %d세 입니다.", kor_age, real_age);

} 
