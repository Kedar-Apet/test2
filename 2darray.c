#include<stdio.h>
void main(){
	int arr[3][3];
	int i,j;
	printf("Enter element into the array:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Element at arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
			printf("\n");
		}
	}
	int sum=0,min=arr[0][0],max=arr[0][0];
int  avg=0;
	for (i = 0; i <3; i++) {
	for ( j = 0; j <3; j++)	{
				if(max<arr[i][j]) {
		max=arr[i][j];
	}
	else if(min>arr[i][j]) {
		min=arr[i][j];
		}

	}
}
for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum=sum+arr[i][j];
		}
	}
avg=sum/9;
	printf("\nMinimum=%d",min);
	printf("\nMaximum=%d",max);
	printf("\nSum=%d",sum);
	printf("\naverage=%d",avg);

}
