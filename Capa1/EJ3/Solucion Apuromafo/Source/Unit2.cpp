// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
using namespace std;

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

// Prototipo de la Función Login.

TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender) {

	// Initialize String Array

	string users[2] = {"Administrador", "Invitado"};
	string msj[3] = {
		"Bienvenido Puedes Pasar", "Rechazado , Recuerda son solo 5 intentos",
		"Máximo de Intentos"};
	string codes[2] = {"55201", "00100"};
	// si nombre es igual a
	int cont = Label4->Caption.ToInt();

	if (cont <= 5) {

		if (Edit2->Text == users[0].c_str() && Edit1->Text == codes[0].c_str()
			|| Edit2->Text == users[1].c_str() && Edit1->Text == codes[1]
			.c_str()) {
			ShowMessage(msj[0].c_str());
		}
		else {
			ShowMessage(msj[1].c_str());
			Label4->Caption = cont - 1;
			if (cont <= 1) {
				ShowMessage(msj[2].c_str());
				exit(0);
			}

		}

	}

}
// ---------------------------------------------------------------------------
