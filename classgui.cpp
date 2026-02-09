#include "classgui.h"
#include <QApplication>
#include <QDebug>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <iostream>

window::window(QWidget *parent) : QWidget(parent) {
  this->resize(1280, 720);
  layout = new QVBoxLayout(this);
  button = new QPushButton("Create your own image", this);
  layout->addWidget(button);

  connect(button, &QPushButton::clicked, this, &window::addTextBox);
}

void window::addTextBox() {
  QLineEdit *textbox = new QLineEdit(this);
  textbox->setPlaceholderText("Type something...");
  layout->addWidget(textbox);

  connect(textbox, &QLineEdit::returnPressed, this, [textbox]() {
    QString text = textbox->text();
    qDebug() << "User typed:" << text;
  });
}