#include<iostream>
#include<ctime>
using namespace std;
long long iterativefact (long long n){
	long long fact =1;
	for(long long i=1;i<=n;i++){
		fact=fact*i;

	}
	return fact;
}
long long recursivefact(long long n){
	if(n==0)return 1;
	else return n * recursivefact(n-1);
}
int main(){
	long long n;
	cout<<"please enter an integer";
	cin>>n;
	if (n<=0)
	cout<<"please enter a positive number"<<endl;
	else 
	{
		long long result =iterativefact(n);
		//long long result =recursivefact(n);
		cout<<"the factorial of the "<<n<<" = "<<result<<endl;
		double start_time=clock();
		cout<<"the excultin time = "<<start_time/CLOCKS_PER_SEC;
	}
	return 0;}