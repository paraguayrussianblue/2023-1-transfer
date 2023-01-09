#include<iostream>
#include<stack>

//https://www.acmicpc.net/problem/17298 에 대한 해답입니다.
int main(){
    std::stack<int>srt;
    int N;
    std::cin>>N;
    int A[N];
    int NGE[N];
    for(int i=0;i!=N;i++){
        std::cin>>A[i];
    }
    for(int i=N-1;i>=0;i--){
        while(!srt.empty()){
            if(A[i]>=srt.top()){
            srt.pop();
            }
            else{
                NGE[i]=srt.top();
                srt.push(A[i]);
                goto end;
            }
        }
            NGE[i]=-1;
            srt.push(A[i]);
    end: ;
    }
    for(int i=0;i!=N;i++){
        std::cout<<NGE[i]<<' ';
    }
}
