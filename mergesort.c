
 #include<stdio.h>
 void merge(int a[],int lb,int mid,int ub)
	{
		int i=0,j=0,k=0,b[5];	    
		   i=lb;
		j=mid+1;
		k=lb;
		while(i<=mid && j<=ub)
		{
			if(a[i]<=a[j])
			{
				b[k]=a[i];
				i++;
			}
			else
			{
				b[k]=a[j];
				j++;
			}
			k++;
		}

			if(i>mid)
			{
				while(j<=ub)
				{
					b[k]=a[j];
					k++,j++;
				}
			}
			else
			{
				while(i<=mid)
				{
					b[k]=a[i];
					k++,i++;
				}
			}
			for(k=lb;k<=ub;k++)
			{
				a[k]=b[k];
			}

	}

  void mergesort(int a[],int lb,int ub)
	{
		int mid;
		if(lb<ub)
		{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
		}
	}
  int main()
 {
   int i, n, a[5];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   mergesort(a,0,n-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);

   return 0;
 }
