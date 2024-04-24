int tribonacci(int n){
    int a[40]={0,1,1};//前3項先準備好,後面的37項沒寫,就都是0
    for(int i=3;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];//前3項相加得到新的項
    }
    return a[n];//答案要算出第n項



}