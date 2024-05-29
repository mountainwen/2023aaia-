int equalSubstring(char* s, char* t, int maxCost) {
    int N= strlen(s);//先知道字串的長度
    int ans=0,j=0;
    for(int i=0;i<N;i++){//字串的迴圈
        maxCost -=abs(s[i]-t[i]);
        while (maxCost<0)
        {
            maxCost +=abs(t[j]-s[j]);
            j+=1;
        }
        if(i-j+1>ans) ans=i-j+1;
    }
    return ans;
}