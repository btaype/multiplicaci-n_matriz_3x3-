#include<iostream>
//alumno: Jhon Berly Taype Allccaccahua
using namespace std;
void multipicacion_matriz(int p[3][3][3]){
	
	int *a=**(p+1);
	for (int *x=**(p),*y=**(p+1),*z=**(p+2);x<**(p+1),y<**(p+2),z<**(p+3);x++,y=y+3)
	{
	*z=*z+((*x) * (*y));
	if(y>=(*(*(p+1)+2)) && y<(**(p+2))){
		z++;
		if(y==*(*(p+1)+2)+2){
			y=(*(*(p+1)))-3;
			a=**(p+1);
			continue;}
		y=a-2;
		a++;
		x=x-3;}}}

void Rellena_matriz(int p[3][3][3]){
	int *r=*(*(p));
	for (int i=1;i<=18;i++){
		*r=i;
		r++;
	}
	int *d=**(p+2);
	for (int i=1;i<=9;i++){
		*d=0;
		d++;
	}
	}
void imprmir_matriz(int p[3][3]){
	
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<p[i][j]<<"\t";
		}
		cout<<"\n";}
	cout<<"\n";
	}

int main(){
	int p[3][3][3];
	Rellena_matriz(p);
	imprmir_matriz(p[0]);
	imprmir_matriz(p[1]);
	cout<<"_______________________________\n\n";
	multipicacion_matriz(p);
	imprmir_matriz(p[2]);
	return 0;
}
