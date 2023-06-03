#include <iostream>
#include <stdlib.h>
using namespace std;

/**
 * nairaExhange - function that convert nairan
 * to other currencies.
 * @amnt: input amount in naira
 * @option1: option for the equivalent currency
 * Return: equivalent amount in other currencies.
 */

double nairaExhange(double amnt_naira, int option1);


/**
 * cediExhange - function that convert nairan
 * to other currencies.
 * @amnt: input amount in naira
 * Return: equivalent amount in other currencies.
 */

double cediExhange(double amnt, int option1);


/**
 * dollarExhange - function that convert nairan
 * to other currencies.
 * @amnt: input amount in naira
 * Return: equivalent amount in other currencies.
 */

double dollarExhange(double amnt_dollar, int option1);

/**
 * euroExhange - function that convert nairan
 * to other currencies.
 * @amnt: input amount in naira
 * Return: equivalent amount in other currencies.
 */

double euroExhange(double amnt_euro, int option1);

/**
 * poundExhange - function that convert nairan
 * to other currencies.
 * @amnt: input amount in naira
 * Return: equivalent amount in other currencies.
 */

double poundExhange(double amnt_euro, int option1);

/**
 * other_currency_symb - function that returns unit
 * @option1: selected  option.
 * 
 * Return: unit of the currency converted to.
 */
 
string other_currency_symb(int option1)
{
	string symb[5] ={"GHC", "DOLLAR", "EUR", "GBP"};

		if (option1 == 1) 
			return (symb[0]);
		else
			if(option1 == 2)
				return(symb[1]);
		else
			if(option1 == 3) 
				return (symb[2]);
		else
			if(option1 == 4) 
				return (symb[3]);
		else
			return(NULL);
};

/**
 * other_currency_symb1 - function that returns unit
 * @option1: selected  option.
 * 
 * Return: unit of the currency converted to.
 */
string other_currency_symb1(int option1)
{
	string symb[5] = {"NAIRA", "DOLLAR", "EUR", "GBP"};

	if (option1 == 1) 
		return (symb[0]);
	else
		if(option1 == 2)
			return (symb[1]);
	else
		if(option1 == 3) 
			return (symb[2]);
	else
		if(option1 == 4) 
			return (symb[3]);
	else
		return (NULL);
};

/**
 * other_currency_symb2 - function that returns unit
 * @option1: selected  option.
 * 
 * Return: unit of the currency converted to.
 */

string other_currency_symb2(int option1)
{
	string symb[5] = {"NAIRA", "GHC", "EUR", "GBP"};

	if (option1 == 1) 
		return (symb[0]);
	else
 		if(option1 == 2)
			return (symb[1]);
	else
		if(option1 == 3) 
			return (symb[2]);
	else
		if(option1 == 4) 
			return (symb[3]);
	else
		return (NULL);
};

/**
 * other_currency_symb3 - function that returns unit
 * @option1: selected  option.
 * 
 * Return: unit of the currency converted to.
 */

string other_currency_symb3(int option1)
{
	string symb[5] = {"NAIRA", "GHC", "DOLLAR", "GBP"};

	if (option1 == 1) 
		return (symb[0]);
	else
		if(option1 == 2) 
			return (symb[1]);
	else
		if(option1 == 3) 
			return (symb[2]);
	else
		if(option1 == 4) 
			return (symb[3]);
	else
		return (NULL);
};

/**
 * other_currency_symb4 - function that returns unit
 * @option1: selected  option.
 * 
 * Return: unit of the currency converted to.
 */
string other_currency_symb4(int option1)
{
	string symb[5] = {"NAIRA", "GHC", "DOLLAR", "EURO"};

	if (option1 == 1) 
		return (symb[0]);
	else
		if(option1 == 2) 
			return (symb[1]);
	else
		if(option1 == 3) 
			return (symb[2]);
	else
		if(option1 == 4) 
			return (symb[3]);
	else
		return (NULL);
};

/**
 * main - beginning of currency converter program
 * @argc: argument count
 * @argv: pointer to the passed argument
 * Return: zero (successful)
 */

int main(int argc, char** argv) {

	int option;
	int  option1;
	double amnt_naira, amnt_xch, amnt_cedi, amnt_dollar, amnt_euro, amnt_pound;
	string opt_ptr;

	cout<<endl<<endl;
	cout<<"*******************WELCOME*********************"<<endl<<endl<<endl;
	cout<<"*********SELECT YOUR LOCAL CURRENCY************"<<endl;
	cout<<" 1) NAIRA  "<<endl;
	cout<<" 2) GHC    "<<endl;
	cout<<" 3) DOLLAR "<<endl;
	cout<<" 4) EURO   "<<endl;
	cout<<" 5) POUND  "<<endl;
	cout<<" 6) EXIT  "<<endl<<endl;
	cout<<"*************Currency Converter****************"<<endl<<endl;
	cin>>option;
	system("cls");

	switch (option){
																			case 1:
			cout<<"Enter amount in Naira(NAIRA)"<<endl<<endl;
			cin>>amnt_naira;
			cout<<endl<<"Select the currency you are converting to....."<<endl;
			cout<<"1) Ghanian Cedi   "<<endl;
			cout<<"2) Dollar         "<<endl;
			cout<<"3) Euro           "<<endl;
			cout<<"4) Pound sterling "<<endl<<endl;
			cin>>option1;
			system ("cls");
			
			opt_ptr = other_currency_symb(option1);
			amnt_xch = nairaExhange(amnt_naira, option1);
			cout<<amnt_naira <<" NAIRA"<<" =  "<< amnt_xch<<" "<<opt_ptr<<endl;
			break;

																			case 2:
			cout<<"Enter amount in Ghana (GHC)"<<endl<<endl;
			cin>>amnt_cedi;
			cout<<endl<<"Select the currency you are converting to....."<<endl;
			cout<<"1) NAIRA          "<<endl;
			cout<<"2) Dollar         "<<endl;
			cout<<"3) Euro           "<<endl;
			cout<<"4) Pound sterling "<<endl<<endl;
			cin>>option1;
			system ("cls");
			opt_ptr = other_currency_symb1(option1);
			amnt_xch = cediExhange(amnt_cedi, option1);
			cout<<amnt_cedi <<" GHC"<<" =  "<< amnt_xch<<" "<<opt_ptr<<endl;
			break;
																			case 3:
			cout<<"Enter amount in Dollar ($)"<<endl<<endl;
			cin>>amnt_dollar;
			cout<<endl<<"Select the currency you are converting to....."<<endl;
			cout<<"1) Nigeria Naira   "<<endl;
			cout<<"2) Cedi         "<<endl;
			cout<<"3) Euro           "<<endl;
			cout<<"4) Pound sterling "<<endl<<endl;
			cin>>option1;
			system ("cls");
			opt_ptr = other_currency_symb2(option1);
			amnt_xch = dollarExhange(amnt_dollar, option1);
			cout<<amnt_dollar <<" $"<<" =  "<< amnt_xch<<" "<<opt_ptr<<endl;
			break;
																			case 4:
			cout<<"Enter amount in euro (EUR)"<<endl<<endl;
			cin>>amnt_euro;
			cout<<endl<<"Select the currency you are converting to....."<<endl;
			cout<<"1) Nigeria Naira   "<<endl;
			cout<<"2) Cedi         "<<endl;
			cout<<"3) dollar           "<<endl;
			cout<<"4) Pound sterling "<<endl<<endl;
			cin>>option1;
			system ("cls");
			opt_ptr = other_currency_symb3(option1);
			amnt_xch = euroExhange(amnt_euro, option1);
			cout<<amnt_euro <<" EUR"<<" =  "<< amnt_xch<<" "<<opt_ptr<<endl;
			break;
																																				case 5:
			cout<<"Enter amount in pound (GBP)"<<endl<<endl;
			cin>>amnt_pound;
			cout<<"Select the currency you are converting to....."<<endl;
			cout<<"1) Nigeria Naira   "<<endl;
			cout<<"2) Cedi            "<<endl;
			cout<<"3) dollar          "<<endl;
			cout<<"4) euro            "<<endl<<endl;
			cin>>option1;
			system ("cls");
			opt_ptr = other_currency_symb4(option1);
			amnt_xch = poundExhange(amnt_pound, option1);
			cout<<amnt_pound <<" GBP"<<" =  "<< amnt_xch<<" "<<opt_ptr<<endl;
			break;
																																				case 6:
			cout<<"Exit........................"<<endl;
			break;
																			default:
			cout<<"Hey folk select the right option......."<<endl;
}
		system("pause > 0");
		return (0);
}

/*naira conversion*/

double nairaExhange(double amnt_naira, int option1)
{
	float today_ghc = 0.026, today_dollar = 0.0022, today_euro = 0.0020, today_pound = 0.0017;
	double result;

	switch(option1){

		case 1:
			cout<<"1 naira = "<<today_ghc<<" cedi"<<endl<<endl;
			result = amnt_naira * today_ghc;
			return (result);
			break;
																
		case 2:
			cout<<"1 naira = "<<today_dollar<<"dollar"<<endl<<endl;
			result = amnt_naira * today_dollar;
			return (result);
			break;

		case 3:
			cout<<"1 naira = "<<today_euro<<"euro"<<endl<<endl;
			result = amnt_naira * today_euro;
			return (result);
			break;

		case 4:
			cout<<"1 naira = "<<today_pound<<"pound"<<endl<<endl;
			result = amnt_naira * today_pound;
			return (result);
			break;

		default:
			cout<<"Exit..........."<<endl;
			return (0);
	}
}	
//cedi conversion function initialization
	
double cediExhange(double amnt_cedi, int option1)
{
	float today_naira = 39.07, today_dollar = 0.085, today_euro = 0.078, today_pound = 0.067;
	double result;

	switch(option1){
									
		case 1:
			cout<<"1 cedi = "<<today_naira<<" naira(#)"<<endl<<endl;
			result = amnt_cedi * today_naira;
			return (result);
			break;

			case 2:
				cout<<"1 cedi = "<<today_dollar<<" dollar"<<endl<<endl;
				result = amnt_cedi * today_dollar;
				return (result);
				break;
																				case 3:
				cout<<"1 cedi = "<<today_euro<<" euro"<<endl<<endl;
				result = amnt_cedi * today_euro;
				return (result);
				break;
																				case 4:
				cout<<"1 cedi = "<<today_pound<<" pound"<<endl<<endl;
				result = amnt_cedi * today_pound;
				return (result);
				break;
																				default:
				cout<<"Exit..........."<<endl;
				return (0);
	}
}

//dollar convertion function initialization
double dollarExhange(double amnt_dollar, int option1)
{
	float today_naira = 460.44, today_cedi = 11.78, today_euro = 0.91, today_pound = 0.79;
	double result;

	switch(option1){
																			case 1:
			cout<<"1 dollar = "<<today_naira<<" naira(#)"<<endl<<endl;
			result = amnt_dollar * today_naira;
			return (result);
			break;
											
																			case 2:
			cout<<"1 dollar = "<<today_cedi<<" cedi"<<endl<<endl;
			result = amnt_dollar * today_cedi;
			return (result);
			break;

		case 3:
			cout<<"1 dollar = "<<today_euro<<" euro"<<endl<<endl;
			result = amnt_dollar * today_euro;
			return (result);
			break;
		
		case 4:
			cout<<"1 dollar = "<<today_pound<<" pound"<<endl<<endl;
			result = amnt_dollar * today_pound;
			return (result);
			break;

		default:
			cout<<"Exit..........."<<endl;
			return (0);
	}
}

//euro convertion function initialization
double euroExhange(double amnt_euro, int option1)
{
	float today_naira = 503.85, today_cedi = 12.89, today_dollar = 1.09, today_pound = 0.87;
	double result;

	switch(option1){
		case 1:
			cout<<"1 euro = "<<today_naira<<" naira(#)"<<endl<<endl;
			result = amnt_euro * today_naira;
			return (result);
			break;

		case 2:
			cout<<"1 euro = "<<today_cedi<<"cedi"<<endl<<endl;
			result = amnt_euro * today_cedi;
			return (result);
			break;

		case 3:
			cout<<"1 euro = "<<today_dollar<<"euro"<<endl<<endl;
			result = amnt_euro * today_dollar;
			return (result);
			break;

		case 4:
			cout<<"1 euro = "<<today_pound<<"pound"<<endl<<endl;
			result = amnt_euro * today_pound;
			return (result);
			break;

		default:
			cout<<"Exit..........."<<endl;
			return (0);
	}
}
//euro convertion function initialization

double poundExhange(double amnt_pound, int option1)
{
	float today_naira = 583.61, today_cedi = 14.93, today_dollar = 1.27, today_euro = 1.15;
	double result;

	switch(option1){

		case 1:
			cout<<"1 pound = "<<today_naira<<" naira(#)"<<endl<<endl;
			result = amnt_pound * today_naira;
			return (result);
			break;

		case 2:
			cout<<"1 pound = "<<today_cedi<<"cedi"<<endl<<endl;
			result = amnt_pound * today_cedi;
			return (result);
			break;

		case 3:
			cout<<"1 pound = "<<today_dollar<<"dollar"<<endl<<endl;
			result = amnt_pound * today_dollar;
			return (result);
			break;
																			case 4:
			cout<<"1 pound = "<<today_euro<<"euro"<<endl<<endl;
			result = amnt_pound * today_euro;
			return (result);
			break;
																			default:
			cout<<"Exit..........."<<endl;
			return (0);
	}
}
