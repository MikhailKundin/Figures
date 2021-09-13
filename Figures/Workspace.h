#pragma once

#include "Controller.h"

namespace Figures {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Сводка для Workspace
	/// </summary>
	public ref class Workspace : public System::Windows::Forms::Form
	{
	private:
		Controller^ controller;
		Graphics^ graph;

	private: System::Windows::Forms::Label^ lColor;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;

	public:
		Workspace(void)
		{
			InitializeComponent();
		}
	private: System::Windows::Forms::Button^ bReset;
	private: System::Windows::Forms::ComboBox^ cbFigure;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ tbSize;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TrackBar^ tbWidth;
	private: System::Windows::Forms::Label^ lSize;
	private: System::Windows::Forms::Label^ lWidth;
	private: System::Windows::Forms::CheckBox^ cbFill;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;

		~Workspace()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->bReset = (gcnew System::Windows::Forms::Button());
			this->cbFigure = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbSize = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbWidth = (gcnew System::Windows::Forms::TrackBar());
			this->lSize = (gcnew System::Windows::Forms::Label());
			this->lWidth = (gcnew System::Windows::Forms::Label());
			this->cbFill = (gcnew System::Windows::Forms::CheckBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->lColor = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbSize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbWidth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// colorDialog1
			// 
			this->colorDialog1->AllowFullOpen = false;
			this->colorDialog1->SolidColorOnly = true;
			// 
			// bReset
			// 
			this->bReset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bReset->Location = System::Drawing::Point(16, 375);
			this->bReset->MinimumSize = System::Drawing::Size(75, 50);
			this->bReset->Name = L"bReset";
			this->bReset->Size = System::Drawing::Size(226, 50);
			this->bReset->TabIndex = 0;
			this->bReset->Text = L"Сбросить";
			this->bReset->UseVisualStyleBackColor = true;
			this->bReset->Click += gcnew System::EventHandler(this, &Workspace::bReset_Click);
			// 
			// cbFigure
			// 
			this->cbFigure->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbFigure->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbFigure->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbFigure->FormattingEnabled = true;
			this->cbFigure->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Случайная", L"Квадрат", L"Прямоугольник", L"Треугольник",
					L"Круг"
			});
			this->cbFigure->Location = System::Drawing::Point(12, 41);
			this->cbFigure->Name = L"cbFigure";
			this->cbFigure->Size = System::Drawing::Size(230, 26);
			this->cbFigure->TabIndex = 1;
			this->cbFigure->SelectionChangeCommitted += gcnew System::EventHandler(this, &Workspace::cbFigure_SelectionChangeCommitted);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Фигура:";
			// 
			// tbSize
			// 
			this->tbSize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbSize->Location = System::Drawing::Point(12, 123);
			this->tbSize->Maximum = 200;
			this->tbSize->Name = L"tbSize";
			this->tbSize->Size = System::Drawing::Size(196, 45);
			this->tbSize->TabIndex = 0;
			this->tbSize->ValueChanged += gcnew System::EventHandler(this, &Workspace::tbSize_ValueChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Размер:";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Цвет:";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Толщина:";
			// 
			// tbWidth
			// 
			this->tbWidth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbWidth->Location = System::Drawing::Point(12, 204);
			this->tbWidth->Maximum = 50;
			this->tbWidth->Name = L"tbWidth";
			this->tbWidth->Size = System::Drawing::Size(196, 45);
			this->tbWidth->TabIndex = 5;
			this->tbWidth->ValueChanged += gcnew System::EventHandler(this, &Workspace::tbWidth_ValueChanged);
			// 
			// lSize
			// 
			this->lSize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lSize->AutoSize = true;
			this->lSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lSize->Location = System::Drawing::Point(224, 132);
			this->lSize->Name = L"lSize";
			this->lSize->Size = System::Drawing::Size(18, 20);
			this->lSize->TabIndex = 6;
			this->lSize->Text = L"0";
			// 
			// lWidth
			// 
			this->lWidth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lWidth->AutoSize = true;
			this->lWidth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lWidth->Location = System::Drawing::Point(224, 213);
			this->lWidth->Name = L"lWidth";
			this->lWidth->Size = System::Drawing::Size(18, 20);
			this->lWidth->TabIndex = 7;
			this->lWidth->Text = L"0";
			// 
			// cbFill
			// 
			this->cbFill->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbFill->AutoSize = true;
			this->cbFill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbFill->Location = System::Drawing::Point(16, 328);
			this->cbFill->Name = L"cbFill";
			this->cbFill->Size = System::Drawing::Size(160, 24);
			this->cbFill->TabIndex = 10;
			this->cbFill->Text = L"Закрасить фигру";
			this->cbFill->UseVisualStyleBackColor = true;
			this->cbFill->CheckedChanged += gcnew System::EventHandler(this, &Workspace::cbFill_CheckedChanged);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->lColor);
			this->splitContainer1->Panel1->Controls->Add(this->cbFill);
			this->splitContainer1->Panel1->Controls->Add(this->lWidth);
			this->splitContainer1->Panel1->Controls->Add(this->lSize);
			this->splitContainer1->Panel1->Controls->Add(this->tbWidth);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->tbSize);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->cbFigure);
			this->splitContainer1->Panel1->Controls->Add(this->bReset);
			this->splitContainer1->Panel1MinSize = 255;
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::White;
			this->splitContainer1->Panel2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->splitContainer1->Panel2->Click += gcnew System::EventHandler(this, &Workspace::splitContainer1_Panel2_Click);
			this->splitContainer1->Size = System::Drawing::Size(674, 431);
			this->splitContainer1->SplitterDistance = 255;
			this->splitContainer1->TabIndex = 1;
			// 
			// lColor
			// 
			this->lColor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lColor->BackColor = System::Drawing::Color::White;
			this->lColor->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lColor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lColor->Location = System::Drawing::Point(16, 282);
			this->lColor->Name = L"lColor";
			this->lColor->Size = System::Drawing::Size(226, 32);
			this->lColor->TabIndex = 11;
			this->lColor->Click += gcnew System::EventHandler(this, &Workspace::lColor_Click);
			// 
			// Workspace
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 431);
			this->Controls->Add(this->splitContainer1);
			this->MinimumSize = System::Drawing::Size(690, 470);
			this->Name = L"Workspace";
			this->Text = L"Фигуры";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Workspace::Workspace_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbSize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tbWidth))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Workspace_Load(System::Object^ sender, System::EventArgs^ e) {
		cbFigure->SelectedIndex = 0;
		colorDialog1->Color = Color::White;
		graph = this->splitContainer1->Panel2->CreateGraphics();
		controller = gcnew Controller();
	}
private: System::Void tbSize_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int val = tbSize->Value;
	lSize->Text = Convert::ToString(val);
	controller->setSize(val);
}
private: System::Void tbWidth_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	int val = this->tbWidth->Value;
	lWidth->Text = Convert::ToString(val);
	controller->setWidth(val);
}
private: System::Void tbColor_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void lColor_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		lColor->BackColor = colorDialog1->Color;
		controller->setColor(colorDialog1->Color);
	}
}
private: System::Void cbFill_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	controller->setFill(cbFill->Checked);
}
private: System::Void splitContainer1_Panel2_Click(System::Object^ sender, System::EventArgs^ e) {
	int x = splitContainer1->Panel2->MousePosition.X - splitContainer1->Panel2->Location.X - 1;
	int y = splitContainer1->Panel2->MousePosition.Y - splitContainer1->Panel2->Location.Y - 23;
	controller->drawFigure(x, y, graph);
}

private: System::Void cbFigure_SelectionChangeCommitted(System::Object^ sender, System::EventArgs^ e) {
	String^ val = this->cbFigure->Text;
	FigureType type;
	if (val == "Квадрат") {
		type = FigureType::Square;
	}
	else if (val == "Прямоугольник") {
		type = FigureType::Rect;
	}
	else if (val == "Треугольник") {
		type = FigureType::Triangle;
	}
	else if (val == "Круг") {
		type = FigureType::Circle;
	}
	else {
		type = FigureType::Random;
	}
	controller->setFigureType(type);
}
private: System::Void bReset_Click(System::Object^ sender, System::EventArgs^ e) {
	graph->Clear(Color::White);
}
};
}
