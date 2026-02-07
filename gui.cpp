#include <QApplication>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <iostream>

QTextEdit *add_text(QWidget *parent, const char *content, int height,
                    int width) {
  QTextEdit *text = new QTextEdit(content, parent);
  text->resize(height, width);
  return text;
}

QPushButton *add_button(QWidget *parent, const char *content, int height,
                        int width) {
  QPushButton *button = new QPushButton(content, parent);
  button->resize(height, width);
  button->move(640, 360);
  return button;
}
