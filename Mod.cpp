#include<iostream>
using namespace std;

unsigned long long m(unsigned long long a,unsigned long long n,unsigned long long b);

int main(){
	cout<<m(4488,484848484848484848,2323)<<"\n";
	return 0;
}

unsigned long long m(unsigned long long a,unsigned long long n,unsigned long long b){
	
    unsigned long long t;
    
    if(n==0) return 1%b;
    
    t=m(a,n/2,b);
    t=t*t%b;
    
    if((n&1)==1) t=t*a%b;
    return t;

} 
