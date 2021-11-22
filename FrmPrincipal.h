#pragma once
#include "Controladora.h"
#include "FrmTransicion.h"
namespace Proyectofinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmPrincipal
	/// </summary>
	public ref class FrmPrincipal : public System::Windows::Forms::Form
	{
	public:
		FrmPrincipal(int tipo)
		{
			srand(time(NULL));
			InitializeComponent();
			
			p = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(p, panel1->ClientRectangle);

			bmpPersona = gcnew Bitmap("persona.png");
			bmpMapa = gcnew Bitmap("fondo.png");
			bmpOrg = gcnew Bitmap("organic.png");
			bmpPap = gcnew Bitmap("paper.png");
			bmpPlas = gcnew Bitmap("plastic.png");
			bmpVid = gcnew Bitmap("glass.png");
						
			controladora = new Controladora(bmpPersona,1.5);
			this->tipo = tipo;
			
		}
	private:
		
		Graphics^ p;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;

		Bitmap^ bmpPersona;
		Bitmap^ bmpMapa;
		Bitmap^ bmpOrg;
		Bitmap^ bmpPap;
		Bitmap^ bmpPlas;
		Bitmap^ bmpVid;

		Controladora* controladora;
		int tipo;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Panel^ panel1;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmPrincipal::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(773, 474);
			this->panel1->TabIndex = 0;
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &FrmPrincipal::timer2_Tick);
			// 
			// FrmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 478);
			this->Controls->Add(this->panel1);
			this->Name = L"FrmPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmPrincipal";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmPrincipal::FrmPrincipal_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//Borrar
		buffer->Graphics->Clear(Color::White);
		//colision
		controladora->colision(buffer->Graphics,tipo);
		//mover
		controladora->moverTodo(buffer->Graphics);
		//dibujar
		buffer->Graphics->DrawImage(bmpMapa, 0, 0, panel1->Width, panel1->Height);
		buffer->Graphics->DrawString("Vidas", gcnew Drawing::Font("MV Boli", 40, FontStyle::Bold),
			Brushes::OrangeRed, 0, 3);
		buffer->Graphics->DrawString(Convert::ToString(controladora->getHeroe()->getVida()), gcnew Drawing::Font("MV Boli", 40, FontStyle::Bold),
			Brushes::Black, 150, 3);
		buffer->Graphics->DrawString("Puntos", gcnew Drawing::Font("Times New Roman", 40, FontStyle::Bold),
			Brushes::OrangeRed, 500, 3);
		buffer->Graphics->DrawString(Convert::ToString(controladora->getHeroe()->getPuntaje()), gcnew Drawing::Font("MV Boli", 40, FontStyle::Bold),
			Brushes::Black, 690, 3);
		controladora->dibujarTodo(buffer->Graphics, bmpPersona,bmpOrg,bmpPap,bmpPlas,bmpVid);
		buffer->Render(p);
		if (controladora->getHeroe()->getPuntaje()==20) {
			timer1->Enabled = false;
			timer2->Enabled = false;
			FrmTransicion^ frm = gcnew FrmTransicion();
			this->Hide();
			frm->ShowDialog();
			this->Show();
			delete frm;
			this->Close();
		}
		if (controladora->getHeroe()->getVida() <= 0) {
			timer1->Enabled = false;
			timer2->Enabled = false;
			GameOver^ frm = gcnew GameOver();
			this->Hide();
			frm->ShowDialog();
			delete frm;
			this->Close();
		}
	}
	private: System::Void FrmPrincipal_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode)
		{
		case Keys::A: case Keys::Left:
			controladora->getHeroe()->mover(buffer->Graphics, 'A'); break;
		case Keys::D:case Keys::Right:
			controladora->getHeroe()->mover(buffer->Graphics, 'D'); break;
		}
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		controladora->agregarDesecho(bmpOrg,bmpPap,bmpPlas,bmpVid,panel1->Width,panel1->Height,1);
	}
	};
}
