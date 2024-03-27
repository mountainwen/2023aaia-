int maxFrequencyElements(int* nums, int numsSize) {
    int a[101]={};//每個陣列格子裡都會補0,統計數字出現的次數
    int best=0;//出現最多次數
    for(int i=0;i<numsSize;i++)
        
    {
        int now=nums[i];//現在要統計的數
        a[now]++;
        if(a[now]>best)best=a[now];
    }
    int ans=0;
    for(int i=1; i<=100;i++)
    {
        if(a[i]==best) ans+=a[i]   ;
    }
    return ans;
}