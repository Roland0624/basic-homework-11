#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a,b,c,tmp;
	printf("�п�Ja,b,c");
	scanf("%d%d%d",&a,&b,&c);
	int array[3]={a,b,c};
	for(int x=0;x<2;x++)
		for(int n=x+1;n<3;n++)
		{
			if(array[n]>array[x])
			{
				tmp=array[x];
				array[x]=array[n];
				array[n]=tmp;
			}
		}
		
	for(int x=2;x>=0;x--){
		printf("%d",array[x]);
		printf(" ");
	}
}
