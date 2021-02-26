#include "StdAfx.h"
#include "dividir.h"



dividir::dividir(void)
{
}
int dividir::Get_a()
{
 return a;
}
int dividir::Get_b()
{
 return b;
}
float dividir::Get_s()
{
 return s;
}
void dividir::Set_a(int x)
{
 a=x;
}
void dividir::Set_b(int y)
{
 b=y;
}
void dividir::Set_s(float p)
{
 s=p;
}
float dividir::Calcular()
{
	s = a/b;
	return s;
}