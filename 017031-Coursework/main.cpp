/*I have choosen the class as computer with 2 brand inherited from it. The 2 brand is then inherited by 3 model each. User 
can choose to buy a specific model from a brand from the menu. */

#include "class.h"
#include<iostream>
#include<vector>
#include<string>
#include <stdlib.h>
#include<ctype.h>
#define DISCOUNT 0.9		//Defining DISCOUNT as 0.9
using namespace std;
int BillNumber = 0;			//Defining and declaring global variable BillNumber as 0

int BreakPrevention(string string1) {		//This function is used as a logic error prevention when user input char 
											//when the program prompt the user for an int
											//It receive a string from the main program to be printed out to the console
											//and receive a string from user input then return an int to the main program
	string compare;
	int looping = 0,testing=0;
	cout << string1 << "\n" << "Choice: ";
	cin >> compare;
	cin.ignore(1000, '\n');					//Ignores the next 1000 char that the user input after a space
	if (compare.compare(0, 1, "1", 0, 1) == 0)		//Checks if the 1st character of the string "compare" upto the the 1st character of the string "compare" is equal to "1"
	{
		looping = 1;
		return 1;
	}
	else if (compare.compare(0, 1, "2", 0, 1) == 0)		//Same as 1
	{
		looping = 1;
		return 2;
	}
	else if (compare.compare(0, 1, "3", 0, 1) == 0)		//Same as 1
	{
		looping = 1;
		return 3;
	}
	else if (compare.compare(0, 1, "4", 0, 1) == 0)		//Same as 1
	{
		looping = 1;
		return 4;
	}
	else if (compare.compare(0, 1, "5", 0, 1) == 0)		//Same as 1
	{
		looping = 1;
		return 5;
	}
	else if (compare.compare(0, 1, "6", 0, 1) == 0)		//Same as 1
	{
		looping = 1;
		return 6;
	}
	else if (compare.compare(0, 1, "7", 0, 1) == 0)		//Same as 1
	{
		looping = 1;
		return 7;
	}
	else if (compare.compare(0, 1, "8", 0, 1) == 0)		//Same as 1
	{
		looping = 1;
		return 8;
	}
	else if (compare.compare(0, 1, "9", 0, 1) == 0)		//Same as 1
	{
		looping = 1;
		return 9;
	} 
	else
	{
		return 0;
	}
}


int charfix(string string1,string string2)					//This function is used as a logic error prevention when user input char 
															//when the program prompt the user for an int
															//It receive an array of char as user input and convert it into int
															//It will return prompt user re-enter if the 1st char of the input is non-int
{
	int fixed;
	char fix[256];
	do
	{
	cout << string1<<"\n"<<string2;
	cin >> fix;
	} while (!isdigit(fix[0]));			//Check if the 1st char if the character array of "fix" is an int
	fixed = atoi(fix);					//Convert the character array "fix" into int
	return fixed;
}


int initmenu() {			//Initializing a menu
	int choice;				//Obtain user choice from BreakPrevention function and return an int to main program
	cout << "=========================================" << endl;
	cout << "= 1. Brand 1                            =" << endl;
	cout << "= 2. Brand 2                            =" << endl;
	cout << "= 3. Create object for Computer class   =" << endl;
	cout << "= 4. Create object for Brand class      =" << endl;	
	cout << "= 5. Check my order                     =" << endl;
	cout << "= 6. List all order                     =" << endl;
	cout << "= 7. I want to quit                     =" << endl;
	cout << "=========================================" << endl;
	do
	{
		choice = BreakPrevention("Please pick.");			//Pass a string to function "BreakPrevention and receive an int from it
	} while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7);
	return choice;
}

int initchoice(int i)	//Init menu to choose a model
{						//Obtain user choice from BreakPrevention function and return an int to main program
	int j, loop = 0;
	switch (i)
	{
	case 1:
	{
		cout << "================================================================================" << endl;
		cout << "=1. Intel core i3-8100, 4GB RAM, 1TB HDD                          RM2000       =" << endl;
		cout << "=2. Intel core i5-8400, 8GB RAM, 2TB HDD                          RM4000       =" << endl;
		cout << "=3. Intel core i7-8700, 16GB RAM, 2TB HDD and 128GB NVMe SSD      RM8000       =" << endl;
		cout << "================================================================================" << endl;
		do
		{
			j = BreakPrevention("Please choose your model.");		//Pass a string to function "BreakPrevention and receive an int from it
		} while (j != 1 && j != 2 && j != 3);
		return j;
	}break;

	case 2:
	{
		cout << "================================================================================" << endl;
		cout << "=1. Intel core i3-8100, 8GB RAM, 1TB HDD                           RM3000      =" << endl;
		cout << "=2. Intel core i5-8400, 16GB RAM, 1TB HDD and 128GB NVMe SSD       RM6000      =" << endl;
		cout << "=3. Intel core i7-8700, 32GB RAM, 1TB HDD and 256GB NVMe SSD       RM9000      =" << endl;
		cout << "================================================================================" << endl;
		do
		{
			j = BreakPrevention("Please choose your model.");		//Pass a string to function "BreakPrevention and receive an int from it
		} while (j != 1 && j != 2 && j != 3);
		return j;
	}break;
	}
}


string GCardModel(bool check)		//Init a menu for type of graphics card
{									//Obtain user choice from BreakPrevention function and return a string to main program
	string choice;
	int i;
	if (check)		//If "check" == true
	{
		cout << "=====================================" << endl;
		cout << "=1. GTX Titan X    + RM1000         =" << endl;
		cout << "=2. GTX 1080       + RM850          =" << endl;
		cout << "=3. GTX 1080 Ti    + RM900          =" << endl;
		cout << "=====================================" << endl;
		do
		{
			i = BreakPrevention("Please choose the graphics card model you want.");		//Pass a string to function "BreakPrevention and receive an int from it
		} while (i != 1 && i != 2 && i != 3);
	}
	else
	{
		cout << "No graphics card choosen" << endl;
		i = 10;
	}

	switch (i)
	{
	case 1:return "GTX Titan X"; break;
	case 2:return "GTX 1080"; break;
	case 3:return "GTX 1080Ti"; break;
	default:return "nothing"; break;
	}
}

int main()
{
	int loop = 0;		//Initializing and declaring "loop"= 0 as int as while loop condition such that while loop can keep looping until the value of "loop" changes
	int choice;			//Initializing "choice" as int as switch case
	int modelchoice;	//Initializing "modelchoice" as int as switch case
	int amount;			//Initializing "amount" as int
	int bill;			//Initializing "bill" as int
	int brand = 0;		//Initializing and delcaring "brand"=0 as switch case
	int brandchoice;	//Initializing "brandchoice"
	int C=0, CB1 = 0, CB2 = 0, B1M1 = 0, B1M2 = 0, B1M3 = 0, B2M1 = 0, B2M2 = 0, B2M3 = 0; //Initializing variable to be used as array subscript
	char GCardchoice;	//Initializing "GCardchoice" as char
	bool check;			//Initializing "check" as boolean
	string GCardModelChoice;	//Initializing "GCardModelChoice" as string
	vector<Computer*> Model;	//Initializing a dynamic array of pointers of base class 'Computer'
	Computer Stuff[100];		//Initializing an array of object of class 'Computer'
	ComputerBrand1 brand1[100];	//Initializing an array of object of class 'brand1'	
	ComputerBrand2 brand2[100];	//Initializing an array of object of class 'brand2'
	Brand1Model1 B1Model1[100];	//Initializing an array of object of class 'B1Model1'
	Brand1Model2 B1Model2[100];	//Initializing an array of object of class 'B1Model2'
	Brand1Model3 B1Model3[100];	//Initializing an array of object of class 'B1Model3'
	Brand2Model1 B2Model1[100];	//Initializing an array of object of class 'B2Model1'
	Brand2Model2 B2Model2[100];	//Initializing an array of object of class 'B2Model2'
	Brand2Model3 B2Model3[100];	//Initializing an array of object of class 'B2Model3'

	do
	{
		choice = initmenu();		//Calls the function "initmenu" and receive int from it
		switch (choice)				//Switch case based on the int "choice"
		{
		case 1:
		{	
			modelchoice = initchoice(1);		//Pass an int of 1 to function "initchoice" and receive an int from it

			do
			{
				cout << "Do you want graphics card? (Y/y/N/n)" << "\n" << "Choice: " << endl;		//Prompt user to input (Y/y/N/n) to include or not include graphics card in their computer model
				cin >> GCardchoice;
			} while (GCardchoice !='Y' && GCardchoice != 'y' && GCardchoice != 'N' && GCardchoice != 'n');
			switch(GCardchoice)		//Switch case based on the char "GCardchoice"
			{
			case 'Y':
			case 'y':GCardModelChoice = GCardModel(true); check = true; break;//Pass "true" to function "GCardModel" and receive a string from it
			case 'N':
			case 'n':GCardModelChoice = GCardModel(false); check = false; break;//Pass "false" to function "GCardModel" and receive a string from it
			}
			amount = charfix("How many do you want?","Amount: ");//Pass 2 string to function "charfix" and receive an int from it
			switch (modelchoice)//Switch case based on the int "modelchoice"
			{
			case 1:
			{
				B1Model1[B1M1] = Brand1Model1("Intel core i3-8100, 4GB RAM, 1TB HDD", 2000, check, GCardModelChoice, amount, BillNumber); //Create Brand1Model1 object
				Model.push_back(&(B1Model1[B1M1]));//Insert the address of object of class "Brand1Model1" into the array of pointer of the base class "Computer"
				BillNumber++;		//Increament of the global variable "BillNumber" if an object is created for any of the class
				B1M1++;		//Increament of the array subscript if an object is created for class "Brand1Model1"
			}break;
			case 2:
			{
				B1Model2[B1M2] = Brand1Model2("Intel core i5-8400, 8GB RAM, 2TB HDD", 4000, check, GCardModelChoice, amount, BillNumber); //Create Brand1Model2 object
				Model.push_back(&(B1Model2[B1M2]));//Insert the address of object of class "Brand1Model2" into the array of pointer of the base class "Computer"
				BillNumber++;		//Increament of the global variable "BillNumber" if an object is created for any of the class
				B1M2++;		//Increament of the array subscript if an object is created for class "Brand1Model2"
			}break;
			case 3:
			{
				B1Model3[B1M3] = Brand1Model3("Intel core i7-8700, 16GB RAM, 2TB HDD and 128GB NVMe SSD", 4000, check, GCardModelChoice, amount, BillNumber); //Create Brand1Model3 object
				Model.push_back(&(B1Model3[B1M3]));//Insert the address of object of class "Brand1Model2" into the array of pointer of the base class "Computer"
				BillNumber++;		//Increament of the global variable "BillNumber" if an object is created for any of the class
				B1M3++;		//Increament of the array subscript if an object is created for class "Brand1Model3"
			}break;

			}

			break;
		}
		case 2:
		{	
			modelchoice = initchoice(2);//Pass an int of 2 to function "initchoice" and receive an int from it	
			do
			{
				cout << "Do you want graphics card? (Y/y/N/n)" << "\n" << "Choice: " << endl;		//Prompt user to input (Y/y/N/n) to include or not include graphics card in their computer model
				cin >> GCardchoice;
			} while (GCardchoice != 'Y' && GCardchoice != 'y' && GCardchoice != 'N' && GCardchoice != 'n');
			switch (GCardchoice)
			{
			case 'Y':
			case 'y':GCardModelChoice = GCardModel(true); check = true; break;		//Pass "true" to function "GCardModel" and receive a string from it
			case 'N':
			case 'n':GCardModelChoice = GCardModel(false); check = false; break;	//Pass "false" to function "GCardModel" and receive a string from it
			}
			amount = charfix("How many do you want?","Amount: ");		//Pass 2 string to function "charfix" and receive an int from it
			switch (modelchoice)//Switch case based on the int "modelchoice"
			{
			case 1:
			{
				B2Model1[B2M1] = Brand2Model1("Intel core i3-8100, 8GB RAM, 1TB HDD", 3000, check, GCardModelChoice, amount, BillNumber);//Create Brand2Model1 object
				Model.push_back(&(B2Model1[B2M1]));		//Insert the address of object of class "Brand2Model1" into the array of pointer of the base class "Computer"
				BillNumber++;		//Increament of the global variable "BillNumber" if an object is created for any of the class
				B2M1++;		//Increament of the array subscript if an object is created for class "Brand2Model1"
			}break;
			case 2:
			{
				B2Model2[B2M2] = Brand2Model2("Intel core i5-8400, 16GB RAM, 1TB HDD and 128GB NVMe SSD", 6000, check, GCardModelChoice, amount, BillNumber);//Create Brand2Model2 object
				Model.push_back(&(B2Model2[B2M2]));		//Insert the address of object of class "Brand2Model2" into the array of pointer of the base class "Computer"
				BillNumber++;		//Increament of the global variable "BillNumber" if an object is created for any of the class
				B2M2++;		//Increament of the array subscript if an object is created for class "Brand2Model2"
			}break;
			case 3:
			{
				B2Model3[B2M3] = Brand2Model3("Intel core i7-8700, 32GB RAM, 1TB HDD and 256GB NVMe SSD", 9000, check, GCardModelChoice, amount, BillNumber);//Create Brand2Model3 object
				Model.push_back(&(B2Model3[B2M3]));		//Insert the address of object of class "Brand2Model3" into the array of pointer of the base class "Computer"
				BillNumber++;		//Increament of the global variable "BillNumber" if an object is created for any of the class
				B2M3++;		//Increament of the array subscript if an object is created for class "Brand2Model3"
			}break;

			}
			break;
		}
		case 3:
		{
			Stuff[C] = Computer();//Create Computer object
			Model.push_back(&(Stuff[C]));		//Insert the address of object of class "ComputerBrand1" into the array of pointer of the base class "Computer"
			BillNumber++;	//Increament of the global variable "BillNumber" if an object is created for any of the class
			C++;		//Increament of the array subscript if an object is created for class "Computer"
		}break;
		case 4:
		{
			cout << "=====================================" << endl;
			cout << "=1. Brand 1                         =" << endl;
			cout << "=2. Brand 2                         =" << endl;
			cout << "=====================================" << endl;
			do
			{
				brand = BreakPrevention("Which brand you want to create object on?");		//Pass a string to function "BreakPrevention and receive an int from it
			} while (brand != 1 && brand != 2);
			switch (brand)		//Switch case based on int "brand"
			{
			case 1:
			{
				brand1[CB1] = ComputerBrand1();		//Create  ComputerBrand1 object
				Model.push_back(&(brand1[C]));		//Insert the address of object of class "ComputerBrand1" into the array of pointer of the base class "Computer"
				BillNumber++;		//Increament of the global variable "BillNumber" if an object is created for any of the class
				CB1++;		//Increament of the array subscript if an object is created for class "ComputerBrand1"
			}break;
			case 2:
			{
				brand2[CB2] = ComputerBrand2();		//Create  ComputerBrand1 object
				Model.push_back(&(brand1[C]));		//Insert the address of object of class "ComputerBrand2" into the array of pointer of the base class "Computer"
				BillNumber++;		//Increament of the global variable "BillNumber" if an object is created for any of the class
				CB2++;		//Increament of the array subscript if an object is created for class "ComputerBrand1"
			}break;
			}

		}break;
		case 5:
		{
			bill = charfix("Please enter your bill number.", "Bill Number:");		//Pass 2 string to function "charfix" and receive an int from it
			if (BillNumber == 0)			//Check if any order received 
			{
				cout << "No Order Received Yet" << endl;
			}
			else if (bill >= BillNumber)		//To prevent array out of bound if user enter an number larger than the size of dynamic array
			{
				cout << "Invalid Order Number" << endl;
			}
			else
			{
				Model[bill]->Specifications();		//Demonstration of dynamic binding to the pointer of the base class
			}
		}break;
		case 6:
		{
			if (BillNumber == 0)		//Check if any order received 
			{
				cout << "No Order Received Yet" << endl;
			}
			else
			{
				for (auto list = 0; list<BillNumber; list++)		//Demonstration of dynamic binding to the pointer of the base class by looping through the base class
					Model[list]->Specifications();				
			}
		}break;
		case 7:
		{
			cout << "Good Bye!" << endl;
			loop = 1; break;		//To break out of the while loop
		}
		default:loop = 0; break; //To ensure the while loop keep going when user input none of the above case
		}
	} while (loop == 0);

	system("pause");
}