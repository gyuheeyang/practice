#include<stdio.h>
int main()
{
	int today =220315;
	int birthday;
	
	printf("�ֹι�ȣ ���ڸ� �Է�: ");
	scanf("%d", &birthday); 
	
	// �Ϲ� ���� ����ϱ�
	int today_year = (today/ 10000) + 100 ;
	int birth_year = birthday/ 10000;
	int year_dif = today_year - birth_year;
	
	//�Ϲ� ���� 
	int kor_age = year_dif + 1; //�Ϲ� ����  

	//month, date ���ϱ�
	int today_mmdd = today-(today/10000)*10000;
	int birth_mmdd = birthday -(birthday/10000)*10000;
		
	//������ ���ϱ�
	int real_age; //�� ����  
	 
	if (birth_mmdd <= today_mmdd)
	{
		real_age = year_dif +1; 
	}
	else 
	{
		real_age = year_dif ;
	}
	
	printf("���� (2022�� 3�� 15��)���� ���̴� %d�� �� ���̴�  %d�� �Դϴ�.", kor_age, real_age);

} 
