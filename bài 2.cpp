#include <iostream>
using namespace std;
int main (){
	float worktime, salary;
	printf ("nhap gio lam cua cong nhan: ");
	scanf("%f",&worktime);
	salary=200000*worktime;
	if (worktime >160){
		salary= salary + salary*0.1;
	}
	printf ("tien luong cua cong nhan la: %f", salary);
	return 0;
}
