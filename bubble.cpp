#include<iostream>
#include<string.h>
using namespace std;
//bubble short function declaration and defination
void bubble_short(int a[], int n){  
//	cout<<"\n n_add= "<< x<<", a_add = "<<a;
		
	int i,j, tmp, flag=0;
	for(i=0;i<n;i++){
			for(j=0;j<n-1-i;j++){
				if(a[j]>a[j+1]){
					tmp = a[j];
					a[j]= a[j+1];
					a[j+1]= tmp;
					flag = 1;
				}
			}
			if(flag==0){
				break;
			}
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
		bubble_short(a, n); // calling bubble short function

		cout<<"\n After shorted : ";
			cout<<" | "<<a[i];
		for(i=0;i<n;i++){
			cout<<" | "<<a[i];
		}
		cout<<"\n";

	return(0);
}


