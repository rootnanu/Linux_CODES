
/* *This is The Program is Developed as a Logical Program Game - By Nishant Maheshwari (+91 9897319973 , mnishant222@gmail.com) in Year (2016)* */
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>
using namespace std;

int un1 = 10, un2 = 10, un3 = 10, sn1 = 0, sn2 = 0, digits = 0, dig_val1 = 0, dig_val2 = 0, dig_val3 = 0, sump;
string cmt_o="9";

int uniint(string word)
{
	string manifest;
	int jio;

	for(int i=0;i<=word.size();i++)
	{
		if(isdigit(word[i]))
		{
			manifest=manifest+word[i];
		}
	}
	stringstream(manifest)>>jio;

	return jio ;
}

int mixint(string word)
{
	string manifest;
	int jio;

	for(int i=0;i<=word.size();i++)
	{
		if(isdigit(word[i]))
		{
			manifest=manifest+word[i];
		}
	}
	manifest="2"+manifest;
	stringstream(manifest)>>jio;

	return jio ;
}

int prog();

int main()
{
	//system("color 0a");
	cout<<" *Developed as a Logical Program Game - By Nishant Maheshwari (+91 9897319973 , mnishant222@gmail.com) in Year (2016)*\n";
	cout << "\n Hint: \"5\" inputs are required You have to input \"3\" numbers and system will give \"2\" numbers,\n After your \"1st\" input system will give sum of all numbers;\n";
	cout << "\n RULE : You must enter number of digits  'CONSTSNT' (System will only take integers)  in all required input and system will also enter the same ; \n";
	prog();
}

int prog()
{
	cout << "\n ENTER FIRST NUMBER : ";
	string a1;
	getline(cin, a1);
	un1=uniint(a1);
	dig_val1 = un1;
	digits = 0;
	while (dig_val1 > 0)
	{
		dig_val1 = dig_val1 / 10;
		digits += 1;
	}
	dig_val1 = digits;
	if (digits > 9)
	{
		//system("color 0c");
		cout << "\n You can't enter the Number more then '9' \n\n";
		system("read -n1 -r -p \"Press any key to Process Further...\"");
		//system("clear");
		//system("color 0a");
		prog();
	}
	
	string ch=cmt_o;

	for(int qa=1;qa<digits;qa++)
	{
		cmt_o+=ch;
	}

	string mak=cmt_o;

	int ne;
	ne=mixint(a1)-2;
	stringstream(mak)>>sump;
	//system("color 0b");
	cout << "\n YOUR ANSWER (Sum of all numbers) WILL BE : [ " << ne << " ]";
	cout << "\n\n ENTER SECOND NUMBER  : ";
	string a2;
	getline(cin, a2);
	un2=uniint(a2);
	dig_val2 = un2;
	digits = 0;
	while (dig_val2 > 0)
	{
		dig_val2 = dig_val2 / 10;
		digits += 1;
	}
	dig_val2 = digits;
	if (dig_val2 != dig_val1)
	{
		system("color 48");
		cout << "\n Opps! You haven't Followewd Rule, 1st Input has '" << dig_val1 << "'- digits! but 2nd input has '" << dig_val2 << "' - digits! \n\n Lets try Once again \n\n ";
		system("read -n1 -r -p \"Press any key to Process Further...\"");
		//system("clear");
		//system("color 0b");
		prog();
	}
	//system("color 0d");
	cout << "\n My 1st Number is : [ " << /* err */ sump - un2 << " ]";
	cout << "\n\n ENTER THIRD NUMBER : ";
	string a3;
	getline(cin, a3);
	un3=uniint(a3);
	dig_val3 = un3;
	digits = 0;
	while (dig_val3 > 0)
	{
		dig_val3 = dig_val3 / 10;
		digits += 1;
	}
	dig_val3 = digits;
	if (dig_val3 != dig_val1)
	{
		//system("color 48");
		cout << "\n Opps! You haven't Followewd Rule, 1st Input has '" << dig_val1 << "'- digits! but 2nd input has '" << dig_val3 << "' - digits! \n\n Lets try Once again \n\n ";
		system("read -n1 -r -p \"Press any key to Process Further...\"");
		//system("clear");
		//system("color 0d");
		prog();
	}
	//system("color 0a");
	cout << "\n My 2nd Number is : [ " << /* err */ sump - un3 << " ] \n\n You can also check by adding all the numbers, sum will always be : [ " << ne << " ] !";
	cout << "\n\n ";
	system("read -r -p \"Press any key to Process Further...\"");
	exit(0);
	return 0;

}