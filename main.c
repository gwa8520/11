#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	int i;
	int grade[5];
	
	for(i=0; i<5; i++){
		
		printf("grade[%i]= ",i);
		scanf("%d",&grade[i]);
		
	}
	
	int *ptr;
	ptr=grade[5];
	int sum;
	
	for(i=0;i<5;i++){
		
		printf("grade[%i] is %i\n",i,grade[i]);
		sum+=grade[i];
		
	}
	
	printf("average is %i",sum/5);
	

	
	return 0;
}
