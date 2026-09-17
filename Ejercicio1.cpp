// Copiar el ejercicio 1 debajo del comentario "{ EJERCICIO 1 COPIAR ABAJO }"

bool esLetra(wchar_t z)
{
String s="ABCDEFGHIJKLMNÑOPQRSTUVWXYZabcdefghijklmnñopqrstuvwxyzáéíóúÁÉÍÓÚäëïöüÄËÏÖÜ";
return s.Pos(z)>0;
}

void VecPal(TStringGrid *v,String x,String pal,byte &n)
{
  if(x!="")//caso general
  {
	 if(esLetra(x[1]))
	 {
	  pal=pal+x[1];
	 }
	 else
	 {
	  if(pal!="")
	  {
	   v->Cells[n][0]=pal;
	   n++;
	   pal="";
	  }
	 }
	 x.Delete(1,1);
	 if(pal!=""&&x=="")
	 {
	   v->Cells[n][0]=pal;
	   n++;
	 }
	 VecPal(v,x,pal,n);

  }   
}


//==========================================================================================
// Copiar la llamada del ejercicio 1 debajo del comentario "{ EJERCICIO 1 COPIAR ABAJO }"

	 String x=Edit1->Text;
	 byte n=0;
	 VecPal(StringGrid1,x,"",n);
	 StringGrid1->ColCount=n;

