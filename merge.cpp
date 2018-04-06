#include<iostream>
#include<string.h>
using namespace std;
class _merge{
	int *a;
	int size;
public:
	_merge(){
		a= NULL;
		size= 0;
	}
	~_merge(){
		delete a;
		size= 0;
	}
	void getsize(int arr[], int n){
		a = new int[n];
		size = n;
		a = arr;
	}
	void display(){
		int i;
		cout<<"\n Your Array : ";
		for(i=0;i<size;i++){
			cout<<" | "<<a[i];
		}
	}
	void merge_sort(int low, int high)
	{
		if(low<high){
			int mid;
			mid = (low+high)/2;
			cout<<"\n low : "<< low<< " Mid : "<< mid << " high : "<<high;
			merge_sort(low, mid);
			merge_sort(mid+1, high);
			merge(low,mid,high);
		}
	}

	void merge(int l1s, int l1e, int l2e)
	{
		int l2s = l1e+1;
		int i=l1s, j= l2s,k=0;
		int n;
		n= l2e-l1s+1;
		int *l3;
		l3 = new int[n];
		while(i<= l1e&& j<= l2e){

			if(a[i]<a[j]){
				l3[k++]= a[i++];
			}else{
				l3[k++]= a[j++];
			}
		}

		while(i<= l1e){
			l3[k++]= a[i++];
		}

		while(j<= l2e){
			l3[k++]= a[j++];
		}
			cout<<"\n i : "<< i<< " j : "<< j << " k : "<<k;
		while(k> 0){
			a[l2e--]= l3[--k];
		}
		cout<< "\nswaping : ";
		display();
		delete l3;

	}
};
int main(){
		int n,i;
		int *a;
		_merge q1;
		cout<<"\n Enter the size of array : ";
		cin>>n;
		a = new int[n];
		for(i=0;i<n;i++){
			cout<<"\n Enter the element of ["<<i<<"] : ";
			cin>>a[i];
		}
		q1.getsize(a,n);
		q1.display();
		q1.merge_sort(0,n-1);
		q1.display();
		cout<<"\n";
	return(0);
}
