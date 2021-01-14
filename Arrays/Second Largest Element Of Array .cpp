int print2largest(int arr[], int arr_size)
    {
    	
    	int n=arr_size;
    	int max=arr[0];
    	for(int i=1;i<n;i++){
    	    if(arr[i]>max)
    	    max=arr[i];
    	}
    	int second_max=INT_MIN;
    	int check=0;
    	
    	for(int i=0;i<n;i++)
    	{
    	    if(arr[i]>second_max && arr[i]!=max){
    	        check++;
    	    second_max=arr[i];
    	    }
    	    
    	}
    	if(check==0)
    	return -1;
    	return second_max;
    }
