#pragma once
#include "FrmPrincipal.h"
namespace Proyectofinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmTachos
	/// </summary>
	public ref class FrmTachos : public System::Windows::Forms::Form
	{
	public:
		FrmTachos(void)
		{
			InitializeComponent();
			tipo = 0;
		}
	private:
		int tipo;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmTachos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnIniciar;
	protected:

	private: System::Windows::Forms::Button^ btnVid;

	private: System::Windows::Forms::Button^ btnPap;

	private: System::Windows::Forms::Button^ btnPlas;

	private: System::Windows::Forms::Button^ btnOrg;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmTachos::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->btnVid = (gcnew System::Windows::Forms::Button());
			this->btnPap = (gcnew System::Windows::Forms::Button());
			this->btnPlas = (gcnew System::Windows::Forms::Button());
			this->btnOrg = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->btnIniciar);
			this->panel1->Controls->Add(this->btnVid);
			this->panel1->Controls->Add(this->btnPap);
			this->panel1->Controls->Add(this->btnPlas);
			this->panel1->Controls->Add(this->btnOrg);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(657, 394);
			this->panel1->TabIndex = 0;
			// 
			// btnIniciar
			// 
			this->btnIniciar->BackColor = System::Drawing::Color::PaleGreen;
			this->btnIniciar->Enabled = false;
			this->btnIniciar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->btnIniciar->ForeColor = System::Drawing::Color::Black;
			this->btnIniciar->Location = System::Drawing::Point(250, 359);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(158, 22);
			this->btnIniciar->TabIndex = 4;
			this->btnIniciar->Text = L"Iniciar";
			this->btnIniciar->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnIniciar->UseVisualStyleBackColor = false;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &FrmTachos::btnIniciar_Click);
			// 
			// btnVid
			// 
			this->btnVid->BackColor = System::Drawing::SystemColors::Control;
			this->btnVid->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnVid->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->btnVid->ForeColor = System::Drawing::Color::IndianRed;
			this->btnVid->Location = System::Drawing::Point(510, 226);
			this->btnVid->Name = L"btnVid";
			this->btnVid->Size = System::Drawing::Size(71, 22);
			this->btnVid->TabIndex = 3;
			this->btnVid->Text = L"Vidrio";
			this->btnVid->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnVid->UseVisualStyleBackColor = false;
			this->btnVid->Click += gcnew System::EventHandler(this, &FrmTachos::btnVid_Click);
			// 
			// btnPap
			// 
			this->btnPap->BackColor = System::Drawing::SystemColors::Control;
			this->btnPap->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPap->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->btnPap->ForeColor = System::Drawing::Color::RoyalBlue;
			this->btnPap->Location = System::Drawing::Point(368, 226);
			this->btnPap->Name = L"btnPap";
			this->btnPap->Size = System::Drawing::Size(71, 22);
			this->btnPap->TabIndex = 2;
			this->btnPap->Text = L"Paper";
			this->btnPap->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnPap->UseVisualStyleBackColor = false;
			this->btnPap->Click += gcnew System::EventHandler(this, &FrmTachos::btnPap_Click);
			// 
			// btnPlas
			// 
			this->btnPlas->BackColor = System::Drawing::SystemColors::Control;
			this->btnPlas->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPlas->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->btnPlas->ForeColor = System::Drawing::Color::Orange;
			this->btnPlas->Location = System::Drawing::Point(224, 226);
			this->btnPlas->Name = L"btnPlas";
			this->btnPlas->Size = System::Drawing::Size(71, 22);
			this->btnPlas->TabIndex = 1;
			this->btnPlas->Text = L"Plastic";
			this->btnPlas->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnPlas->UseVisualStyleBackColor = false;
			this->btnPlas->Click += gcnew System::EventHandler(this, &FrmTachos::btnPlas_Click);
			// 
			// btnOrg
			// 
			this->btnOrg->BackColor = System::Drawing::SystemColors::Control;
			this->btnOrg->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOrg->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->btnOrg->ForeColor = System::Drawing::Color::Green;
			this->btnOrg->Location = System::Drawing::Point(82, 226);
			this->btnOrg->Name = L"btnOrg";
			this->btnOrg->Size = System::Drawing::Size(71, 22);
			this->btnOrg->TabIndex = 0;
			this->btnOrg->Text = L"Organic";
			this->btnOrg->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnOrg->UseVisualStyleBackColor = false;
			this->btnOrg->Click += gcnew System::EventHandler(this, &FrmTachos::btnOrg_Click);
			// 
			// FrmTachos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 393);
			this->Controls->Add(this->panel1);
			this->Name = L"FrmTachos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmTachos";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnOrg_Click(System::Object^ sender, System::EventArgs^ e) {
		btnIniciar->Enabled = true;
		tipo = 0;
	}
	private: System::Void btnPlas_Click(System::Object^ sender, System::EventArgs^ e) {
		btnIniciar->Enabled = true;
		tipo = 1;
	}
	private: System::Void btnPap_Click(System::Object^ sender, System::EventArgs^ e) {
		btnIniciar->Enabled = true;
		tipo = 2;
	}
	private: System::Void btnVid_Click(System::Object^ sender, System::EventArgs^ e) {
		btnIniciar->Enabled = true;
		tipo = 3;
	}
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmPrincipal^ frm = gcnew FrmPrincipal(tipo);
		this->Hide();
		frm->ShowDialog();
		this->Show();
		delete frm;
	}
};
}
