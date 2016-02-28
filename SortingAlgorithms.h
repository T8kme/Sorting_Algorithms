//---------------------------------------------------------------------------

#ifndef SortingAlgorithmsH
#define SortingAlgorithmsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TRadioGroup *RadioGroup1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton5;
	TRadioButton *RadioButton6;
	TRadioButton *RadioButton7;
	TRadioButton *RadioButton8;
	TRadioButton *RadioButton9;
	TRadioButton *RadioButton10;
	TRadioButton *RadioButton11;
	TGroupBox *GroupBox1;
	TButton *btnStart;
	TEdit *EditUnsorted;
	TEdit *EditSorted;
	TLabel *Label1;
	TLabel *Label2;
	TListBox *ListBoxTime;
	TButton *bSaveTime;
	TButton *bClear;
	TLabel *Label3;
	TLabel *labelTime;
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *About1;
	TMenuItem *Exit1;
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall btnStartClick(TObject *Sender);
	void __fastcall bSaveTimeClick(TObject *Sender);
	void __fastcall bClearClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
