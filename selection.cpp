#include<iostream>
#include<string.h>
using namespace std;
//selection short function declaration and defination
void selection_short(int a[], int n){  

	int i,j,k, tmp;
	for(i=0;i<n-1;i++){
			k= i;
			for(j=i+1;j<n;j++){
				if(a[j]<a[k]){
				
					k= j;
				}
			}
			if(i!=k){
				tmp = a[i];
				a[i]= a[k];
				a[k]= tmp;

			}
		}

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

		selection_short(a, n); // calling selection short function

		cout<<"\n After shorted : ";
		for(i=0;i<n;i++){
			cout<<" | "<<a[i];
		}
		cout<<"\n";
	return(0);
}


