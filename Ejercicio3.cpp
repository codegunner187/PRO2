// Copiar el ejercicio 3 debajo del comentario "{ EJERCICIO 3 COPIAR ABAJO }"

void llenarF(TStringGrid *A,byte fil,byte ca,byte cb,byte &x)
{
  byte c=cb-ca+1;
  if(c>0)
  {
	A->Cells[ca][fil]=x;
	llenarF(A,fil,ca+1,cb,x);
  }
}


void llenarC(TStringGrid *A,byte Col,byte fa,byte fb,byte &x)
{
  byte f=fb-fa+1;
  if(f>0)
  {
	A->Cells[Col][fa]=x;
	llenarC(A,Col,fa+1,fb,x);
  }
}

void CargarM(TStringGrid *A,byte fa,byte fb,byte ca,byte cb,byte x)
{
  byte c=cb-ca+1;
  if(c>0)
  {
	llenarF(A,fa,ca,cb,x);
	llenarC(A,cb,fa,fb,x);
	x--;
	CargarM(A,fa+1,fb,ca,cb-1,x);
  }
}


//==========================================================================================
// Copiar la llamada del ejercicio 3 debajo del comentario "{ EJERCICIO 3 COPIAR ABAJO }"
   byte c=StrToInt(Edit1->Text);
   byte f=StrToInt(Edit2->Text);
   CargarM(StringGrid1,0,f-1,0,c-1,f);
   StringGrid1->ColCount=c;
   StringGrid1->RowCount=f;
