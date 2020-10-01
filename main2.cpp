#include <iostream>
using namespace std;

//Klaudiusz Piasecki 3pi
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int wylicz(){
int W[1000];
int max_wart = 1;
int licz;
int wynik;
W[0] = 1;
W[1] = 1;
W[2] = 1;

for(int i = 3;i<=8;i++)
{
	if(i%2==0)
	{
		//cout << i << "=";
		W[i] = W[i-3] + W[i-1] + 1;
		//cout << W[i] << "\n";
	}
	else
	{
		W[i] = W[i-1]%7;
	}
	if(W[i]>max_wart)
	{
		//cout << max_wart; << "!";
		max_wart = W[i];
	}
}
	return max_wart;
}
int main(int argc, char** argv) {
	cout << wylicz();
	return 0;
}
