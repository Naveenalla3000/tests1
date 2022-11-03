#include<stdio.h>
#include<string.h>

struct cricket
{
	char name[99];
	int runs,cen,rank;
	float sr;
};


main()
{
	struct cricket cri[100],tem;
	int n,i;
	printf("Enter the no.of players : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Enter the name, runs,centuries,rank and steic rate of %d: ",i);
	scanf("%s%d%d%d%f",cri[i].name,&cri[i].runs,&cri[i].cen,&cri[i].rank,&cri[i].sr);
	}
	

	int j;
	for(i=0;i<n;i++){
	    for(j=0;j<n-i-1;j++){
	        if(strcmp(cri[j].name,cri[j+1].name)>0){
	            tem=cri[j];
	            cri[j]=cri[j+1];
	            cri[j+1]=tem;
	        }
	    }
	}
	
	
	
	for(i=0;i<n;i++){
		printf("%s\t%d\t%d\t%d\t%f\n",cri[i].name,cri[i].runs,cri[i].cen,cri[i].rank,cri[i].sr);
	}
}
