#include <iostream.h>
#include <conio.h>

float z = 9.0;		// global variabel
int i = 10;

void tampilkan_lagi(void);
main()
{
float p = 2.0;	//Lokal terhadap main()
cout << i << " " << p << " "<< z << "\n";
tampilkan_lagi ();
getch();
return 0;
}

void tampilkan_lagi(void)
{
int j = 5.0;	//lokal terhadap tampilkan lagi q
cout<< j << " " << z << "\n";
//error,tidak dapat menampilkan variabel p
//cout << p ;
return;
getch();
}
