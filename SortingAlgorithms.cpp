// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SortingAlgorithms.h"
#include "Table.h"
#include <string>
#include <windows.h>

// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm2::Exit1Click(TObject *Sender) {
	Application->Terminate();
}

// ---------------------------------------------------------------------------
void __fastcall TForm2::btnStartClick(TObject *Sender) {

	const String text_values = EditUnsorted->Text;
	EditSorted->Text = Trim() + " xD";
		/*
		 EditSorted->Text(T.showTab("Tablica wyjsciowa T: "));
		 Tablica t = ++T;
		 EditSorted->Text(t.showTab("  Po t = ++T t jest: "));
		 EditSorted->Text(T.showTab("           a T jest: "));

		 Tablica S(4, tab);
		 EditSorted->Text(S.showTab("Tablica wyjsciowa S: "));
		 Tablica s = S++;
		 EditSorted->Text(s.showTab("  Po s = S++ s jest: "));
		 EditSorted->Text(S.showTab("           a S jest: "));
		 */
	}

	// ---------------------------------------------------------------------------
	void __fastcall TForm2::bSaveTimeClick(TObject *Sender) {
		String time = "cz:as";
		int number = ListBoxTime->Items->Count + 1;
		ListBoxTime->Items->Add((String)number + ". " + time);

	}

	// ---------------------------------------------------------------------------
	void __fastcall TForm2::bClearClick(TObject *Sender) {
		ListBoxTime->Items->Clear();
	}
	// ---------------------------------------------------------------------------
