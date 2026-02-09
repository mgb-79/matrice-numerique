#ifndef CLASSGUI_H
#define CLASSGUI_H
#include <QApplication>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <iostream>

class window : public QWidget {
  Q_OBJECT

public:
  window(QWidget *parent = nullptr);

private slots:
  void addTextBox();

private:
  QVBoxLayout *layout;
  QPushButton *button;
};
#endif