// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender) {
	int key = 55201;
	int usercode = 0;
	usercode = Edit1->Text.ToInt();

	if (usercode == key) {

		// ShowMessage(

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

		exit(0);
	}

}
// ---------------------------------------------------------------------------
