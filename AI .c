//AI TALKING MINI PROGRAM
#include<stdio.h>


void body();

int main(){
	
	printf("First Let Me Know Your good Name:");
     body();
	return 0;
}
void body(){
	char name[10];
	scanf("%s",&name);
	printf("hii %s\n",name);
	int upset;
	printf("Looking so upset(yes(1) or no(2)): ");
	scanf("%d",&upset);
	if(upset==1){
		printf("lets play a tiny game for fun\n");
		printf("lets Go\n");
		int choosenumber;
		printf("choose any one number from below\n");
		printf("a)30  b)20  c)15  d)50\n");
		scanf("%d",&choosenumber);
		if(choosenumber==30){
			int hii;
			printf("now divide the number 30 by 2\n");
			printf("your answer will be \n");
			scanf("%d",&hii);
			if(hii==15){
				int r;
				printf("going good.now multiply 15 by 200\n");
				printf("your answer is");
				scanf("%d",&r);
				if(r==3000){
					printf("awesome.what an incredible performance %s\n",name);
					printf("you won the game hope you liked it ");
				}
					else printf("your answer is wrong.better luck next time");

			}
			else printf("your answer is wrong please better luck next time");
		}
		else if (choosenumber==20){	int why;
			printf("now multiply the number 20 by 66\n");
			printf("your answer will be \n");
			scanf("%d",&why);
			if(why==1320){
				int u;
				printf("going good.now divide 13200 by 8\n");
				printf("your answer is");
				scanf("%d",&u);
				if(u==1650){
					printf("awesome.what an incredible performance %s\n",name);
					printf("you won the game hope you liked it ");
		}
			else printf("your answer is wrong.better luck next time");

	}
	else printf("your answer is wrong.better luck next time");

}
else if (choosenumber==15){	int ui;
			printf("now reverse the number 15\n");
			printf("add this reverse number in 49\n");
			printf("your answer will be \n");
			scanf("%d",&ui);
			if(ui==100){
				int yu;
				printf("going good.now divide 100 by 20\n");
				printf("your answer is");
				scanf("%d",&yu);
				if(yu==5){
					printf("awesome.what an incredible performance %s\n",name);
					printf("you won the game hope you liked it ");
		}
			else printf("your answer is wrong.better luck next time");

	}
	else printf("your answer is wrong.better luck next time");

}
else if (choosenumber==50){	int ti;
			printf("now what will be the answer if 50 will add by 45 and divide by the number 10\n");
			
			printf("your answer will be \n");
			scanf("%d",&ti);
			if(ti==50){
				int yuo;
				printf("going good.now multiply 50 by 20\n");
				printf("your answer is");
				scanf("%d",&yuo);
				if(yuo==1000){
					printf("awesome.what an incredible performance %s\n",name);
					printf("you won the game hope you liked it ");
		}
			else printf("your answer is wrong.better luck next time");

	}
	else printf("your answer is wrong.because according to BODMUS rule divide first and then add");

}
}
	
else if(upset==2){
		printf("okay meet me soon\n");
		printf("BYE BYE  %s",name);}
	}
	
