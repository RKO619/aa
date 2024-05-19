#include<stdio.h>
int main(){
	int windowsize,i,ack,sent=0;
	printf("Enter window size: \n");
	scanf("%d",&windowsize);
	
	
	while(1){
		for(i=0; i<=windowsize; i++)
		{
			
			printf("Frames %d has been transmitted \n",sent+1);
			printf("Acknowledgement has been received for frame %d \n",sent);
			sent++;
			if(windowsize == sent)
				break;
			
		}
			
			break;
	
	}
	printf(" \n");
	printf("All frames has been sent successfully. ");
	return 0;
}
