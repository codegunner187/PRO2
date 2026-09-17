// Copiar el ejercicio 2 debajo del comentario "{ EJERCICIO 2 COPIAR ABAJO }"

byte ContPrim(Cardinal num,byte c)
{
  if(num<10)
  {
	if(num==2||num==3||num==5||num==7)
	{
	c++;
	}
  }
  else
  {
	if(num%10==2||num%10==3||num%10==5||num%10==7)
	{
	 c++;
	}
	c=ContPrim(num/10,c);
  }
  return c;
}
void CargarDigVec(TStringGrid *v,Cardinal num,byte a,byte b)
{
  byte n=b-a+1;
  if(n>0)
  {
	if(num%10==2||num%10==3||num%10==5||num%10==7)
	{
	 v->Cells[b][0]=num%10;
	 b--;
	}
	CargarDigVec(v,num/10,a,b);
  }
}


//==========================================================================================
// Copiar la llamada del ejercicio 2 debajo del comentario "{ EJERCICIO 2 COPIAR ABAJO }"
	 Cardinal num=StrToInt(Edit1->Text);
	 byte n=ContPrim(num,0);
	 CargarDigVec(StringGrid1,num,0,n-1);
	 StringGrid1->ColCount=n;

