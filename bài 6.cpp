#include <iostream>
using namespace std;
int ktrasongto(int num){
	if (num==1){
		return 0;
	}
	for (int i = 2; i*i <=num; i++){
		if (num%i==0){
			return 0;
		}
	}
	return 1;
}
int main (){
	int count = 0, num=2, n;
	int i = 2;
	printf ("nhap vao so nguyen to can in ra: ");
	scanf ("%d",&n);
	if (n>1){
		while (count <n){
				if (ktrasongto(num)){
					printf ("%d\n",num);
					count ++;
				}
				num++;
			}
		}
		return 0;
	}
