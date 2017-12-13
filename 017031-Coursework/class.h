#ifndef CLASS_H
#define CLASS_H

#include<iostream>
#include<vector>
#include<string>
#include <stdlib.h>
#include<ctype.h>
#define DISCOUNT 0.9
using namespace std;

class Computer //Base class compter
{
public:
	Computer()=default;
	Computer(string S,int P,bool G,string GModel,int A,int B);
	string Specs,GCardModel;
	bool GCard;
	int GCardPrice=0;
	float GetPrice();
	int GetBillno();
	int GetAmount();
	virtual void Specifications();

private:
	float Price;
	int Amount;
	int BillNo;
};
Computer::Computer(string S, int P, bool G, string GModel, int A,int B)
{
	Specs = S;
	GCard = G;
	GCardModel = GModel;
	Amount = A;
	BillNo = B;
	cout << "Bill No." << B << endl;
	cout << "Spcifications: " << S << endl;
	cout << "Graphics card installed?: " ;
	if (G)
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
	
	cout << "Amount: " << A<<endl;
	if(A<10)
	{
		Price = (GCardPrice + P) * A;
	}
	else if (A >= 10)
	{
		Price = (GCardPrice + P) * A * DISCOUNT;
	}
	cout << "Total Price: RM " << GetPrice() << endl;
}
float Computer::GetPrice()
{
	return Price;
}
int Computer::GetBillno()
{
	return BillNo;
}
int Computer::GetAmount()
{
	return Amount;
}
void Computer::Specifications()
{
	cout << "I don't know what brand and model you are." << endl;
}



class ComputerBrand1 :public Computer
{
public: 
	ComputerBrand1() = default;
	ComputerBrand1(string S, int P, bool G, string GModel, int A, int B);
	void Specifications() override;
};
ComputerBrand1::ComputerBrand1(string S, int P, bool G, string GModel, int A, int B):Computer(S,P,G,GModel,A,B)
{
}
void ComputerBrand1::Specifications()
{
	cout << "I don't know what model you are." << endl;
}



class Brand1Model1 :public ComputerBrand1
{
public:
	Brand1Model1() = default;
	Brand1Model1(string S, int P, bool G, string GModel, int A, int B);
	void Specifications() override;
};
Brand1Model1::Brand1Model1(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand1(S, P, G, GModel, A,B)
{
}
void Brand1Model1::Specifications()
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)
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



class Brand1Model2 :public ComputerBrand1
{
public:
	Brand1Model2() = default;
	Brand1Model2(string S, int P, bool G, string GModel, int A, int B);
	void Specifications() override;

};
Brand1Model2::Brand1Model2(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand1(S, P, G, GModel, A,B)
{
}
void Brand1Model2::Specifications()
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)
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



class Brand1Model3 :public ComputerBrand1
{
public:
	Brand1Model3() = default;
	Brand1Model3(string S, int P, bool G, string GModel, int A, int B);
	void Specifications() override;

};
Brand1Model3::Brand1Model3(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand1(S, P, G, GModel, A,B)
{
}
void Brand1Model3::Specifications()
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)
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

class ComputerBrand2 :public Computer
{
public:
	ComputerBrand2() = default;
	ComputerBrand2(string S, int P, bool G, string GModel, int A, int B);
	void Specifications() override;
};
ComputerBrand2::ComputerBrand2(string S, int P, bool G, string GModel, int A, int B) :Computer(S, P, G, GModel, A,B)
{
}
void ComputerBrand2::Specifications()
{
	cout << "I don't know what model you are." << endl;
}


class Brand2Model1 :public ComputerBrand2
{
public:
	Brand2Model1() = default;
	Brand2Model1(string S, int P, bool G, string GModel, int A, int B);
	void Specifications() override;

};
Brand2Model1::Brand2Model1(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand2(S, P, G, GModel, A,B)
{
}
void Brand2Model1::Specifications()
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)
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


class Brand2Model2 :public ComputerBrand2
{
public:
	Brand2Model2() = default;
	Brand2Model2(string S, int P, bool G, string GModel, int A, int B);
	void Specifications() override;

};
Brand2Model2::Brand2Model2(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand2(S, P, G, GModel, A,B)
{
}
void Brand2Model2::Specifications()
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)
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

class Brand2Model3 :public ComputerBrand2
{
public:
	Brand2Model3() = default;
	Brand2Model3(string S, int P, bool G, string GModel, int A, int B);
	void Specifications() override;

};
Brand2Model3::Brand2Model3(string S, int P, bool G, string GModel, int A, int B) :ComputerBrand2(S, P, G, GModel, A, B)
{
}
void Brand2Model3::Specifications()
{
	cout << "Bill Number: " << GetBillno() << endl;
	cout << "Specifications: " << Specs << endl;
	cout << "Graphics card installed?: ";
	if (GCard)
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