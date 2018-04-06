#include<iostream>
#include<string.h>
using namespace std;
class quick{
	int *a;
	int size;
	int pivot;
public:
	quick(){
		a= NULL;
		size= 0;
	}
	~quick(){
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
	void quick_sort(int low, int high) {// 0 < 4
		int i, j;
		pivot = a[low];
		i= low+1;
		j= high;
		if(low<high){
			while (1) {
				while (i<= high && a[i]< pivot) {
					i++;
				}
				while (a[j]> pivot) {
					j--;
				}
				if (i<j) {
					int tmp;
					tmp = a[i];
					a[i]= a[j];
					a[j]= tmp;
					cout<<"\nswap with i and j : ";
					display();
				}else{
					break;
				}
			}
			int tmp;
			cout<<"\n  pivot : "<< a[low];
			tmp = a[low];
			a[low]= a[j];
			a[j] = tmp;
			cout<<"\nswap with pivot and j : ";
			display();
			quick_sort( low, j);
			quick_sort( j+1, high);
		}

	}
};
int main(){
		int n,i;
		int *a;
		quick q1;
		cout<<"\n Enter the size of array : ";
		cin>>n;
		a = new int[n];
		for(i=0;i<n;i++){
			cout<<"\n Enter the element of ["<<i<<"] : ";
			cin>>a[i];
		}
		q1.getsize(a,n);
		q1.display();
		q1.quick_sort(0,n-1);
		q1.display();
		cout<<"\n";
	return(0);
}
