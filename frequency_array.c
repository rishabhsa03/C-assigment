# include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int fr[n];
    int visit=-1;
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                fr[j]=visit;
            }
        }
        if(fr[i]!=visit){
            fr[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        if(fr[i]!=visit){
            printf("%d",fr[i]);}
    }
    return 0;
}