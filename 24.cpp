#include<iostream>
using namespace std;

unsigned long long m(unsigned long long a,unsigned long long n,unsigned long long b);

int main(){
	cout<<m(6699,696969696969696969,6969)<<"\n";
	return 0;
}

unsigned long long m(unsigned long long a,unsigned long long n,unsigned long long b){
	
    unsigned long long t;
    
    if(n==0) return 1%b;
    if(n==1) return a%b;
    
    t=m(a,n/2,b);
    t=t*t%b;
    
    if((n&1)==1) t=t*a%b;
    return t;

} 
