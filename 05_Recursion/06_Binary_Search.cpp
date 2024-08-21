int BS(int a[],int k,int start,int end){
    if(start>end) return -1;
    int mid=start+(end-start)/2;
    if(a[mid]==k){
        return mid;
    }
    else if(k>a[mid]){
        return BS(a,k,mid+1,end);
    }
    else{
        return BS(a,k,start,mid-1);
    }
}