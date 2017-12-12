#include "class.h"
#include<iostream>
#include<vector>
#include<string>
#define DISCOUNT 0.9
using namespace std;
int BillNumber = 0;

int BreakPrevention(string string1) {
	string compare;
	int looping = 0,testing=0;
	cout << string1 << "\n" << "Choice: " << endl;
	cin >> compare;
	cin.ignore(1000, '\n');
	if (compare.compare(0, 1, "1", 0, 1) == 0)
	{
		looping = 1;
		return 1;
	}
	else if (compare.compare(0, 1, "2", 0, 1) == 0)
	{
		looping = 1;
		return 2;
	}
	else if (compare.compare(0, 1, "3", 0, 1) == 0)
	{
		looping = 1;
		return 3;
	}
	else if (compare.compare(0, 1, "4", 0, 1) == 0)
	{
		looping = 1;
		return 4;
	}
	else if (compare.compare(0, 1, "5", 0, 1) == 0)
	{
		looping = 1;
		return 5;
	}
	else if (compare.compare(0, 1, "6", 0, 1) == 0)
	{
		looping = 1;
		return 6;
	}
	else if (compare.compare(0, 1, "7", 0, 1) == 0)
	{
		looping = 1;
		return 7;
	}
	else if (compare.compare(0, 1, "8", 0, 1) == 0)
	{
		looping = 1;
		return 8;
	}
	else if (compare.compare(0, 1, "9", 0, 1) == 0)
	{
		looping = 1;
		return 9;
	} 
	else
	{
		return 0;
	}
}
int initmenu() {
	int choice;
	cout << "=========================================" << endl;
	cout << "= 1. Brand 1                            =" << endl;
	cout << "= 2. Brand 2                            =" << endl;
	cout << "= 3. I want to quit                     =" << endl;
	cout << "= 4. Check my order                     =" << endl;
	cout << "= 5. List all order                     =" << endl;
	cout << "= 6. Create object for Computer class   =" << endl;
	cout << "= 7. Create object for Brand class      =" << endl;
	cout << "=========================================" << endl;
	do
	{
		choice = BreakPrevention("Please pick.");
	} while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7);
	return choice;
}

int initchoice(int i)
{
	int j, loop = 0;
	switch (i)
	{
	case 1:
	{
		cout << "=====================================" << endl;
		cout << "=1. Model 1       RM2000            =" << endl;
		cout << "=2. Model 2       RM4000            =" << endl;
		cout << "=3. Model 3       RM8000            =" << endl;
		cout << "=====================================" << endl;
		do
		{
			j = BreakPrevention("Please choose your model.");
		} while (j != 1 && j != 2 && j != 3);
		return j;
	}break;

	case 2:
	{
		cout << "=====================================" << endl;
		cout << "=1. Model 1       RM3000            =" << endl;
		cout << "=2. Model 2       RM6000            =" << endl;
		cout << "=3. Model 3       RM9000            =" << endl;
		cout << "=====================================" << endl;
		do
		{
			j = BreakPrevention("Please choose your model.");
		} while (j != 1 && j != 2 && j != 3);
		return j;
	}break;
	}
}


string GCardModel(bool check)
{
	string choice;
	int i;
	if (check)
	{
		cout << "=====================================" << endl;
		cout << "=1. GTX Titan X    + RM1000         =" << endl;
		cout << "=2. GTX 1080       + RM850          =" << endl;
		cout << "=3. GTX 1080 Ti    + RM900          =" << endl;
		cout << "=====================================" << endl;
		do
		{
			i = BreakPrevention("Please choose the graphics card model you want.");
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
	int loop = 0, choice, modelchoice,amount,bill,brand=0,brandchoice;
	int C=0, CB1 = 0, CB2 = 0, B1M1 = 0, B1M2 = 0, B1M3 = 0, B2M1 = 0, B2M2 = 0, B2M3 = 0;
	char GCardchoice;
	bool check;
	string GCardModelChoice;
	vector<Computer*> Model;
	Computer Stuff[100];
	ComputerBrand1 brand1[100];
	ComputerBrand2 brand2[100];
	Brand1Model1 B1Model1[100];
	Brand1Model2 B1Model2[100];
	Brand1Model3 B1Model3[100];
	Brand2Model1 B2Model1[100];
	Brand2Model2 B2Model2[100];
	Brand2Model3 B2Model3[100];

	/*vector<ComputerBrand1> brand1;
	vector<ComputerBrand2> brand2;
	vector<Brand1Model1> B1Model1;
	vector<Brand1Model2> B1Model2;
	vector<Brand1Model3> B1Model3;
	vector<Brand2Model1> B2Model1;
	vector<Brand2Model2> B2Model2;
	vector<Brand2Model3> B2Model3;*/

	do
	{
		choice = initmenu();
		switch (choice)
		{
		case 1:
		{	
			modelchoice = initchoice(1);

			do
			{
				cout << "Do you want graphics card? (Y/y/N/n)" << "\n" << "Choice: " << endl;
				cin >> GCardchoice;
			} while (GCardchoice !='Y' && GCardchoice != 'y' && GCardchoice != 'N' && GCardchoice != 'n');
			switch(GCardchoice)
			{
			case 'Y':
			case 'y':GCardModelChoice = GCardModel(true); check = true; break;
			case 'N':
			case 'n':GCardModelChoice = GCardModel(false); check = false; break;
			}
			cout << "How many do you want?" << "\n" << "Amount: ";
			cin >> amount;
			switch (modelchoice)
			{
			case 1:
			{
				//B1Model1.push_back(Brand1Model1("fuck you", 2000, check, GCardModelChoice, amount, BillNumber));
				B1Model1[B1M1] = Brand1Model1("Intel core i3-8100, 4GB RAM, 1TB HDD", 2000, check, GCardModelChoice, amount, BillNumber);
				Model.push_back(&(B1Model1[B1M1]));
				BillNumber++;
				B1M1++;
			}break;
			case 2:
			{
				//B1Model2.push_back(Brand1Model2("fuck you", 4000, check, GCardModelChoice, amount, BillNumber));
				B1Model2[B1M2] = Brand1Model2("Intel core i5-8400, 8GB RAM, 2TB HDD", 4000, check, GCardModelChoice, amount, BillNumber);
				Model.push_back(&(B1Model2[B1M2]));
				BillNumber++;
				B1M2++;
			}break;
			case 3:
			{
				//B1Model3.push_back(Brand1Model3("fuck you", 8000, check, GCardModelChoice, amount, BillNumber));
				B1Model3[B1M3] = Brand1Model3("Intel core i7-8700, 16GB RAM, 2TB HDD and 128GB NVMe SSD", 4000, check, GCardModelChoice, amount, BillNumber);
				Model.push_back(&(B1Model3[B1M3]));
				BillNumber++;
				B1M3++;
			}break;

			}

			break;
		}
		case 2:
		{	
			modelchoice = initchoice(2);
			do
			{
				cout << "Do you want graphics card? (Y/y/N/n)" << "\n" << "Choice: " << endl;
				cin >> GCardchoice;
			} while (GCardchoice != 'Y' && GCardchoice != 'y' && GCardchoice != 'N' && GCardchoice != 'n');
			switch (GCardchoice)
			{
			case 'Y':
			case 'y':GCardModelChoice = GCardModel(true); check = true; break;
			case 'N':
			case 'n':GCardModelChoice = GCardModel(false); check = false; break;
			}
			cout << "How many do you want?" << "\n" << "Amount: ";
			cin >> amount;
			switch (modelchoice)
			{
			case 1:
			{
				//B2Model1.push_back(Brand2Model1("fuck you", 3000, check, GCardModelChoice, amount,BillNumber));
				B2Model1[B2M1] = Brand2Model1("Intel core i3-8100, 8GB RAM, 1TB HDD", 3000, check, GCardModelChoice, amount, BillNumber);
				Model.push_back(&(B2Model1[B2M1]));
				BillNumber++;
				B2M1++;
			}break;
			case 2:
			{
				//B2Model2.push_back(Brand2Model2("fuck you", 6000, check, GCardModelChoice, amount, BillNumber));
				B2Model2[B2M2] = Brand2Model2("Intel core i5-8400, 16GB RAM, 1TB HDD and 128GB NVMe SSD", 6000, check, GCardModelChoice, amount, BillNumber);
				Model.push_back(&(B2Model2[B2M2]));
				BillNumber++;
				B2M2++;
			}break;
			case 3:
			{
				//B2Model3.push_back(Brand2Model3("fuck you", 9000, check, GCardModelChoice, amount, BillNumber));
				B2Model3[B2M3] = Brand2Model3("Intel core i7-8700, 32GB RAM, 1TB HDD and 256GB NVMe SSD", 9000, check, GCardModelChoice, amount, BillNumber);
				Model.push_back(&(B2Model3[B2M3]));
				BillNumber++;
				B2M3++;
			}break;

			}
			break;
		}
		case 3:
		{
			cout << "Good Bye!" << endl;
			loop = 1; break;
		}
		case 4:
		{
			cout << "Please enter your bill number." << "\n" << "Bill Number:";
			cin >> bill;
			if (BillNumber == 0)
			{
				cout << "No Order Received Yet" << endl;
			}
			else if (bill > BillNumber)
			{
				cout << "Invalid Order Number" << endl;
			}
			else
			{
				Model[bill]->Specifications();
			}
		}break;
		case 5:
		{
			if (BillNumber == 0)
			{
				cout << "No Order Received Yet" << endl;
			}
			else
			{
				for(auto list=0;list<BillNumber;list++)
				Model[list]->Specifications();
			}
		}break;
		case 6:
		{
			Stuff[C] = Computer();
			Model.push_back(&(Stuff[C]));
			BillNumber++;
			C++;
		}break;
		case 7:
		{
			cout << "=====================================" << endl;
			cout << "=1. Brand 1                         =" << endl;
			cout << "=2. Brand 2                         =" << endl;
			cout << "=====================================" << endl;
			do
			{
				brand = BreakPrevention("Which brand you want to create object on?");
			} while (brand != 1 && brand != 2);
			switch (brand)
			{
			case 1:
			{
				brand1[CB1] = ComputerBrand1();
				Model.push_back(&(brand1[C]));
				BillNumber++;
				CB1++;
			}break;
			case 2:
			{
				brand2[CB2] = ComputerBrand2();
				Model.push_back(&(brand1[C]));
				BillNumber++;
				CB2++;
			}break;
			}

		}break;
		default:loop = 0; break;
		}
	} while (loop == 0);

	system("pause");
}