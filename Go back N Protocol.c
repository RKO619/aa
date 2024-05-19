#include<stdio.h>
int main(){
	int windowsize,ack,i,sent=0;
	printf("Enter the size of Window: \n");
	scanf("%d",&windowsize);
	while(1){
		for(i=0; i<windowsize;i++){
			printf("Frames %d has been transmitted \n",sent);
			sent++;
			
			if(windowsize == sent)
				break;
			
		}
		
		printf("Enter last acknowledgement received\n");
		scanf("%d",&ack);
		
		if(ack == windowsize)
			break;
		else
			sent = ack;
	
	}
	printf("All frames has been sent successfully: ");	
	return 0;
}
