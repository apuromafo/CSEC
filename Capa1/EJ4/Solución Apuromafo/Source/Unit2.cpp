// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
using namespace std;

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#define NUMINT 10

// Prototipo de la Función Login.

TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}

void reordenar(int numeros[NUMINT], char option) {
	int temp = 0;

	/*
	 *  El Algoritmo de la Burbuja reordena el arreglo
	 *  mediante comparaciones sucesivas entre el elemento
	 *  actual y los posteriores. A base de iteraciones,
	 *  va intercambiando los valores resultante inferiores o
	 *  superiores de la comparacion principal*, a su izquierda
	 *  dejando así los elementos ordenados de mayores a menores
	 *  dependiendo de cómo lo elijas.
	 *
	 *  Referencia: http://c.conclase.net/orden/?cap=burbuja
	 */
	for (int i = 1; i < NUMINT; i++) {
		// Recorriendo todos los numeros posteriores al actual.
		for (int j = 0; j < NUMINT - 1; j++) {
			// Verificando si en forma Ascendente o Descentente
			if ((option == 'A')) {
				// Intercambiando los numeros, arrastrando el menor hacia la izquierda.
				if (numeros[j] > numeros[j + 1]) {
					temp = numeros[j];
					numeros[j] = numeros[j + 1];
					numeros[j + 1] = temp;
				}
			}
			else {
				// Intercambiando los numeros, arrastrando el mayor a la izquierda.
				if (numeros[j] < numeros[j + 1]) {
					temp = numeros[j];
					numeros[j] = numeros[j + 1];
					numeros[j + 1] = temp;
				}
			}
		}
	}
}

// ---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender) {

	// creo un int para comparar los valores en un rango de valor
	int value = Edit1->Text.ToInt();

	if (value <= 32 && value >= 1) {
		// creo un counter para poder verificar si están los 10 valores ingresados
		int counter = Label4->Caption.ToInt();

		if (counter == 0) {
			Edit2->Text = value;
		}

		if (counter == 1) {
			Edit3->Text = value;
		}
		if (counter == 2) {
			Edit4->Text = value;
		}
		if (counter == 3) {
			Edit5->Text = value;
		}
		if (counter == 4) {
			Edit6->Text = value;
		}
		if (counter == 5) {
			Edit7->Text = value;
		}
		if (counter == 6) {
			Edit8->Text = value;
		}
		if (counter == 7) {
			Edit9->Text = value;
		}
		if (counter == 8) {
			Edit10->Text = value;
		}
		if (counter == 9) {
			Edit11->Text = value;
			Button1->Visible = False;
			Edit1->Visible = False;
			Label1->Visible = False;
			Orden->Visible = True;
			Button2->Visible = True;
		}
		// cada vez que termina de comparar, incrementa el counter
		counter = counter + 1;
		// actualizo el valor de label4 que sirve de counter
		Label4->Caption = counter;
	}

	// Label4->Caption.ToInt();
	// ShowMessage(msj[1].c_str());

}

// ---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject * Sender) {
	string msj[3] = {
		"Ingresado los primeros 10 valores puedes seguir",
		"Opción 1:Ascendente", "Opción 2: Descendente"};
	// trabajo en un array de numeros para ordenarlos

	int numeros[10];
	// dado que pedian letra A y D , seguimos la idea original un poco modificada
	// asi sigo con las opciones A y D
	char option;

	// genero entonces los valores del int al trabajo de array de int
	// si el valor fuera vacio daria error, por eso debia habilitar el botón
	// al terminar los 10 valores ingresados
	numeros[0] = Edit2->Text.ToInt();
	numeros[1] = Edit3->Text.ToInt();
	numeros[2] = Edit4->Text.ToInt();
	numeros[3] = Edit5->Text.ToInt();
	numeros[4] = Edit6->Text.ToInt();
	numeros[5] = Edit7->Text.ToInt();
	numeros[6] = Edit8->Text.ToInt();
	numeros[7] = Edit9->Text.ToInt();
	numeros[8] = Edit10->Text.ToInt();
	numeros[9] = Edit11->Text.ToInt();
	// si la opcion ingresada es la primera entonces estamos en la ascendente

	if (Orden->ItemIndex == 0) {
		option = 'A';
		reordenar(numeros, option);
		// ShowMessage(msj[1].c_str());
		Edit12->Text = numeros[0];
		Edit13->Text = numeros[1];
		Edit14->Text = numeros[2];
		Edit15->Text = numeros[3];
		Edit16->Text = numeros[4];
		Edit17->Text = numeros[5];
		Edit18->Text = numeros[6];
		Edit19->Text = numeros[7];
		Edit20->Text = numeros[8];
		Edit21->Text = numeros[9];

	}
	else {
		option = 'D';
		reordenar(numeros, option);
		Edit22->Text = numeros[0];
		Edit23->Text = numeros[1];
		Edit24->Text = numeros[2];
		Edit25->Text = numeros[3];
		Edit26->Text = numeros[4];
		Edit27->Text = numeros[5];
		Edit28->Text = numeros[6];
		Edit29->Text = numeros[7];
		Edit30->Text = numeros[8];
		Edit31->Text = numeros[9];
		// ShowMessage(msj[2].c_str());
	}
}

// ---------------------------------------------------------------------------
