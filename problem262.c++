#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count = 0;
    string love;
    
    for(int i=0;i<n;i++){
        cin>>love;
        int d=0;

        for(char ch:love)
            if(ch=='4' or ch=='7')
                d++;   
        if(d<=k)
            count++;
        
    }
    cout<<count<<endl;
    
   
       
    return 0;
}