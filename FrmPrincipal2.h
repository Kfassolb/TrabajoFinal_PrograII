#pragma once
#include "Controladora2.h"
#include "GameOver.h"
#include "Winner.h"
namespace Proyectofinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmPrincipal2
	/// </summary>
	public ref class FrmPrincipal2 : public System::Windows::Forms::Form
	{
	public:
		FrmPrincipal2(int tipo)
		{
			srand(time(NULL));
			InitializeComponent();

			p = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(p, panel1->ClientRectangle);

			bmpPersona = gcnew Bitmap("persona.png");
			bmpMapa = gcnew Bitmap("mapa.png");
			bmpOrg = gcnew Bitmap("organic.png");
			bmpPap = gcnew Bitmap("paper.png");
			bmpPlas = gcnew Bitmap("plastic.png");
			bmpVid = gcnew Bitmap("glass.png");
			bmpEnem = gcnew Bitmap("enemigo.png");
			bmpVehi = gcnew Bitmap("vehiculo.png");
			bmpBala = gcnew Bitmap("bala.png");
			bmpTachoO = gcnew Bitmap("tacho_org.jpg");
			bmpTachoPa = gcnew Bitmap("tacho_pap.jpg");
			bmpTachoPl= gcnew Bitmap("tacho_plas.jpg");
			bmpTachoV = gcnew Bitmap("tacho_vid.jpg");
			switch (tipo) {
			case 0: bmp = bmpTachoO; break;
			case 1: bmp = bmpTachoPl; break;
			case 2: bmp = bmpTachoPa; break;
			case 3: bmp = bmpTachoV; break;
			}

			controladora = new Controladora2(bmpPersona, 1.0,bmpEnem,1.0,bmpOrg,bmpPap,bmpPlas,bmpVid,0.14,panel1->Width,panel1->Height);
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
		Bitmap^ bmpEnem;
		Bitmap^ bmpVehi;
		Bitmap^ bmpBala;
		Bitmap^ bmpTachoO;
		Bitmap^ bmpTachoPa;
		Bitmap^ bmpTachoPl;
		Bitmap^ bmpTachoV;
		Bitmap^ bmp;

		Controladora2* controladora;
		int tipo;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblVid;
	private: System::Windows::Forms::Label^ lblPap;
	private: System::Windows::Forms::Label^ lblPlas;
	private: System::Windows::Forms::Label^ lblOrg;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblVida;
	private: System::Windows::Forms::Label^ lblPuntos;


	private: System::Windows::Forms::Panel^ panel1;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmPrincipal2()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmPrincipal2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblVid = (gcnew System::Windows::Forms::Label());
			this->lblPap = (gcnew System::Windows::Forms::Label());
			this->lblPlas = (gcnew System::Windows::Forms::Label());
			this->lblOrg = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblVida = (gcnew System::Windows::Forms::Label());
			this->lblPuntos = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(735, 469);
			this->panel1->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmPrincipal2::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 3000;
			this->timer2->Tick += gcnew System::EventHandler(this, &FrmPrincipal2::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 7000;
			this->timer3->Tick += gcnew System::EventHandler(this, &FrmPrincipal2::timer3_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(757, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(109, 180);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(751, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usted debe recoger:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(751, 329);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Quedan:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(754, 364);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Organico";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(754, 387);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Plastico";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(754, 411);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Papel";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(754, 433);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Vidrio";
			// 
			// lblVid
			// 
			this->lblVid->AutoSize = true;
			this->lblVid->Location = System::Drawing::Point(808, 433);
			this->lblVid->Name = L"lblVid";
			this->lblVid->Size = System::Drawing::Size(0, 13);
			this->lblVid->TabIndex = 11;
			// 
			// lblPap
			// 
			this->lblPap->AutoSize = true;
			this->lblPap->Location = System::Drawing::Point(808, 411);
			this->lblPap->Name = L"lblPap";
			this->lblPap->Size = System::Drawing::Size(0, 13);
			this->lblPap->TabIndex = 10;
			// 
			// lblPlas
			// 
			this->lblPlas->AutoSize = true;
			this->lblPlas->Location = System::Drawing::Point(808, 387);
			this->lblPlas->Name = L"lblPlas";
			this->lblPlas->Size = System::Drawing::Size(0, 13);
			this->lblPlas->TabIndex = 9;
			// 
			// lblOrg
			// 
			this->lblOrg->AutoSize = true;
			this->lblOrg->Location = System::Drawing::Point(808, 364);
			this->lblOrg->Name = L"lblOrg";
			this->lblOrg->Size = System::Drawing::Size(0, 13);
			this->lblOrg->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::IndianRed;
			this->label7->Location = System::Drawing::Point(741, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Vidas";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::IndianRed;
			this->label8->Location = System::Drawing::Point(741, 47);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 25);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Puntos";
			// 
			// lblVida
			// 
			this->lblVida->AutoSize = true;
			this->lblVida->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVida->ForeColor = System::Drawing::Color::Black;
			this->lblVida->Location = System::Drawing::Point(831, 13);
			this->lblVida->Name = L"lblVida";
			this->lblVida->Size = System::Drawing::Size(0, 25);
			this->lblVida->TabIndex = 14;
			// 
			// lblPuntos
			// 
			this->lblPuntos->AutoSize = true;
			this->lblPuntos->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPuntos->ForeColor = System::Drawing::Color::Black;
			this->lblPuntos->Location = System::Drawing::Point(831, 47);
			this->lblPuntos->Name = L"lblPuntos";
			this->lblPuntos->Size = System::Drawing::Size(0, 25);
			this->lblPuntos->TabIndex = 15;
			// 
			// FrmPrincipal2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(894, 470);
			this->Controls->Add(this->lblPuntos);
			this->Controls->Add(this->lblVida);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblVid);
			this->Controls->Add(this->lblPap);
			this->Controls->Add(this->lblPlas);
			this->Controls->Add(this->lblOrg);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"FrmPrincipal2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmPrincipal2";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmPrincipal2::FrmPrincipal2_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::Black);
		controladora->colision(buffer->Graphics);
		controladora->moverTodo(buffer->Graphics);
		buffer->Graphics->DrawImage(bmpMapa, 0, 0, panel1->Width, panel1->Height);
		pictureBox1->Image = bmp;
		lblOrg->Text = Convert::ToString(controladora->getRectangleOrg().size());
		lblPap->Text = Convert::ToString(controladora->getRectanglePap().size());
		lblPlas->Text = Convert::ToString(controladora->getRectanglePlas().size());
		lblVid->Text = Convert::ToString(controladora->getRectangleVid().size());
		lblVida->Text = Convert::ToString(controladora->getHeroe()->getVida());
		lblPuntos->Text = Convert::ToString(controladora->getHeroe()->getPuntaje());
		controladora->dibujarTodo(buffer->Graphics,bmpPersona,bmpEnem,bmpVehi,bmpBala,bmpOrg,bmpPap,bmpPlas,bmpVid);
		buffer->Render(p);

		if (tipo == 0 && controladora->getRectangleOrg().size() == 0) {
			tipo = 1;
			bmp = bmpTachoPl;
		}
		else if (tipo == 1 && controladora->getRectanglePlas().size() == 0) {
			tipo = 2;
			bmp = bmpTachoPa;
		}
		else if (tipo == 2 && controladora->getRectanglePap().size() == 0) {
			tipo = 3;
			bmp = bmpTachoV;
		}
		else if (tipo == 3 && controladora->getRectangleVid().size() == 0) {
			tipo = 0;
			bmp = bmpTachoO;
		}
		if(controladora->getRectangleOrg().size() == 0&& controladora->getRectanglePap().size() == 0&& controladora->getRectanglePlas().size() == 0
			&& controladora->getRectangleVid().size() == 0){
			timer1->Enabled = false;
			timer2->Enabled = false;
			Winner^ frm = gcnew Winner();
			this->Hide();
			frm->ShowDialog();
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
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		Vehiculo* v = new Vehiculo(bmpVehi->Width / 3, bmpVehi->Height / 3, 1.0);
		controladora->agregarVehiculo(v);
	}
	private: System::Void FrmPrincipal2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode)
		{
		case Keys::A: case Keys::Left:
			controladora->getHeroe()->mover(buffer->Graphics, 'A'); break;
		case Keys::W: case Keys::Up:
			controladora->getHeroe()->mover(buffer->Graphics, 'W'); break;
		case Keys::D:case Keys::Right:
			controladora->getHeroe()->mover(buffer->Graphics, 'D'); break;
		case Keys::S: case Keys::Down:
			controladora->getHeroe()->mover(buffer->Graphics, 'S'); break;
		case Keys::R: controladora->colisionDesechos(tipo); break;
		case Keys::P: {timer1->Enabled = false; timer2->Enabled = false; } break;
		case Keys::Enter: {timer1->Enabled = true; timer2->Enabled = true; } break;
		case Keys::Space:
			Bala* b = new Bala(bmpBala->Width, bmpBala->Height,0.1, controladora->getHeroe()->getX(),
				controladora->getHeroe()->getY(), controladora->getHeroe()->getIdy());
			controladora->agregarBala(b); break;
		}

	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
		controladora->agregarEnemigo(bmpEnem, 1.0);
	}
};
}
