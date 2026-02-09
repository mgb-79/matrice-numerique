#include "classgui.h"
#include <QApplication>
#include <QObject>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <iostream>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  window w;
  w.show();

  return app.exec();
}