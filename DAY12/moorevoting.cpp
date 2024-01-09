         int count=0;
        int element=0;
        n=arr.length;
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                element=arr[i];
            }
            else if(element==arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int count2=0;//verifying majority element
        for(int i=0;i<n;i++){
            if(element==arr[i]){
                count2++;
            }
        }
        if(count2>arr.length/2){
            return element;
        }
        return -1;
