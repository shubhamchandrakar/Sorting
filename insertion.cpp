#include<iostream>
#include<string.h>
using namespace std;
//insertion short function declaration and defination
void insertion_short(int a[], int n){  

		
	int i,j, tmp, flag=0;
	for(i=0;i<n;i++){
		tmp = a[i];
		j= i-1;
		while(j>=0&& a[j]>tmp){
			a[j+1]= a[j];
			j--;
		}
		a[j+1]= tmp;
	}

//	return a;
}

int main(){
		int n,i;
		int *a;
		cout<<"\n Enter the size of array : ";
		cin>>n;
		a = new int[n];
		for(i=0;i<n;i++){
			cout<<"\n Enter the element of ["<<i<<"] : ";
			cin>>a[i];
		}
		cout<<"\n You have entered array : ";
		for(i=0;i<n;i++){
			cout<<" | "<<a[i];
		}

		insertion_short(a, n); // calling insertion short function

		cout<<"\n After shorted : ";
		for(i=0;i<n;i++){
			cout<<" | "<<a[i];
		}
		cout<<"\n";
	return(0);
}


