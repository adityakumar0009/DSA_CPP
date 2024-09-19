bool ispalindrome(char ch[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}