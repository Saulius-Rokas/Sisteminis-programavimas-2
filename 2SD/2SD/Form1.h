#pragma once
#include <algorithm>
#include <iostream>
#include <vcclr.h>
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ failasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atidarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ issaugotiKaipToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uzdarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pagalbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->failasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->issaugotiKaipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uzdarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pagalbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->failasToolStripMenuItem,
					this->pagalbaToolStripMenuItem, this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1341, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// failasToolStripMenuItem
			// 
			this->failasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->atidarytiToolStripMenuItem,
					this->issaugotiKaipToolStripMenuItem, this->uzdarytiToolStripMenuItem
			});
			this->failasToolStripMenuItem->Name = L"failasToolStripMenuItem";
			this->failasToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->failasToolStripMenuItem->Text = L"Failas";
			// 
			// atidarytiToolStripMenuItem
			// 
			this->atidarytiToolStripMenuItem->Name = L"atidarytiToolStripMenuItem";
			this->atidarytiToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->atidarytiToolStripMenuItem->Text = L"Atidaryti";
			this->atidarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::atidarytiToolStripMenuItem_Click);
			// 
			// issaugotiKaipToolStripMenuItem
			// 
			this->issaugotiKaipToolStripMenuItem->Name = L"issaugotiKaipToolStripMenuItem";
			this->issaugotiKaipToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->issaugotiKaipToolStripMenuItem->Text = L"Issaugoti kaip";
			this->issaugotiKaipToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::issaugotiKaipToolStripMenuItem_Click);
			// 
			// uzdarytiToolStripMenuItem
			// 
			this->uzdarytiToolStripMenuItem->Name = L"uzdarytiToolStripMenuItem";
			this->uzdarytiToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->uzdarytiToolStripMenuItem->Text = L"Uzdaryti";
			this->uzdarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uzdarytiToolStripMenuItem_Click);
			// 
			// pagalbaToolStripMenuItem
			// 
			this->pagalbaToolStripMenuItem->Name = L"pagalbaToolStripMenuItem";
			this->pagalbaToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->pagalbaToolStripMenuItem->Text = L"Pagalba";
			this->pagalbaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pagalbaToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(54, 24);
			this->apieToolStripMenuItem->Text = L"Apie";
			this->apieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::apieToolStripMenuItem_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 169);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(548, 244);
			this->listBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Vardas Pavarde";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 22);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(316, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Pazymiai";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(319, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(241, 22);
			this->textBox2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(580, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Egzamino balas";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(583, 51);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(101, 22);
			this->textBox3->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 81);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 44);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Ivesti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Esami studentai ir rezultatai";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(334, 122);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(76, 20);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(416, 122);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 20);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(781, 169);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(548, 244);
			this->listBox2->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(566, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 44);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Kopijuoti visus";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(566, 369);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(209, 44);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Kopijuoti pazymeta";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(781, 419);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 44);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Atidaryti";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(886, 419);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 44);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Issaugoti kaip";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(991, 419);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 44);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Spausdinti";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1096, 419);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 44);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Valyti";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1341, 510);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
		String^ filePath = "C:\\Users\\Saulius\\source\\repos\\2SD\\2SD\\studentai.txt";

		if (System::IO::File::Exists(filePath)) {
			
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(filePath);

			
			String^ fileContent = sr->ReadToEnd();

		
			sr->Close();

			
			listBox1->Items->Add(fileContent);
		}
	}
	private: System::Void atidarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);

			
			String^ fileContent = sr->ReadToEnd();

			sr->Close();

			listBox1->Items->Add(fileContent);
		}
	}
	private: System::Void issaugotiKaipToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->RestoreDirectory = true;

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			
			String^ filePath = saveFileDialog1->FileName;

			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filePath);

			
			for each (Object ^ item in listBox1->Items) {
				sw->WriteLine(item->ToString());
			}

			
			sw->Close();
		}
	}

	private: System::Void uzdarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pagalbaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("", "Pagalba", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void apieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("", "Pagalba", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ vardasPavarde = textBox1->Text;

		
		String^ pazymiaiTekstas = textBox2->Text;
		array<String^>^ pazymiaiArray = pazymiaiTekstas->Split(' ');

		
		String^ egzaminoBalasTekstas = textBox3->Text;
		int egzaminoBalas = Int32::Parse(egzaminoBalasTekstas);

		
		String^ naujasTekstas = String::Format("{0} Pazymiai:", vardasPavarde);

		
		for each (String ^ pazymys in pazymiaiArray) {
			naujasTekstas += String::Format(" {0}", pazymys);
		}

		naujasTekstas += String::Format(" Egzaminas: {0}", egzaminoBalas);

	
		double rezultatas = 0.0;

		if (radioButton1->Checked) {
		
			double suma = 0.0;

			for each (String ^ pazymys in pazymiaiArray) {
				suma += Double::Parse(pazymys);
			}

			double vidurkis = suma / pazymiaiArray->Length;

			rezultatas = 0.4 * vidurkis + 0.6 * egzaminoBalas;
		}
		else if (radioButton2->Checked) {
			
			array<double>^ pazymiai = gcnew array<double>(pazymiaiArray->Length);

			for (int i = 0; i < pazymiaiArray->Length; i++) {
				pazymiai[i] = Double::Parse(pazymiaiArray[i]);
			}

			
			System::Array::Sort(pazymiai);

			if (pazymiaiArray->Length % 2 == 0) {
				rezultatas = (pazymiai[pazymiaiArray->Length / 2 - 1] + pazymiai[pazymiaiArray->Length / 2]) / 2.0;
			}
			else {
				rezultatas = pazymiai[pazymiaiArray->Length / 2];
			}
		}

	
		naujasTekstas += String::Format(" Rezultatas: {0}", rezultatas);

		
		listBox1->Items->Add(naujasTekstas);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		for each (Object ^ item in listBox1->Items) {
			listBox2->Items->Add(item);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (listBox1->SelectedItem != nullptr) {
			
			listBox2->Items->Add(listBox1->SelectedItem);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);

			
			String^ fileContent = sr->ReadToEnd();

			sr->Close();

			
			listBox2->Items->Add(fileContent);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();

		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		saveFileDialog1->FilterIndex = 1;
		saveFileDialog1->RestoreDirectory = true;

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			
			String^ filePath = saveFileDialog1->FileName;

			
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filePath);

			
			for each (Object ^ item in listBox1->Items) {
				sw->WriteLine(item->ToString());
			}

			
			sw->Close();
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		
		listBox2->Items->Clear();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		
		for each (Object ^ item in listBox2->Items) {
			Console::WriteLine(item->ToString());
		}
	}
	};
};