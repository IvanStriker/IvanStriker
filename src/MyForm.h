#pragma once
#include <fstream>
#include <cstdio>
#include <string>
#include "msclr\marshal_cppstd.h"
using std::ifstream;
using std::ofstream;
using std::wstring;
using std::string;

namespace DPICorrector {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name_label;
	protected:

	private: System::Windows::Forms::Label^ top_label;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ exit_button;
	private: System::Windows::Forms::PictureBox^ minimize_button;
	private: System::Windows::Forms::Button^ browse_button;
	private: System::Windows::Forms::TextBox^ file_box;


	private: System::Windows::Forms::CheckBox^ dpi_check;
	private: System::Windows::Forms::CheckBox^ style_check;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ correct_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;







	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->top_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->exit_button = (gcnew System::Windows::Forms::PictureBox());
			this->minimize_button = (gcnew System::Windows::Forms::PictureBox());
			this->browse_button = (gcnew System::Windows::Forms::Button());
			this->file_box = (gcnew System::Windows::Forms::TextBox());
			this->dpi_check = (gcnew System::Windows::Forms::CheckBox());
			this->style_check = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->correct_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit_button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimize_button))->BeginInit();
			this->SuspendLayout();
			// 
			// name_label
			// 
			resources->ApplyResources(this->name_label, L"name_label");
			this->name_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->name_label->Name = L"name_label";
			this->name_label->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::name_label_MouseDown);
			this->name_label->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::name_label_MouseMove);
			this->name_label->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::name_label_MouseUp);
			// 
			// top_label
			// 
			this->top_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			resources->ApplyResources(this->top_label, L"top_label");
			this->top_label->Name = L"top_label";
			this->top_label->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::top_label_MouseDown);
			this->top_label->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::top_label_MouseMove);
			this->top_label->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::top_label_MouseUp);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// exit_button
			// 
			this->exit_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			resources->ApplyResources(this->exit_button, L"exit_button");
			this->exit_button->Name = L"exit_button";
			this->exit_button->TabStop = false;
			this->exit_button->Click += gcnew System::EventHandler(this, &MyForm::exit_button_Click);
			this->exit_button->MouseEnter += gcnew System::EventHandler(this, &MyForm::exit_button_MouseHover);
			this->exit_button->MouseLeave += gcnew System::EventHandler(this, &MyForm::exit_button_MouseLeave);
			// 
			// minimize_button
			// 
			this->minimize_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			resources->ApplyResources(this->minimize_button, L"minimize_button");
			this->minimize_button->Name = L"minimize_button";
			this->minimize_button->TabStop = false;
			this->minimize_button->Click += gcnew System::EventHandler(this, &MyForm::minimize_button_Click);
			this->minimize_button->MouseEnter += gcnew System::EventHandler(this, &MyForm::minimize_button_MouseEnter);
			this->minimize_button->MouseLeave += gcnew System::EventHandler(this, &MyForm::minimize_button_MouseLeave);
			// 
			// browse_button
			// 
			this->browse_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->browse_button->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->browse_button->FlatAppearance->BorderSize = 0;
			this->browse_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->browse_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			resources->ApplyResources(this->browse_button, L"browse_button");
			this->browse_button->Name = L"browse_button";
			this->browse_button->UseVisualStyleBackColor = false;
			this->browse_button->Click += gcnew System::EventHandler(this, &MyForm::browse_button_Click);
			// 
			// file_box
			// 
			resources->ApplyResources(this->file_box, L"file_box");
			this->file_box->Name = L"file_box";
			// 
			// dpi_check
			// 
			resources->ApplyResources(this->dpi_check, L"dpi_check");
			this->dpi_check->Name = L"dpi_check";
			this->dpi_check->UseVisualStyleBackColor = true;
			// 
			// style_check
			// 
			resources->ApplyResources(this->style_check, L"style_check");
			this->style_check->Name = L"style_check";
			this->style_check->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// correct_button
			// 
			this->correct_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->correct_button->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->correct_button->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(21)));
			this->correct_button->FlatAppearance->BorderSize = 0;
			this->correct_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->correct_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			resources->ApplyResources(this->correct_button, L"correct_button");
			this->correct_button->Name = L"correct_button";
			this->correct_button->UseVisualStyleBackColor = false;
			this->correct_button->Click += gcnew System::EventHandler(this, &MyForm::correct_button_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::LightSteelBlue;
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::LightSteelBlue;
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::LightSteelBlue;
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->correct_button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->style_check);
			this->Controls->Add(this->dpi_check);
			this->Controls->Add(this->file_box);
			this->Controls->Add(this->browse_button);
			this->Controls->Add(this->minimize_button);
			this->Controls->Add(this->exit_button);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->name_label);
			this->Controls->Add(this->top_label);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit_button))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimize_button))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void exit_button_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		exit_button->Image = Image::FromFile(L"img\\cross2.ico");
	}

	private: System::Void exit_button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		exit_button->Image = Image::FromFile(L"img\\cross.ico");
	}
	
	private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	private: System::Void minimize_button_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		minimize_button->Image = Image::FromFile(L"img\\minimize3.ico");
	}

	private: System::Void minimize_button_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		minimize_button->Image = Image::FromFile(L"img\\minimize2.ico");
	}

	private: System::Void minimize_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void browse_button_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ f = gcnew OpenFileDialog();
		f->Filter = L"»сполн€емые файлы (*.exe) | *.exe";
		if (f->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			file_box->Text = f->FileName;
		}
	}
	
	private: System::Void correct_button_Click(System::Object^ sender, System::EventArgs^ e) {
		ifstream base("base.manifest");
		wstring wfile_name = static_cast<const wchar_t*>(System::Runtime::InteropServices::Marshal::StringToHGlobalUni(file_box->Text).ToPointer());
		string file_name = static_cast<const char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(file_box->Text).ToPointer());
		ofstream out(file_name + ".manifest");
		string curr;
		while (!base.eof()) {
			getline(base, curr);
			if (curr == "__dpi__" && dpi_check->Checked) {
				ifstream dpi("dpi.manifest");
				while (!dpi.eof()) {
					getline(dpi, curr);
					out << curr << '\n';
				}
			} else 
			if (curr == "__styles__" && style_check->Checked) {
				ifstream styles("styles.manifest");
				while (!styles.eof()) {
					getline(styles, curr);
					out << curr << '\n';
				}
			}
			else {
				if (curr != "__dpi__" && curr != "__styles__")
					out << curr << '\n';
			}
		}
		out.close();
		std::string com = (string("mt.exe -manifest \"") + file_name + string(".manifest\" -outputresource:\"") + file_name + string("\";1"));
		system(com.c_str());
		remove((file_name + string(".manifest")).c_str());
	}
	private: bool moving_win = false;
	private: int x = 0;
	private: int y = 0;

	private: System::Void top_label_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (!moving_win) {
			moving_win = true;
			x = e->X;
			y = e->Y;
		}
	}
	private: System::Void name_label_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (!moving_win) {
			moving_win = true;
			x = e->X;
			y = e->Y;
		}
	}

	private: System::Void top_label_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		moving_win = false;
	}
	private: System::Void name_label_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		moving_win = false;
	}
	private: System::Void top_label_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (moving_win) {
			Location = Drawing::Point(Location.X + e->X - x, Location.Y + e->Y - y);
		}
	}
	private: System::Void name_label_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (moving_win) {
			Location = Drawing::Point(Location.X + e->X - x, Location.Y + e->Y - y);
		}
	}
};
}
