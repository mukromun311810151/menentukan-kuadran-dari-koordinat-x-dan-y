#include <iostream>
using namespace std;

int main ()
{
	int x,y;
	
	printf("=================================================\n");
	printf("MENGETAHUI KUADRAN DARI INPUTAN KOORDINAT X DAN Y\n");
	printf("=================================================\n");
	
	printf("MASUKKAN KOORDINAT TITIK X = "); scanf("%i",&x);
	printf("MASUKKAN KOORDINAT TITIK Y = "); scanf("%i",&y);
	
	if (x>0 && y>0)
	printf("LETAK KUADRAN BERADA DI KUADRAN I ");
	
	else if (x>0 && y<0)
	printf("LETAK KUADRAN BERADA DI KUADRAN II ");
	
	else if (x<0 && y>0)
	printf("LETAK KUADRAN BERADA DI KUADRAN III ");
	
	else
	printf("LETAK KUADRANNYA BERADA DI TITIK PUSAT");
	
	return 0;
}
