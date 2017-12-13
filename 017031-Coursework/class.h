#ifndef CLASS_H
#define CLASS_H

#include<iostream>
#include<vector>
#include<string>
#include <stdlib.h>
#include<ctype.h>
#define DISCOUNT 0.9		//Defining DISCOUNT as 0.9
using namespace std;

class Computer //Base class compter

{
public:
	Computer() = default;		//Default constructor
	Computer(string S, int P, bool G, string GModel, int A, int B);		//Overloading constructor
	string Specs, GCardModel;			//Initializing string "Specs" and "GCardModel"
	bool GCard;						//Initializing boolean "GCard"
	int GCardPrice = 0;				//Initializing int "GCardPrice" =0
	float GetPrice();				//Initializing getter function for Price
	int GetBillno();				//Initializing getter function for BillNo
	int GetAmount();				//Initializing getter function for Amount
	virtual void Specifications();	//Virtual function "Specifications" to be overridden by other class

private:
	float Price;					//Initializing float "Price"
	int Amount;						//Initializing int "Amount"
	int BillNo;						//Initializing int "BillNo"
};
Computer::Computer(string S, int P, bool G, string GModel, int A, int B)		//Declaring overloaded constructor
{
	Specs = S;
	GCard = G;
	GCardModel = GModel;
	Amount = A;
	BillNo = B;
	cout << "Bill No." << B << endl;
	cout << "Spcifications: " << S << endl;
	cout << "Graphics card installed?: ";
	if (G)				//Check if user requested for a graphics card
	{
		cout << "Yes" << endl;
		cout << "Graphics Card Model: " << GModel << endl;
		if (GModel == "GTX Titan X")
		{
			GCardPrice = 1000;
		}
		else if (GModel == "GTX 1080")
		{
			GCardPrice = 850;
		}
		else if (GModel == "GTX 1080Ti")
		{
			GCardPrice = 900;
		}
	}
	else
	{
		cout << "No" << endl;
	}

	cout << "Amount: " << A << endl;
	if (A<10)
	{
		Price = (GCardPrice + P) * A;
	}
	else if (A >= 10)
	{
		Price = (GCardPrice + P) * A * DISCOUNT;		//Provide discount if user bought more than 10 computer
	}
	cout << "Total Price: RM " << GetPrice() << endl;
}
float Computer::GetPrice()		//Getter function declaration for "Price"
{
	return Price;
}
int Computer::GetBillno()		//Getter function declaration for "BillNo"
{
	return BillNo;
}
int Computer::GetAmount()		//Getter function declaration for "Amount"
{
	return Amount;
}
void Computer::Specifications()		//Print out various info of the object
{
	cout << "I don't know what brand and model you are." << endl;
}



class ComputerBrand1 :public Computer		//Derived class "ComputerBrand1" with public inherited from class "Computer"
{
public:
	ComputerBrand1() = default;			//Default constructor
	ComputerBrand1(string S, int P, bool G, string GModel, int A, int B);		//Constructor overloading
	void Specifications() override;				//Override function "Specification"
};
ComputerBrand1::ComputerBrand1(string S, int P, bool G, string GModel, int A, int B) :Computer(S, P, G, GModel, A, B)	//Inherit constructor directly from "Computer"
{
}
void ComputerBrand1::Specifications()			//Print out various info of the object
{
	cout << "I don't know what model you are." << endl;
}



class Brand1Model1 :public ComputerBrand1		//Derived class "Brand1Model1" with public inherited from class "ComputerBrand1"
{
public:
	Brand1Model1() = default;		//Default constructor
	Brand1Model1(string S, int P, bool G, string GModel, int A, int B);		//Constructor overloading
	void Specifications() override;			//Override function "Specification"
};
Brand1Model1::Brand1Model1(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand1(S, P, G, GModel, A, B)  //Inherit constructor directly from "ComputerBrand1"
{
}
void Brand1Model1::Specifications()		//Print out various info of the object
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)		//Check if user requested for a graphics card
	{
		cout << "Yes" << endl;
		cout << "Graphics Card Model: " << GCardModel << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	cout << "Amount: " << GetAmount() << endl;
	cout << "Price: " << GetPrice() << endl;
}



class Brand1Model2 :public ComputerBrand1			//Derived class "Brand1Model2" with public inherited from class "ComputerBrand1"
{
public:
	Brand1Model2() = default;		//Default constructor
	Brand1Model2(string S, int P, bool G, string GModel, int A, int B);		//Constructor overloading
	void Specifications() override;	//Override function "Specification"

};
Brand1Model2::Brand1Model2(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand1(S, P, G, GModel, A, B)	//Inherit constructor directly from "ComputerBrand1"
{
}
void Brand1Model2::Specifications()		//Print out various info of the object
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)		//Check if user requested for a graphics card
	{
		cout << "Yes" << endl;
		cout << "Graphics Card Model: " << GCardModel << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	cout << "Amount: " << GetAmount() << endl;
	cout << "Price: " << GetPrice() << endl;
}



class Brand1Model3 :public ComputerBrand1		//Derived class "Brand1Model3" with public inherited from class "ComputerBrand1"
{
public:
	Brand1Model3() = default;		//Default constructor
	Brand1Model3(string S, int P, bool G, string GModel, int A, int B);		//Constructor overloading
	void Specifications() override;		//Override function "Specification"

};
Brand1Model3::Brand1Model3(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand1(S, P, G, GModel, A, B)	//Inherit constructor directly from "ComputerBrand1"
{
}
void Brand1Model3::Specifications()		//Print out various info of the object
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)		//Check if user requested for a graphics card
	{
		cout << "Yes" << endl;
		cout << "Graphics Card Model: " << GCardModel << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	cout << "Amount: " << GetAmount() << endl;
	cout << "Price: " << GetPrice() << endl;
}

class ComputerBrand2 :public Computer		//Derived class "ComputerBrand2" with public inherited from class "Computer"
{
public:
	ComputerBrand2() = default;		//Default constructor
	ComputerBrand2(string S, int P, bool G, string GModel, int A, int B);		//Constructor overloading
	void Specifications() override;		//Override function "Specification"
};
ComputerBrand2::ComputerBrand2(string S, int P, bool G, string GModel, int A, int B) :Computer(S, P, G, GModel, A, B)	//Inherit constructor directly from "Computer"
{
}
void ComputerBrand2::Specifications()		//Print out various info of the object
{
	cout << "I don't know what model you are." << endl;
}


class Brand2Model1 :public ComputerBrand2	//Derived class "Brand2Model1" with public inherited from class "ComputerBrand2"
{
public:
	Brand2Model1() = default;		//Default constructor
	Brand2Model1(string S, int P, bool G, string GModel, int A, int B);		//Constructor overloading
	void Specifications() override;		//Override function "Specification"

};
Brand2Model1::Brand2Model1(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand2(S, P, G, GModel, A, B)	//Inherit constructor directly from "ComputerBrand2"
{
}
void Brand2Model1::Specifications()		//Print out various info of the object
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)		//Check if user requested for a graphics card
	{
		cout << "Yes" << endl;
		cout << "Graphics Card Model: " << GCardModel << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	cout << "Amount: " << GetAmount() << endl;
	cout << "Price: " << GetPrice() << endl;
}


class Brand2Model2 :public ComputerBrand2		//Derived class "Brand2Model2" with public inherited from class "ComputerBrand2"
{
public:
	Brand2Model2() = default;		//Default constructor
	Brand2Model2(string S, int P, bool G, string GModel, int A, int B);		//Constructor overloading
	void Specifications() override;			//Override function "Specification"

};
Brand2Model2::Brand2Model2(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand2(S, P, G, GModel, A, B)	//Inherit constructor directly from "ComputerBrand2"
{
}
void Brand2Model2::Specifications()		//Print out various info of the object
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)		//Check if user requested for a graphics card
	{
		cout << "Yes" << endl;
		cout << "Graphics Card Model: " << GCardModel << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	cout << "Amount: " << GetAmount() << endl;
	cout << "Price: " << GetPrice() << endl;
}

class Brand2Model3 :public ComputerBrand2	//Derived class "Brand2Model3" with public inherited from class "ComputerBrand2"
{
public:
	Brand2Model3() = default;		//Default constructor
	Brand2Model3(string S, int P, bool G, string GModel, int A, int B);		//Constructor overloading
	void Specifications() override;		//Override function "Specification"

};
Brand2Model3::Brand2Model3(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand2(S, P, G, GModel, A, B)	//Inherit constructor directly from "ComputerBrand2"
{
}
void Brand2Model3::Specifications()		//Print out various info of the object
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)		//Check if user requested for a graphics card
	{
		cout << "Yes" << endl;
		cout << "Graphics Card Model: " << GCardModel << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	cout << "Amount: " << GetAmount() << endl;
	cout << "Price: " << GetPrice() << endl;
}
#endif