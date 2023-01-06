#pragma once
//#include <msclr\marshal.h>
//#include <msclr\marshal_cppstd.h>
//using namespace msclr::interop;
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Security::Cryptography;
	using namespace System::Text;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;										// From String 16-bit to 8-bit (System to std)
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::String^ failo_vardas = "";
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ atidarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programąToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ issaugotiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ issaugotiKaipToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uzdarytiToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->issaugotiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->issaugotiKaipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uzdarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programąToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F));
			this->textBox1->Location = System::Drawing::Point(12, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(984, 342);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1031, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Atidaryti";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1031, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Išsaugoti";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(1031, 705);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Išsaugoti kaip..";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(1031, 84);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 46);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Rūšiuoti pagal vardą";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(1031, 733);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 26);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Apie programą";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button6->Enabled = false;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(1031, 132);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 46);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Rūšiuoti pagal pažymį (vid.)";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(1031, 763);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 24);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Uždaryti";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(28, 28);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(3, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(1150, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->atidarytiToolStripMenuItem,
					this->issaugotiToolStripMenuItem, this->issaugotiKaipToolStripMenuItem, this->uzdarytiToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(48, 22);
			this->toolStripMenuItem1->Text = L"Failas";
			// 
			// atidarytiToolStripMenuItem
			// 
			this->atidarytiToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->atidarytiToolStripMenuItem->Name = L"atidarytiToolStripMenuItem";
			this->atidarytiToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->atidarytiToolStripMenuItem->Text = L"Atidaryti";
			this->atidarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::atidarytiToolStripMenuItem_Click);
			// 
			// issaugotiToolStripMenuItem
			// 
			this->issaugotiToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->issaugotiToolStripMenuItem->Name = L"issaugotiToolStripMenuItem";
			this->issaugotiToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->issaugotiToolStripMenuItem->Text = L"Issaugoti";
			this->issaugotiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::issaugotiToolStripMenuItem_Click);
			// 
			// issaugotiKaipToolStripMenuItem
			// 
			this->issaugotiKaipToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->issaugotiKaipToolStripMenuItem->Name = L"issaugotiKaipToolStripMenuItem";
			this->issaugotiKaipToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->issaugotiKaipToolStripMenuItem->Text = L"Issaugoti kaip..";
			this->issaugotiKaipToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::issaugotiKaipToolStripMenuItem_Click);
			// 
			// uzdarytiToolStripMenuItem
			// 
			this->uzdarytiToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->uzdarytiToolStripMenuItem->Name = L"uzdarytiToolStripMenuItem";
			this->uzdarytiToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->uzdarytiToolStripMenuItem->Text = L"Uzdaryti";
			this->uzdarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uzdarytiToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->apieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->programąToolStripMenuItem });
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(43, 22);
			this->apieToolStripMenuItem->Text = L"Apie";
			// 
			// programąToolStripMenuItem
			// 
			this->programąToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(202)));
			this->programąToolStripMenuItem->Name = L"programąToolStripMenuItem";
			this->programąToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->programąToolStripMenuItem->Text = L"Programa";
			this->programąToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::programąToolStripMenuItem_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F));
			this->textBox2->Location = System::Drawing::Point(12, 412);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(984, 342);
			this->textBox2->TabIndex = 9;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(1031, 183);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 23);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Hash By MD5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(1031, 212);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(107, 23);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Hash By SHA1";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(1031, 674);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(107, 23);
			this->button10->TabIndex = 13;
			this->button10->Text = L"Hash By SHA1";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(1031, 645);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(107, 23);
			this->button11->TabIndex = 12;
			this->button11->Text = L"Hash By MD5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 380);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Raktas:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 769);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Raktas:";
			this->label2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->textBox3->Location = System::Drawing::Point(62, 377);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(934, 20);
			this->textBox3->TabIndex = 17;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->textBox4->Location = System::Drawing::Point(62, 767);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(934, 20);
			this->textBox4->TabIndex = 18;
			this->textBox4->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->ClientSize = System::Drawing::Size(1150, 796);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Studentų pažymių vertinimo programa";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// OPEN

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->InitialDirectory = "..\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";																										// parenkome darbinę direktoriją
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
			textBox1->Text = (sr->ReadToEnd());
			failo_vardas = openFileDialog1->FileName;
			MarshalString(failo_vardas, filename2);
			sr->Close();
			this->button4->Enabled = true;
			this->button6->Enabled = true;
		}
	}

		 // SAVE AS
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();											
		saveFileDialog1->InitialDirectory = "..\\";															
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt";												
		String^ z = textBox2->Text;																			
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)					
		{
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);		
			sw->Write(z);																					
			sw->Close();																					
		}
		else MessageBox::Show("Error on file input", "Error", MessageBoxButtons::OK);						

	}
		 // SAVE

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ z;
		if (textBox1->Text == "") z = " ";																
		else z = textBox1->Text;
		if (failo_vardas != "")																				
		{
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(failo_vardas);					 
			sw->Write(z);																					
			sw->Close();																					
			MessageBox::Show("The file has been successfully\nrewritten",									
				"Information", MessageBoxButtons::OK);														
		}
		else MessageBox::Show("You forgot open file", "File open Error", MessageBoxButtons::OK);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox2->Text = "Vardas                   Pavarde                                      Galutinis(Vid.)         Galutinis(Med.)\r\n";
		vector<Student> arg_st;
		ifstream fs(filename2);
		fs >> arg_st;
		fs.close();
		sort(arg_st.begin(), arg_st.end(), sortGUIByName);
		ofstream of("studentai.txt");
		for (int i = 0; i < arg_st.size(); i++)
			of << arg_st[i];

		of.close();

		System::IO::StreamReader^ sr2 = gcnew System::IO::StreamReader("studentai.txt");
		this->textBox2->Text += (sr2->ReadToEnd());
		sr2->Close();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"Studentų pažymių vertinimo programos papildymas grafiniu interface'u.",
			L"Apie programą", MessageBoxButtons::OK);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox2->Text = "Vardas                   Pavarde                                      Galutinis(Vid.)         Galutinis(Med.)\r\n";
		vector<Student> arg_st;
		ifstream fs(filename2);
		fs >> arg_st;
		fs.close();
		sort(arg_st.begin(), arg_st.end(), sortGUIByGrade);

		ofstream of("studentai.txt");
		for (int i = 0; i < arg_st.size(); i++)
			of << arg_st[i];
		of.close();
		System::IO::StreamReader^ sr2 = gcnew System::IO::StreamReader("studentai.txt");
		this->textBox2->Text += (sr2->ReadToEnd());
		sr2->Close();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		exit(0);
	}
	private: System::Void programąToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button5_Click(sender, e);
	}
	private: System::Void atidarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button1_Click(sender, e);
	}
	private: System::Void issaugotiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button2_Click(sender, e);
	}
	private: System::Void issaugotiKaipToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button3_Click(sender, e);
	}
	private: System::Void uzdarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		button7_Click(sender, e);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "") {
			button4->Enabled = false;
			button6->Enabled = false;
		}
	}

	private: String^ getMD5(String^ inputString)
	{
		array<Byte>^ byteArray = Encoding::ASCII->GetBytes(inputString);
		MD5CryptoServiceProvider^ md5provider = gcnew MD5CryptoServiceProvider();
		array<Byte>^ byteArrayHash = md5provider->ComputeHash(byteArray);
		return BitConverter::ToString(byteArrayHash);
	}
	private: String^ getSHA1(String^ inputString)
	{
		array<Byte>^ byteArray = Encoding::ASCII->GetBytes(inputString);
		SHA1CryptoServiceProvider^ shaprovider = gcnew SHA1CryptoServiceProvider();
		array<Byte>^ SHA1byteArrayHash = shaprovider->ComputeHash(byteArray);
		return BitConverter::ToString(SHA1byteArrayHash);
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox3->Visible = true;
		this->textBox3->Text = getMD5(this->textBox1->Text);
		this->label1->Visible = true;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox3->Visible = true;
		this->textBox3->Text = getSHA1(this->textBox1->Text);
		this->label1->Visible = true;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox4->Visible = true;
		this->textBox4->Text = getMD5(this->textBox2->Text);
		this->label2->Visible = true;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox4->Visible = true;
		this->textBox4->Text = getSHA1(this->textBox2->Text);
		this->label2->Visible = true;
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};


}