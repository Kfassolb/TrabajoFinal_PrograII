#pragma once
#include "FrmTachos.h"
#include "FrmInstruc.h"
#include "FrmCreditos.h"

namespace Proyectofinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmMenu
	/// </summary>
	public ref class FrmMenu : public System::Windows::Forms::Form
	{
	public:
		FrmMenu(void)
		{
			InitializeComponent();

		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnInstruc;

	private: System::Windows::Forms::Button^ btnCredito;
	private: System::Windows::Forms::Button^ btnPlay;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmMenu::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnInstruc = (gcnew System::Windows::Forms::Button());
			this->btnCredito = (gcnew System::Windows::Forms::Button());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->CausesValidation = false;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnInstruc);
			this->panel1->Controls->Add(this->btnCredito);
			this->panel1->Controls->Add(this->btnPlay);
			this->panel1->Location = System::Drawing::Point(3, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(780, 457);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 50.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::GhostWhite;
			this->label1->Location = System::Drawing::Point(43, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(345, 83);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Hero Recicler";
			// 
			// btnInstruc
			// 
			this->btnInstruc->BackColor = System::Drawing::Color::LemonChiffon;
			this->btnInstruc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnInstruc->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInstruc->ForeColor = System::Drawing::SystemColors::MenuText;
			this->btnInstruc->Location = System::Drawing::Point(68, 238);
			this->btnInstruc->Name = L"btnInstruc";
			this->btnInstruc->Size = System::Drawing::Size(122, 34);
			this->btnInstruc->TabIndex = 2;
			this->btnInstruc->Text = L"Instrucciones";
			this->btnInstruc->UseVisualStyleBackColor = false;
			this->btnInstruc->Click += gcnew System::EventHandler(this, &FrmMenu::btnInstruc_Click);
			// 
			// btnCredito
			// 
			this->btnCredito->BackColor = System::Drawing::Color::LemonChiffon;
			this->btnCredito->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCredito->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCredito->ForeColor = System::Drawing::SystemColors::MenuText;
			this->btnCredito->Location = System::Drawing::Point(236, 238);
			this->btnCredito->Name = L"btnCredito";
			this->btnCredito->Size = System::Drawing::Size(122, 34);
			this->btnCredito->TabIndex = 1;
			this->btnCredito->Text = L"Créditos";
			this->btnCredito->UseVisualStyleBackColor = false;
			this->btnCredito->Click += gcnew System::EventHandler(this, &FrmMenu::btnCredito_Click);
			// 
			// btnPlay
			// 
			this->btnPlay->BackColor = System::Drawing::Color::LightSlateGray;
			this->btnPlay->Font = (gcnew System::Drawing::Font(L"Forte", 18));
			this->btnPlay->ForeColor = System::Drawing::Color::SkyBlue;
			this->btnPlay->Location = System::Drawing::Point(135, 297);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(160, 53);
			this->btnPlay->TabIndex = 0;
			this->btnPlay->Text = L"Play";
			this->btnPlay->UseVisualStyleBackColor = false;
			this->btnPlay->Click += gcnew System::EventHandler(this, &FrmMenu::btnIniciar_Click);
			// 
			// FrmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 459);
			this->Controls->Add(this->panel1);
			this->Name = L"FrmMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmMenu";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmTachos^ frm = gcnew FrmTachos();
		this->Hide();
		frm->ShowDialog();
		this->Show();
		delete frm;
	}
	private: System::Void btnInstruc_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmInstruc^ frm = gcnew FrmInstruc();
		this->Hide();
		frm->ShowDialog();
		this->Show();
		delete frm;
	}
	private: System::Void btnCredito_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmCreditos^ frm = gcnew FrmCreditos();
		this->Hide();
		frm->ShowDialog();
		this->Show();
		delete frm;
	}
};
}
