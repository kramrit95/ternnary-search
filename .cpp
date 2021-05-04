#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int ternarySearch(int arr[],int N, int k){
        for(int i=0;i<N;i++){
            if(arr[i]==k){
                return 1;
                
                
            }
        
            }
            
                
            
        
            return -1;
            
            
            
                
            
            
            
            
            
            
       
       
       
            
        
    
    }
    };


int main(void) {
int t;
cin>>t;
while(t--){
    int N,k;
    cin>>N>>k;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    solution ob;
    cout<<ob.ternarySearch (arr,N,k)<<endl;
}
    return 0;
}
