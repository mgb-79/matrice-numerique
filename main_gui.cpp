#include "gui.h"
#include <QApplication>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <iostream>

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  QWidget window;
  window.resize(1280, 720);
  window.setWindowTitle("PPM Image Manager");

  QTextEdit *text =
      add_text(&window, "Welcome to this PPM Image Manager !", 1280, 720);

  QPushButton *button = add_button(&window, "Create your own image", 200, 200);

  window.show();

  return app.exec();
}