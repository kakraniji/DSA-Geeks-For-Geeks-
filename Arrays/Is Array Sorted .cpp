bool arraySortedOrNot(int arr[], int n) {
        
        
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]>arr[i])
            return false;
            
        }
        return true;
    }
    
    Recursive code:
    -------------------
    
     bool solve (int a[],int i,int n)
    {
        if(i==n)
        return true;
        
        if(a[i-1]>a[i])
        return false;
        
        solve(a,i+1,n);
    }

    bool arraySortedOrNot(int arr[], int n) {
        
        return solve(arr,1,n);
    }
