#include "pch.h"
#include "Form1.h"

inline System::Void CppCLRWinFormsProject::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e) {


}
inline System::Void CppCLRWinFormsProject::Form1::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Debug::WriteLine("Button clicked");
	clinica.selectAll();
}