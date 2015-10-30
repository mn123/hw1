//Das hiermit erstellte Programm berechnet Fibonacci-Zahlen.

#include <iostream>

using namespace std;

int main(){
	int N,i,f,a=0,b=1;	
	cout << "Geben Sie bitte den Wert für N ein:" << endl;
	cin >> N;
	if (N==0)
		f=0;
	else{
		if (N==1)
			f=1;
		else{
			for(i=2; i<=N; i++){
				f=a+b;
				a=b;
				b=f;
			}
		}
	}
	cout << "f(" << N << ")=" << f << endl;
	return 0;
}
