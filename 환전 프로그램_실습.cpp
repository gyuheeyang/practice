#include <stdio.H>

int main()
{
	// ȯ�� ����
	const float RATE_USD = 1232.2;
	const float RATE_JPY = 105.918;
	const float RATE_EUR = 1355.36;
	const float RATE_CNY = 194.69;
	const float RATE_GBP = 1612.76;	

	//ȯ���� ���ϴ� �ݾ� �Է¹ޱ� 
   	int won;
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ): ");
	//����ڿ��� ���� �Է¹޾Ƽ� ������ ���� 
	scanf("%d", &won);	

	//��ȭ ���� 
   	const int USD = 1;
	const int JPY = 2;  
	const int EUR = 3;
	const int CNY = 4;
	const int GBP = 5;
	
	//ȯ���� ���ϴ� ��ȭ �Է� �ޱ�  
	int forExchange; 
	
	//do-while�� �̿��Ͽ� ���ǿ� �´� �ʴ� ���� �Էµ� ��� ��� �ݺ��ǰ���  
	do
	{
		printf("ȯ���� ��ȭ�� �����ϼ���(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP): ");
		//����ڿ��� ���� �Է¹޾Ƽ� ������ ���� 
		scanf("%d", &forExchange);	
	}
	while (forExchange<1 | forExchange>5);
	

	//if���� ���� ȯ��, ����� ����Ʈ	
	int result_USD = won / RATE_USD;
	int result_JPY = won / RATE_JPY;
	int result_EUR = won / RATE_EUR;
	int result_CNY = won / RATE_CNY;
	int result_GBP = won / RATE_GBP;
	
	// ȯ�� �Ǽ��� ���  
	float resultf_USD = won / RATE_USD;
	float resultf_JPY = won / RATE_JPY;
	float resultf_EUR = won / RATE_EUR;
	float resultf_CNY = won / RATE_CNY;
	float resultf_GBP = won / RATE_GBP;
	
	// resultForChange(�Ҽ��� �ڸ�) = ȯ�� �Ǽ��� - ȯ�� ������   
	float resultForChange_USD = resultf_USD - result_USD;
	float resultForChange_JPY = resultf_JPY - result_JPY; 
	float resultForChange_EUR = resultf_EUR - result_EUR;
	float resultForChange_CNY = resultf_CNY - result_CNY;
	float resultForChange_GBP = resultf_GBP - result_GBP;

	// �Ž����� = �Ҽ��� �ڸ� * ȯ�� 
	int change_USD = (resultForChange_USD)*RATE_USD;
	int change_JPY = (resultForChange_JPY)*RATE_JPY;
	int change_EUR = (resultForChange_EUR)*RATE_EUR;
	int change_CNY = (resultForChange_EUR)*RATE_CNY;
	int change_GBP = (resultForChange_GBP)*RATE_GBP;

	// �Ž����� ���ڸ� Ż�� 
	int change10_USD = (change_USD/10)*10; 
	int change10_JPY = (change_JPY/10)*10;
	int change10_EUR = (change_EUR/10)*10;
	int change10_CNY = (change_CNY/10)*10;
	int change10_GBP = (change_GBP/10)*10;

	//�Ž����� ���� 
	 int change10_USD_500 = change10_USD / 500; 
	 int change10_USD_100 = (change10_USD-(change10_USD_500*500)) / 100; 
	 int change10_USD_50 = (change10_USD-(change10_USD_500*500)-(change10_USD_100*100)) / 50; 
	 int change10_USD_10 = (change10_USD-(change10_USD_500*500)-(change10_USD_100*100)-(change10_USD_50*50))/ 10;

	
	 int change10_JPY_500 = change10_JPY / 500; 
	 int change10_JPY_100 = (change10_JPY-(change10_JPY_500*500)) / 100; 
	 int change10_JPY_50 = (change10_JPY-(change10_JPY_500*500)-(change10_JPY_100*100)) / 50; 
	 int change10_JPY_10 = (change10_JPY-(change10_JPY_500*500)-(change10_JPY_100*100)-(change10_JPY_50*50))/ 10;


	 int change10_EUR_500 = change10_EUR / 500; 
	 int change10_EUR_100 = (change10_EUR-(change10_EUR_500*500)) / 100; 
	 int change10_EUR_50 = (change10_EUR-(change10_EUR_500*500)-(change10_EUR_100*100)) / 50; 
	 int change10_EUR_10 = (change10_EUR-(change10_EUR_500*500)-(change10_EUR_100*100)-(change10_EUR_50*50))/ 10;


	 int change10_CNY_500 = change10_CNY / 500; 
	 int change10_CNY_100 = (change10_CNY-(change10_CNY_500*500)) / 100; 
	 int change10_CNY_50 = (change10_CNY-(change10_CNY_500*500)-(change10_CNY_100*100)) / 50; 
	 int change10_CNY_10 = (change10_CNY-(change10_CNY_500*500)-(change10_CNY_100*100)-(change10_CNY_50*50))/ 10;


	 int change10_GBP_500 = change10_GBP / 500; 
	 int change10_GBP_100 = (change10_GBP-(change10_GBP_500*500)) / 100; 
	 int change10_GBP_50 = (change10_GBP-(change10_GBP_500*500)-(change10_GBP_100*100)) / 50; 
	 int change10_GBP_10 = (change10_GBP-(change10_GBP_500*500)-(change10_GBP_100*100)-(change10_GBP_50*50))/ 10;


	if (forExchange == 1)
	{
		printf("���� ȯ��: 1232.2\n");
		printf("ȯ�����: %d �޷�\n", result_USD);
		printf("�Ž�����:%d ��\n", change10_USD);
		
		printf("500��: %d��\n", change10_USD_500);
		printf("100��: %d��\n", change10_USD_100);
		printf("50��: %d��\n", change10_USD_50);	
		printf("10��: %d��\n", change10_USD_10);	
	}
	else if (forExchange == 2)
	{
		printf("���� ȯ��: 105.918\n");
		printf("ȯ�����: %d ��\n", result_JPY);
		printf("�Ž�����:%d ��\n", change10_JPY);
			
		printf("500��: %d��\n", change10_JPY_500);
		printf("100��: %d��\n", change10_JPY_100);
		printf("50��: %d��\n", change10_JPY_50);	
		printf("10��: %d��\n", change10_JPY_10);
	}	
		
	else if (forExchange == 3)
	{
		printf("���� ȯ��: 1355.36\n");
		printf("ȯ�����:%d ����\n", result_EUR);
		printf("�Ž�����\n%d ��\n", change10_EUR);
			
		printf("500��: %d��\n", change10_EUR_500);
		printf("100��: %d��\n", change10_EUR_100);
		printf("50��: %d��\n", change10_EUR_50);	
		printf("10��: %d��\n", change10_EUR_10);
	}	
	else if (forExchange == 4)
	{
		printf("���� ȯ��: 194.69\n");
		printf("ȯ�����: %d ����\n", result_CNY);
		printf("�Ž�����: %d ��\n", change10_CNY);
			
		printf("500��: %d��\n", change10_CNY_500);
		printf("100��: %d��\n", change10_CNY_100);
		printf("50��: %d��\n", change10_CNY_50);	
		printf("10��: %d��\n", change10_CNY_10);		
	}	
	else if (forExchange == 5)
	{
		printf("���� ȯ��: 1612.76\n");
		printf("ȯ�����: %d �Ŀ��\n", result_GBP);
		printf("�Ž�����: %d ��\n", change10_GBP);
			
		printf("500��: %d��\n", change10_GBP_500);
		printf("100��: %d��\n", change10_GBP_100);
		printf("50��: %d��\n", change10_GBP_50);	
		printf("10��: %d��\n", change10_GBP_10);				
	}
	
	
	return 0;

}











 

