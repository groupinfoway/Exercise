
#include<stdio.h>
#include<conio.h>
/*If the array is Local variable ( declared inside a function) , 
then it is unknown as it will take garbage value.
 If it is declared Global or static, then it will be initialized to 0 by default , But in java it is Zero by default*/




int main()

{
	
	int *p[10];
	int n;
	printf("enter size");
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
	scanf("%d",&p[i]);//	scanf("%d",p+i);//scanf("%d",&i[p]);
	}
	for(int i=0;i<n;i++)
	{
	printf("%d\n",i[p]);//printf("%d\n",*(p+i));//printf("%d\n",*(i+p));
	}
	
}
	
	/*int *p[10];
	for(int i=0;i<5;i++)
	{
	scanf("%d\n",p+i);
	}
	
	for(int j=0;j<5;j++)
	{
	printf("%d\n",*(p+j));
	}	
		
	return(0);
}
*/




















/*To print the address of a variable, we use "%p" specifier in C programming language.
 There are two ways to get the address of the variable:

1.By using "address of" (&) operator:
Ex:-
int a=10;
float b=20;
printf("Address of a: %p\n", &a);
printf("Address of a: %p\n", &b);

2.By using pointer variable
Ex:-
int a;
int *ptr_a = &a;
printf("Address of a: %p\n", ptr_a);
*/






/* Basic Pointer to array Program */
/*{
int a[50]={1,2,3,4,5,6,7};
int *p,n;

int i=a[5];
printf("%d\n",i);//print-6

int *p1=&a[3];
printf("%d\n",*p1);//print-4

p=&a[3];
printf("%d\n",p);//print-6487404
printf("%p\n",p);
return (0);
}*/




/*pointer to array*/

//Program:1

/*{	int  *p[5];
	printf("enter 5 element\n");
	
	for(int i=0;i<5;i++)
	{
		scanf("%d",p+i);
	}
	
	for(int i=0;i<5;i++)
	{
		printf("a[%d]=%d\n",i,*(p+i));
	}
}
*/

//Program:-2
/*
{
int a[50],*p,i,n;

p=a;
printf("Enter size of array:");
scanf("%d",&n);
printf("Enter elements of array:");

for(i=0;i<n;++i)
scanf("%d",p+i);

for(i=0;i<n;++i)
printf("%d" ,*(p+i));
return (0);
}*/






















//Program: Print array in Ascending Order
/*{
	int a[15];
	int i,j,n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("Enter %d elemets\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
   for(i=0; i<n; i++) 
   {
	for(j=i+1;j<n;j++)
	{  
	   if(a[i]>a[j])             //if(a[i]<a[j])---> for Descending Order
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
   	}
	}
	printf("sorted array\n");
	for(i=0;i<n;i++)
	{  
	   printf("%d",a[i]);
     }
	
	return(0);
}
*/









//Find the lenght of the given array

/*
{ int  a[]={1 ,56,77,55,66};  
	int length = sizeof(a)/sizeof(a[0]);    
   printf(" lenght/size is %d", sizeof(a));
   return(0);
}
*/



//Program: Reverese Array itself
/*
{
	int a[15];
	int i,n;
	 int temp;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("Enter %d elemets\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	int len=n;
   for(i=0; i<len/2;i++) 
	{        
	temp=a[len-1];
	a[len-1]=a[i];
	a[i]=temp;
	len--;
	}
	printf("After Reverse\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
		
	}
	return(0);
}
*/























// Program: Repeated(duplicate) number in array(only two times)
/*	{
	int a[15];
	int i,j,n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("Enter %d elemets\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(int i = 0; i < n; i++) 
	{  
        for(int j = i + 1; j < n; j++)
		 {  
            if(a[i] == a[j])  
                printf("%d\n", a[j]);  
	 	}
	}
	return(0);
	}*/

































//Program: copy one array elements into another array//
/*{
	int a[15];
	int b[15];
	int i,n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("Enter %d elemets\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("You Entered\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
	  b[i]=a[i];
		
	}
	printf(" Second array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",b[i]);
		
	}
	return(0);
} 



*/






//int main()
//{

/*	char str[]="akashthakare";
    char *ptr;
    ptr=str;
    ptr=&str[4];	
   	printf("%c",*ptr);//print 'h';
*/

/*int a[]={1,2,3,4,5};
void *p;
p=a;

printf("%d",*((int *)p));

*/





//}





















