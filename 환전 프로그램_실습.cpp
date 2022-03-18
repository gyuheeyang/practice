#include <stdio.H>

int main()
{
	// 환율 선언
	const float RATE_USD = 1232.2;
	const float RATE_JPY = 105.918;
	const float RATE_EUR = 1355.36;
	const float RATE_CNY = 194.69;
	const float RATE_GBP = 1612.76;	

	//환전을 원하는 금액 입력받기 
   	int won;
	printf("환전을 원하는 금액을 입력하세요(원화): ");
	//사용자에게 값을 입력받아서 변수에 저장 
	scanf("%d", &won);	

	//외화 선언 
   	const int USD = 1;
	const int JPY = 2;  
	const int EUR = 3;
	const int CNY = 4;
	const int GBP = 5;
	
	//환전을 원하는 외화 입력 받기  
	int forExchange; 
	
	//do-while을 이용하여 조건에 맞는 않는 값이 입력될 경우 계속 반복되게함  
	do
	{
		printf("환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP): ");
		//사용자에게 값을 입력받아서 변수에 저장 
		scanf("%d", &forExchange);	
	}
	while (forExchange<1 | forExchange>5);
	

	//if절로 기존 환율, 결과값 프린트	
	int result_USD = won / RATE_USD;
	int result_JPY = won / RATE_JPY;
	int result_EUR = won / RATE_EUR;
	int result_CNY = won / RATE_CNY;
	int result_GBP = won / RATE_GBP;
	
	// 환전 실수값 출력  
	float resultf_USD = won / RATE_USD;
	float resultf_JPY = won / RATE_JPY;
	float resultf_EUR = won / RATE_EUR;
	float resultf_CNY = won / RATE_CNY;
	float resultf_GBP = won / RATE_GBP;
	
	// resultForChange(소수점 자리) = 환전 실수값 - 환전 정수값   
	float resultForChange_USD = resultf_USD - result_USD;
	float resultForChange_JPY = resultf_JPY - result_JPY; 
	float resultForChange_EUR = resultf_EUR - result_EUR;
	float resultForChange_CNY = resultf_CNY - result_CNY;
	float resultForChange_GBP = resultf_GBP - result_GBP;

	// 거스름돈 = 소수점 자리 * 환율 
	int change_USD = (resultForChange_USD)*RATE_USD;
	int change_JPY = (resultForChange_JPY)*RATE_JPY;
	int change_EUR = (resultForChange_EUR)*RATE_EUR;
	int change_CNY = (resultForChange_EUR)*RATE_CNY;
	int change_GBP = (resultForChange_GBP)*RATE_GBP;

	// 거스름돈 원자리 탈락 
	int change10_USD = (change_USD/10)*10; 
	int change10_JPY = (change_JPY/10)*10;
	int change10_EUR = (change_EUR/10)*10;
	int change10_CNY = (change_CNY/10)*10;
	int change10_GBP = (change_GBP/10)*10;

	//거스름돈 동전 
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
		printf("기준 환율: 1232.2\n");
		printf("환전결과: %d 달러\n", result_USD);
		printf("거스름돈:%d 원\n", change10_USD);
		
		printf("500원: %d개\n", change10_USD_500);
		printf("100원: %d개\n", change10_USD_100);
		printf("50원: %d개\n", change10_USD_50);	
		printf("10원: %d개\n", change10_USD_10);	
	}
	else if (forExchange == 2)
	{
		printf("기준 환율: 105.918\n");
		printf("환전결과: %d 엔\n", result_JPY);
		printf("거스름돈:%d 원\n", change10_JPY);
			
		printf("500원: %d개\n", change10_JPY_500);
		printf("100원: %d개\n", change10_JPY_100);
		printf("50원: %d개\n", change10_JPY_50);	
		printf("10원: %d개\n", change10_JPY_10);
	}	
		
	else if (forExchange == 3)
	{
		printf("기준 환율: 1355.36\n");
		printf("환전결과:%d 유로\n", result_EUR);
		printf("거스름돈\n%d 원\n", change10_EUR);
			
		printf("500원: %d개\n", change10_EUR_500);
		printf("100원: %d개\n", change10_EUR_100);
		printf("50원: %d개\n", change10_EUR_50);	
		printf("10원: %d개\n", change10_EUR_10);
	}	
	else if (forExchange == 4)
	{
		printf("기준 환율: 194.69\n");
		printf("환전결과: %d 위안\n", result_CNY);
		printf("거스름돈: %d 원\n", change10_CNY);
			
		printf("500원: %d개\n", change10_CNY_500);
		printf("100원: %d개\n", change10_CNY_100);
		printf("50원: %d개\n", change10_CNY_50);	
		printf("10원: %d개\n", change10_CNY_10);		
	}	
	else if (forExchange == 5)
	{
		printf("기준 환율: 1612.76\n");
		printf("환전결과: %d 파운드\n", result_GBP);
		printf("거스름돈: %d 원\n", change10_GBP);
			
		printf("500원: %d개\n", change10_GBP_500);
		printf("100원: %d개\n", change10_GBP_100);
		printf("50원: %d개\n", change10_GBP_50);	
		printf("10원: %d개\n", change10_GBP_10);				
	}
	
	
	return 0;

}











 

