#include<stdio.h>
#include<stdlib.h>
 //void quiksort(int a[],int lb,int up);
 //int partition (int a[],int lb,int up);
 

	void  quicksort(int a[25],int lb,int ub)
	{
   		int st, end, pivot, temp;

   if(lb<ub)
	{
      		pivot=lb;
      		st=lb;
      		end=ub;

     		 while(st<end)
		{
       	  		while(a[st]<=a[pivot]&&st<ub)
           		 st++;
         		while(a[end]>a[pivot])
           		 end--;
         		if(st<end)
			{
           		 temp=a[st];
            		a[st]=a[end];
            		a[end]=temp;
        		 }
     		 }

     		 temp=a[pivot];
     		 a[pivot]=a[end];
     		 a[end]=temp;
     		 quicksort(a,lb,end-1);
     		 quicksort(a,end+1,ub);

 	  }
	}
	int main(){
   int i, n, a[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   quicksort(a,0,n-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);

   return 0;
}
