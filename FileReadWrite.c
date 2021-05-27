#include<stdio.h>  
#include<string.h>
void main( )  
{  
FILE *fp ;
FILE *fp2;  
char ch ;  
int i=0,j=0,k=0;
int arr[10];
char data[20][255];
fp = fopen("E:/C Programming/input.txt","r") ;  
printf("\nContent of first file\n");
while ( 1 )  
{  
ch = fgetc ( fp ) ;  
if ( ch == EOF )  
break ;  
else{
	if(ch=='.'){
		i++;
		j=0;
		k++;
		printf("\n");
	}
	else{
	data[i][j]=ch;
	
	j++;arr[k]=j;
printf("%c",ch) ;
//printf("%c",data); 		
	}
}
 
}  
fp2 = fopen("E:/C Programming/output.txt","w") ;  
int line=i,m=0;
//printf("\n%d",i);
int count=0;
for(i=line-1;i>=0;i--){
	for(m=0;m<arr[i];m++){
		ch=data[i][m];
	if(i==0)
	{
		if(count == 0)
		{
			fprintf(fp2,"\n");
			count = 1;
		}	
	 fprintf (fp2, "%c", ch);//writing single character into file
	}
	else
	{
		fprintf (fp2, "%c", ch);
	}
	}
}
fclose(fp2);
fp2 = fopen("E:/C Programming/output.txt","r") ; 
printf("\n------------------------------------------------------------------\n");
printf("\nContent of second file\n");
while ( 1 )  
{  
ch = fgetc ( fp2 ) ;  
if ( ch == EOF )  
break ;  
else{
	if(ch==EOF){
		
		break;
	}
	else{
		printf("%c",ch);
	}	
}
}  
fclose (fp ) ;  
}  

