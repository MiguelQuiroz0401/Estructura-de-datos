#pragma once
ref class dividir
{
private: 
	int a;
	int b;
	float s;
public:
	dividir(void);
	int Get_a();
	int Get_b();
	float Get_s();
	void Set_a(int x);
	void Set_b(int y);
	void Set_s(float p);

	float Calcular();
};

