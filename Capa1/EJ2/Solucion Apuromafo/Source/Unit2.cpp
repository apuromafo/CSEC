// ---------------------------------------------------------------------------


#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include <stdio.h>
#include <stdlib.h>
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender) {

	int numdecimal = 0;
	int digit = 0;
	int numtras = 1;
	int apuromafo = 0;
	numdecimal = Edit1->Text.ToInt();
     Edit2->Text = "";

	if (numdecimal >= 0 && numdecimal <= 64) {

		// ShowMessage(

		while (numdecimal > 0) {
			// Obteniendo el Resto y dejándolo en la posición correspondiente.
			digit = digit + (numdecimal % 2) * numtras;
			// Dividiendo entre 2 para que en la siguiente iteración sea la mitad.
			numdecimal = numdecimal / 2;
			// Incrementando la posición, 1 para la primera cifra, 10 para la segunda cifra, etc.
			numtras = numtras * 10;
		}
		 Edit2->Text = digit;


		MessageDlg("Adelante puedes pasar\n", mtInformation,
			TMsgDlgButtons() << mbOK, 0);
		// Application->MessageBox("Adelante puedes pasar\n",
		// "Acceso Permitido\n", MB_OK);
	}
	else {
		// ShowMessage(
		// Application->MessageBox("Adelante puedes pasar\n",
		// "Acceso Permitido\n", MB_OK);
		// [!] 	Código incorrecto !\n ", ,
		// " Acceso NO Permitido \n, ", MB_OK);
		MessageDlg("[!]  Código incorrecto", mtInformation,
			TMsgDlgButtons() << mbOK, 0);

		// exit(0);
	}

}
// ---------------------------------------------------------------------------
