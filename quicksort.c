#include <stdio.h>

void quicksort(int number[25] , int first,int last){
	int i;
	int j;
	int pivot;
	int temp;
	
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		
		
	while(i<j){
		while(number[i]<=number[j]&&i<last)
			i++;
		while(number[j]>number[pivot])
		j--;
		
		if(i<j){
			temp=number[i];
			number[i]=number[j];
			number[j]=temp;
			
			}
		}
		
		temp=number[pivot];
		number[pivot]=number[j];
		quicksort(number,first,j-1);
		quicksort(number,j+1,last);
		
		}
			}
			
			
			
	int main () {
	
		int count;
		int number[25];
		
		printf("how many elements are you going to enter?:");
		scanf("%d",&count);
		
		printf("enter %d elements:",count);
		
		for(int i=0;i<count;i++)
			scanf("%d",&number[i]);
			
		quicksort(number,0,count-1);
		
		printf("order of sorted elements:");
		
		for(int i=0;i<count;i++)
				printf("%d",number[i]);
				
				return 0;
			
		}
