#include<iostream>
#include<math.h>
using namespace std;

// LES FONCTIONS
int dec2bin(int nD)
{
		int nB, Q, R, i;
		Q = nD;
		nB = 0;
		i = 0;
		while(Q!=0)
		{
			R = Q%2;
			Q = Q/2;
			nB = nB + R * pow(10,i);		
			i++;
		}
		return nB;
}

int dec2octal(int doc1)
{
		int Q, i, oc1;
		Q = doc1;
		oc1=0;
		i=0;
		
		while(doc1!=0)
		{
			oc1 = oc1 + doc1 %8 * pow(10,i);
			doc1 = doc1/8;
			i++;
		}	
	return oc1;
}


int bin2dec(int nB)
{
		int Q, R, i, nD;
		Q = nB;
		nD = 0;
		i = 0;
		while(Q!=0)
		{
			R = Q%10;
			Q = Q/10;
			nD = nD + R * pow(2,i);		
			i++;
		}
		return nD;
}


int bin2octal(int nB)
{
	int Q, R, i, oc1, doc1;
		oc1 = 0;
		Q = nB;
		doc1 = 0;
		i = 0;
		
		while(Q!=0)
		{
			R = Q%10;
			Q = Q/10;
			doc1 = doc1 + R * pow(2,i);		
			i++;
		}
		
		i=0;
		
		while(doc1!=0)
		{
			oc1 = oc1 + doc1 %8 * pow(10,i);
			doc1 = doc1/8;
			i++;
		}	
	return oc1;
}


int octal2dec(int oc1)
{
		int Q, i, doc1;
		Q = oc1;
		doc1=0;
		i=0;
		
		while(oc1!=0)
		{
			doc1 = doc1 + oc1 %10 * pow(8,i);
			oc1= oc1/10;
			i++;
		}	
		
	return doc1;
}

int octal2bin(int oc1)
{
		int Q, i, doc1, nB;
		Q = oc1;
		doc1=0;
		nB=0;
		i=0;
		
		while(oc1!=0)
		{
			doc1 = doc1 + oc1 %10 * pow(8,i);
			oc1= oc1/10;
			i++;
		}	
		
		i=0;
		
	while(doc1!=0)
	{
		nB = nB + doc1%2 * pow(10,i);
		doc1= doc1/2;		
		i++;
		
	}
	
	return nB;
}


// LA FONCTION PRINCIPALE
int main()
{
	int choix1, choix2, choix3, choix4, nD, nB, Q, R, i, doc1, oc1;
	
	cout << "1. Decimale \n";
	cout << "2. Binaire\n";
	cout << "3. Octal\n ";
	cin >>choix1;
	
	switch (choix1)
	{
		case 1:
			cout <<"     1. Decimal - Binaire : \n";
			cout <<"     2. Decimal - Octal : \n";
			cin >> choix2;
		
				switch(choix2)
				{
					case 1:
						
						cout <<"Entrer le nombre decimale : ";
						cin >> nD;
			
						cout << "La conversion en binaire est : " << dec2bin(nD);
				
					break;
						
					case 2:
						cout<< "Entrer le nombre decimal : ";
						cin >>doc1;
						
					
						cout << "La conversion en octal est : "<<dec2octal(doc1)<<"\n";
							
					break ;
				}
				
				break;
		
		case 2 :
			
			cout << "     1. Binaire - Decimal : \n";
			cout << "     2. Binaire - Octal : \n";
			cin >> choix3;
			
				switch(choix3)
				{
					case 1:
						cout <<"Entrer le nombre binaire : ";
						cin >> nB;
						
						cout << "La conversion en decimal est : " << bin2dec(nB);
						
						break;
						
					case 2:
						cout <<"Entrer le nombre binaire : ";
						cin >> nB;
						
						cout << "La conversion en octal est : "<<bin2octal(nB);
						
						break;
				}
				break;
		
		case 3:
			
			cout << "     1. Octal - Decimal : \n";
			cout << "     2. Octal - Binaire: \n";
			cin >> choix4;
			
				switch(choix4)
				{
					case 1:
						cout <<"Entrer le nombre ocatl : ";
						cin >> oc1;
						
						cout << "La conversion en decimal est : " << octal2dec(oc1);
						
						break;
						
					case 2:
						cout <<"Entrer le nombre octal : ";
						cin >> oc1;
						
						cout << "La conversion en binaire est : "<<octal2bin(oc1);
						
						break;
				}
				break;
	}
	
	
	return 0;
}
