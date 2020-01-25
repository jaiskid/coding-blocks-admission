#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int a=0,b=1;
	for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				cout<<a<<"		";
					sum=a+b;
					b=a;
					a=sum;
			}
				cout<<endl;
	}
}